/* ==========================================================================*/
// 	Voltmetro a 3 cifre multiplexato
//	micro:			PIC18F2580
//	fileconfig:		CONFIG28A1
//	oscillatore:	interno 4MHz, RA6/7 in/out digitali
//	watchdog:		disabilitato
//
/* ==========================================================================*/
//  DEFINIZIONI DI SISTEMA

//#pragma config OSC = INTIO7, PWRT = ON,BOREN = OFF,WDT = OFF,PBADEN = OFF
//#pragma config MCLRE = ON,LVP = OFF,DEBUG = ON

/* ==========================================================================*/
// CONFIGURAZIONE PIN (defaulT ALL PIN = INPUT)


#define BYTE1OUT				//PORTC usato come byte singolo
#define display BYTE1
#define P21OUT
#define k1 P21					//RB0
#define P22OUT
#define k2 P22					//RA1
#define P23OUT
#define k3 P23					//RA2
#define on 0
#define off 1

void interruptTIMER0();	//prototipo funzione di interrupt


/* ==========================================================================*/
// DEFINIZIONI LOCALI

/* ==========================================================================*/
// DICHIARAZIONE VARIABILI
int var;
char i;
char decine;
char unita;
char decimi;
char tensione;
char stato;
char decine7seg,unita7seg,decimi7seg;
const char cifra[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};

/* ==========================================================================*/
// DICHIARAZIONE FUNZIONI

void interruptTIMER0();	//prototipo funzione di interrupt

void dividicifre();
void stampadecine();
void stampaunita();
void stampadecimi();

/* ==========================================================================*/
// INCLUDE FILE

#include <htc.h>
#include "CONFIG2420.c"	//da inserire in coda alle definizioni!!

/* ==========================================================================*/
// PROGRAMMA PRINCIPALE 
/* ==========================================================================*/


void main(void){
	configPIC();

	setAD (8, 1);			 //impostazione RA0 come ingrezzo analogico
	setTIMER0CKINT (2000);   //impostazione ritardo interrupt a 100 ms

	enintGLOB();			 //abilitazione interrupt globale
	enintTIMER0();			 //abilitazione interrupt TIMER0
	onTIMER0();				 //abilitazione TIMER0
							 //inizializzazione variabili
	stato=0;
	tensione=0;
	var=0;
	i=0;
	k1=off;
	k2=off;
	k3=off;

	while(1){

	NOP();	
	NOP();
	NOP();
	} 
}

/* ==========================================================================*/
// FUNZIONI LOCALI
void interruptTIMER0(void){

	restartTIMER0();					//reset TIMER0

	NOP();
	NOP();
	NOP();
	switch (stato){
		case 0:
		var=(var+readADCH0());					//lettura analogica RA0
		i++;
		if (i==32){
			i=0;
			tensione=var/32;
			var=0;
		}
		NOP();
		NOP();
		NOP();
		dividicifre();
		k1=off;k2=off;k3=off;
		break;

		case 1:
		stampadecine();
		k1=on;k2=off;k3=off;
		break;

		case 2:
		stampaunita();
		k1=off;k2=on;k3=off;
		break;

		case 3:
		stampadecimi();
		k1=off;k2=off;k3=on;
		break;
	}
	if (stato<3) stato++; else stato=0;

}

void dividicifre(){
	decine=tensione/100;
	unita=(tensione-(decine*100))/10;
	decimi=tensione-(decine*100)-(unita*10);
}

void stampadecine(){
	display=cifra[decine];
		if(tensione<10)display= 0b01111001;
}

void stampaunita(){
	display=(cifra[unita]|0b10000000);
		if(tensione<10)display= 0b01010000;
}

void stampadecimi(){
	display=cifra[decimi];
		if(tensione<10)display= 0b11010000;
}