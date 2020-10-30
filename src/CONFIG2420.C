//configurazione 18F2420
#include <htc.h>

#pragma config OSC = INTIO7, PWRT = ON,BOREN = OFF,WDT = OFF,PBADEN = OFF
#pragma config MCLRE = ON,LVP = OFF,DEBUG = ON
#define interruptTIMER0(void) interrupt TIMER0(void)

#define BYTE1 LATC
#define P21 LATB0
#define P22 LATB1
#define P23 LATB2
unsigned int usec;
unsigned int restart;

void configPIC (void){
	LATC=0;
	TRISC=0;
	LATB=0;
	TRISB=0b11111000;
	OSCCON=0b01100000;	//4MHz
	ADCON0=1;
	ADCON1=0b00001110;
	ADCON2=0b00100100;
	//T0CON=0b01000100;	//:32 (cost. 62)
	TMR0=62;
	INTCON=0;
}

unsigned char readADCH0(void){
	unsigned char datoAD;

	ADCON0=0b00000011;
	while (GODONE)continue;
	ADIF=0;
	datoAD=ADRESH;
	return datoAD;
}

void restartTIMER0(void){

	TMR0=-(restart/32);
	TMR0IF=0;
}

void setTIMER0CKINT(usec){
	restart=usec;
	T0CON=0b01000100;	//:32
	TMR0IF=0;
	TMR0=usec/32;
}


void setAD(char nbit, char nch){
	ADCON0=0b00000001;			//AD on
	//if(nbit==8)ADCON2=0b00000010; 
	//else ADCON2=0b10000010;
	if(nbit==8)ADCON2=0b00100010; 
	else ADCON2=0b10100010;
		
	switch (nch){
		case 1:	ADCON1=0b00001110;break;
		case 2: ADCON1=0b00001101;break;
		case 3: ADCON1=0b00001100;break;
		case 4: ADCON1=0b00001011;break;
	}
}
	
void enintGLOB(){
	GIE=1;
}			 //abilitazione interrupt globale

void enintTIMER0(){
	TMR0IE=1;
	TMR0ON=1;
}			 //abilitazione interrupt TIMER0

void onTIMER0(){
	TMR0ON=1;
}				 //abilitazione TIMER0
