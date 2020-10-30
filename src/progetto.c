/* ==========================================================================*/
// 	Voltmetro a 3 cifre multiplexato
//	micro:			PIC18F2420
//	fileconfig:		CONFIG2420
//	oscillatore:	interno 4MHz, RA0 input analogico
//	watchdog:		disabilitato
//
/* ==========================================================================*/
//  DEFINIZIONI DI SISTEMA (necessarie alla CONFIG2420)

#define	OSCINTCKOUT			//oscillatore interno
#define	FREQMHZ	4			//frequenza di lavoro

/* ==========================================================================*/
// CONFIGURAZIONE PIN (defaulT ALL PIN = INPUT)

#define BYTE1OUT				//PORTC usato come byte singolo
#define display BYTE1
#define P21OUT
#define k1 P21					//RB0 catodo K1
#define P22OUT
#define k2 P22					//RB1 catodo K2
#define P23OUT
#define k3 P23					//RB2 catodo K3
#define on 0
#define off 1

/* ==========================================================================*/
// DEFINIZIONI LOCALI

#define intTIMER0;				//necessaria alla CONFIG2420

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
const char cifra[10]={0b01111110,0b00011000,0b10110110,0b10111100,0b11011000,0b11101100,0b11101110,0b00111000,0b11111110,0b11111100};

/* ==========================================================================*/
// DICHIARAZIONE FUNZIONI

void interruptTIMER0();		//prototipo funzione di interrupt
void dividicifre();
void stampadecine();
void stampaunita();
void stampadecimi();

/* ==========================================================================*/
// INCLUDE FILE
#include <htc.h>
//#include "CONFIG28A1.c"	//da inserire in coda alle definizioni!!
#include "CONFIG2420.c"		//da inserire in coda alle definizioni!!

/* ==========================================================================*/
// PROGRAMMA PRINCIPALE 
/* ==========================================================================*/

void main(void){
	configPIC();
	setAD (8, 1);			//impostazione RA0 come ingresso analogico
	setTIMER0CKINT (2000);  //impostazione ritardo interrupt in ms
	enintGLOB();			//abilitazione interrupt globale
	enintTIMER0();			//abilitazione interrupt TIMER0
	onTIMER0();				//abilitazione TIMER0
							//inizializzazione variabili
	stato=0;
	tensione=0;
	var=0;
	i=0;
	while(1){				//ciclo infinito
		NOP();	
		NOP();
		NOP();
	} 
}
/* ==========================================================================*/
// FUNZIONI LOCALI

void interruptTIMER0(){

	restartTIMER0();					//restart TIMER0

	switch (stato){
		case 0:
			k1=off;k2=off ;k3=off;		//spegnimento display
			var=(var+readADCH0());		//lettura AN0 e sommatoria

			i++;
	
			if (i==40){					//media su 40 misure
				i=0;
				tensione=var/40;
				var=0;
				dividicifre();
			}

			
			break;

		case 1:							//visualizza decine
			stampadecine();
			k1=on;
			break;

		case 2:							////visualizza unità
			k1=off;
			stampaunita();
			k2=on;
			break;

		case 3:							//visualizza decimi
			k2=off;
			stampadecimi();
			k3=on;
			break;
		}

	if (stato<3) stato++; else stato=0;

}

//-----------------------------------------------
void dividicifre(){			//il valore di tensione viene suddiviso nelle tre cifre
	decine=tensione/100;
	unita=(tensione-(decine*100))/10;
	decimi=tensione-(decine*100)-(unita*10);
}

//-----------------------------------------------
void stampadecine(){
	display=cifra[decine];				//valore tabellare
	if(tensione<10)display= 0b10001110;	//se tensione <1.2volt c'è un corto circuito
										//il display visualizzerà .....
}

//-----------------------------------------------
void stampaunita(){
	display=(cifra[unita]|0b00000001);	//valore tabellare + decimal point
	if(tensione<10)display= 0b10001110;
}

//-----------------------------------------------
void stampadecimi(){
	display=cifra[decimi];
	if(tensione<10)display= 0b10001110;
}
