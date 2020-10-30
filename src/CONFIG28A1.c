
/*
#asm // like this...
movlb (_var) > > 8
rlcf (_var)&0ffh,f
#endasm
asm(“movlb (_var)> >8”);
asm(“rlcf (_var)&0ffh,f”);
void setCN1{	



void setCN1(unsigned char xx){
	extern unsigned char xy;
	xy=xx;
	#asm
		movff	_xy,WREG
		clrf	WREG
		clrf	INTCON
		clrf	_forx
		clrf	_xy
	#endasm
}
*/








// Modulo di configurazione per PIC18F2580
//=============================================================

#pragma	config IESO=OFF, FCMEN=OFF
	
//OSCINT (FREQ <4MHZ,8MHZ,16MHZ,32MHZ>)
//OSCINT_CKOUT	(il segnale di CLOCK è presente sul pin P10)
//OSCXT
//OSCHS
//OSCHSPLL


//defaul OSCINT, FREQ=4MHz RA6/RA7 digital 
#if defined OSCXT
	#pragma config OSC=XT
#elif defined OSCHS
	#pragma config OSC=HS
#elif defined OSCHSPLL
	#pragma config OSC=HSPLL
#elif defined OSCINT
	#pragma config OSC=IRCIO67
#elif defined OSCINTCKOUT
	#pragma config OSC=IRCIO7
#else
	#pragma config OSC=IRCIO67
#endif


#pragma	config BOREN=OFF, PWRT=ON
#pragma config WDT=OFF
#pragma config PBADEN=OFF
#pragma config DEBUG=ON, STVREN=ON, XINST=OFF, LVP=OFF

//=============================================================
//	dichiarazioni di utilità


unsigned char utilechar0,utilechar1,utilechar2,utilechar3;
unsigned int utileint0,utileint1,utileint2,utileint3;
unsigned char kh,kl,hh,hl;

#ifdef MPWM1
	unsigned char contaMPWM1;
#endif
#ifdef MPWM2
	unsigned char contaMPWM2;
#endif
#ifdef MPWM3
	unsigned char contaMPWM3;
#endif
#ifdef MPWM4
	unsigned char contaMPWM4;
#endif
#if defined MPWM1 || defined MPWM2 || defined MPWM3 || defined MPWM4
	unsigned char periodoMPWM;
#endif

//=============================================================

void configPIC(void)
{
	
	//configurazione di default, periferiche tutte disabilitate
	T0CON=0;				//TIMER0
	T1CON=0;				//TIMER1
	T2CON=0;				//TIMER2
	T3CON=0;				//TIMER3
	CCP1CON=0;				//CCP1 (PWM)
	SSPCON1=0;				//MSSP
	RCSTA=0;				//EUSART
	ADCON1=0x0F;ADCON0=0;	//ingressi tutti digitali
	HLVDCON=0;				//HLV
	CANCON=0b00100000;		//CAN
			
	//-------------------------
	OSCCON=0b01100000;		//default 4MHZ
	PLLEN=0;				//default PLL disable

	//--------------------------
	#if defined OSCINT || defined OSCINTCKOUT
		#if FREQMHZ == 8 
			OSCCON=0b01110000;	//8MHZ
		#elif FREQMHZ == 16
			PLLEN=1;			//4MHZ con PLLx4
		#elif FREQMHZ == 32
			OSCCON=0b01110000;	//8MHZ
			PLLEN=1;			//PLLx4
		#endif
	#endif	

	//------------------------------------------------------
	// registri speciali del micro utilizzati
	RXM0EIDH=0;RXM0EIDL=0;	//VPWM1
	RXM1EIDH=0;RXM1EIDL=0;	//VPWM1
	RXF1EIDH=0;RXF1EIDL=0;	//VPWM1
	RXF5EIDH=0;RXF5EIDL=0;	//VPWM1


	//------------------------------------------------------
	// variabili da inizializzare
	#ifdef MPWM1 
		contaMPWM1=0; 
	#endif
	#ifdef MPWM2 
		contaMPWM2=0; 
	#endif
	#ifdef MPWM3 
		contaMPWM3=0; 
	#endif
	#ifdef MPWM4 
		contaMPWM4=0; 
	#endif				

	//------------------------------------------------------
	//	PORTA (default tutti DIGITAL INPUT)
	
	TRISA=0xFF;
	LATA=0;
	ADCON1=0x0F;
	
	#if defined OSCINTCKOUT || defined OSCINT
		#if defined P9OUT
			TRISA7=0;
			#define P9	LATA7
		#else
			#define P9	RA7
		#endif
	#endif
	
	#if defined OSCINTCKOUT
		TRISA6=0;
		#undef P10
	#endif
	
	#if defined OSCINT
		#if defined P10OUT
			TRISA6=0;
			#define P10	LATA6
		#else
			#define P10	RA6
		#endif
	#endif

	#ifdef P7OUT
		TRISA5=0;
		#define P7	LATA5
	#else
		#define P7 	RA5
	#endif

	#ifndef P6COUNTER0CKI
		#ifdef P6OUT
			TRISA4=0;
			#define P6	LATA4
		#else
			#define P6 	RA4
		#endif
	#endif
	
	#ifdef P5OUT
		TRISA3=0;
		#define P5	LATA3
	#else
		#define P5 	RA3
	#endif
	
	#ifdef P4OUT
		TRISA2=0;
		#define P4	LATA2
	#else
		#define P4 	RA2
	#endif

	#ifdef P3OUT
		TRISA1=0;
		#define P3	LATA1
	#else
		#define P3	RA1
	#endif

	#ifdef P2OUT
		TRISA0=0;
		#define P2	LATA0
	#else
		#define P2	RA0
	#endif
		
	//------------------------portB

	TRISB=0xFF;
	LATB=0;
	
	#ifdef RPULLUP
		RBPU=0;
	#endif
		
	#if !defined intP21
		#ifdef P21OUT
			TRISB0=0;
			#define P21	LATB0
		#else
			#define P21 RB0
		#endif
	#else
		#define P21 RB0		
	#endif
	
	#if !defined intP22
		#ifdef P22OUT
			TRISB1=0;
			#define P22	LATB1
		#else
			#define P22 RB1
		#endif
	#else
		#define P22 RB1		
	#endif
	
	#ifdef P23OUT
		TRISB2=0;
		#define P23	LATB2
	#else
		#define P23 RB2
	#endif

		
	#ifdef P24OUT
		TRISB3=0;
		#define P24	LATB3
	#else
		#define P24 RB3
	#endif
	
	#ifdef P25OUT
		TRISB4=0;
		#define P25	LATB4
	#else
		#define P25 RB4
	#endif
	
	#ifdef P26OUT
		TRISB5=0;
		#define P26	LATB5
	#else
		#define P26 RB5
	#endif

	//-----------------------PORTC
	
	TRISC=0xFF;
	LATC=0;
	CCP1CON=0;
	SSPCON1=0;

	#ifdef P11OUT
		TRISC0=0;
		#define P11	LATC0
	#else
		#define P11 RC0
	#endif
	
	#ifdef P12OUT
		TRISC1=0;
		#define P12	LATC1
	#else
		#define P12 RC1
	#endif
	
	#ifdef P13OUT
		TRISC2=0;
		#define P13	LATC2
	#else
		#define P13 RC2
	#endif
	
	#ifdef P14OUT
		TRISC3=0;
		#define P14	LATC3
	#else
		#define P14 RC3
	#endif
	
	#ifdef P15OUT
		TRISC4=0;
		#define P15	LATC4
	#else
		#define P15 RC4
	#endif
	
	#ifdef P16OUT
		TRISC5=0;
		#define P16	LATC5
	#else
		#define P16 RC5
	#endif
	
	#ifdef P17OUT
		TRISC6=0;
		#define P17	LATC6
	#else
		#define P17 RC6
	#endif
	
	#ifdef P18OUT
		TRISC7=0;
		#define P18	LATC7
	#else
		#define P18 RC7
	#endif


	//------------------------------------	
	#ifdef BYTE1OUT
		LATC=0;
		TRISC=0x00;
		#define BYTE1 LATC		//byte in uscita
	#else
		#define BYTE1 PORTC		//byte in ingresso
	#endif

	//------------------------------------	
	/*
	#ifdef BYTE2OUT
		LATC=0;
		TRISC=0x00;
		#define BYTE1 LATC		//byte in uscita
	#else
		#define BYTE1 PORTC		//byte in ingresso
	#endif
	*/
}






//=============================================================
// INTERRUPT

void interruptUSART1(void);


//=============================================================

//abilitazione/disabilitazione globale degli interrupt
#define enintGLOB()	GIE=1;PEIE=1;
#define disintGLOB() GIE=0;PEIE=0;



void interrupt globINT(void)

	{
	#if defined intP21
		if (INT0IF){
			interruptP21();
			INT0IF=0;
			}
	#endif
	
	#if defined intP22
		if (INT1IF){
			interruptP22();
			INT1IF=0;
			}
	#endif
	
	#if defined intTIMER0 && !defined intCOUNTER0	
		if (TMR0IF){
			interruptTIMER0();
			TMR0IF=0;
			}
	#endif

	#if defined MPWM1 || defined MPWM2 || defined MPWM3 || defined MPWM4
		#if !defined intTIMER0 && !defined intCOUNTER0	
			if (TMR0IF){
				
				TMR0L=RXF0EIDL+TMR0L;	//correzione causa la durata istruzioni
				//MPWM1=!MPWM1;
				
				periodoMPWM++;		//incremento periodo
				if(periodoMPWM==0){		//termine periodo, nuovo giro
					#ifdef MPWM1 
						if(contaMPWM1>0)MPWM1=1; 
					#endif
					#ifdef MPWM2 
						if(contaMPWM2>0)MPWM2=1; 
					#endif
					#ifdef MPWM3 
						if(contaMPWM3>0)MPWM3=1; 
					#endif
					#ifdef MPWM4 
						if(contaMPWM4>0)MPWM4=1; 
					#endif				
					}
				else{
					#ifdef MPWM1 
						if(periodoMPWM>contaMPWM1) MPWM1=0;
					#endif
					#ifdef MPWM2 
						if(periodoMPWM>contaMPWM2) MPWM2=0;
					#endif
					#ifdef MPWM3 
						if(periodoMPWM>contaMPWM3) MPWM3=0;
					#endif
					#ifdef MPWM4 
						if(periodoMPWM>contaMPWM4) MPWM4=0;
					#endif				
				}
				TMR0IF=0;
			}
		#endif
	#endif




	#if defined intCOUNTER0 && !defined intTIMER0 
		if (TMR0IF){
			interruptCOUNTER0();
			TMR0IF=0;
			}
	#endif

	#if defined intTIMER1 && !defined intCOUNTER1 && !defined VPWM1	&& !defined MONOTON
		if (TMR1IF){
			interruptTIMER1();
			TMR1IF=0;
			}
	#endif

	#if defined intCOUNTER1 && !defined intTIMER1 && !defined VPWM1 && !defined MONOTON 
		if (TMR1IF){
			interruptCOUNTER1();
			TMR1IF=0;
			}
	#endif

	//PWM
	#if defined VPWM1 && !defined intTIMER1 && !defined intCOUNTER1	&& !defined MONOTON
		if (TMR1IF){
			//-----funzione di interrupt
			if((RXF5EIDH==0)&&(RXF5EIDL==0)){			//se Ton=0
				VPWM1=0;TMR1H=RXM0EIDH;TMR1L=RXM0EIDL;	//TIMER1=Periodo
				}
			else {
				if(!VPWM1){
					VPWM1=1;							//pin=1
					TMR1H=RXF5EIDH;TMR1L=RXF5EIDL;		//TIMER1=Ton
					RXF1EIDH=RXM1EIDH;RXF1EIDL=RXM1EIDL;//Toff=Toffback
					}
				else {
					VPWM1=0;							//pin=0
					TMR1H=RXF1EIDH;TMR1L=RXF1EIDL;		//TIMER1=Toff
					}
				}
			//--------------------------
			TMR1IF=0;
			}
	#endif

	//MONOSTABILE
	#if defined MONOTON && !defined VPWM1 && !defined intTIMER1 && !defined intCOUNTER1
		if (TMR1IF){
			MONOTON=0;
			TMR1ON=0;TMR1IE=0;TMR1IF=0;
		}
	#endif	
	
	#ifdef INT_TIMER3
		if (TMR3IF){
			TIMER3_interrupt();
			TMR3IF=0;
			}
	#endif

	#if defined intnearUSART1 && !defined intfarUSART1
		if (RCIF){
			interruptnearUSART1();
			RCIF=0;
		}
	#endif

	#if defined intfarUSART1 && !defined intnearUSART1
		if (RCIF){
			interruptfarUSART1();
			RCIF=0;
		}
	#endif
	}

//=============================================================











//============================================================================
//	INT0/1 - P21/P22 interrupt
//============================================================================

#define enintP21HL() INT0IE=1;INT0IF=0;INTEDG0=0;
#define enintP21LH() INT0IE=1;INT0IF=0;INTEDG0=1;
#define enintP22HL() INT1IE=1;INT1IF=0;INTEDG1=0;
#define enintP22LH() INT1IE=1;INT1IF=0;INTEDG1=1;



//============================================================================
//	USART1 definizioni e funzioni
//============================================================================
// set della periferica USART1. Il protocollo è standard <N,8,1>
// tranne che nella velocità di trasferimento
// USART1(baud,N,8,1)

#ifdef intfarUSART1
	#define	lenbufferUSART1	64	//lunghezza del buffer di ricezione 
	unsigned char bufferrxUSART1[lenbufferUSART1];	//buffer di ricezione
	unsigned char posdatorxUSART1;	//numero di caratteri ricevuti
#endif


#define flagrxUSART1	RCIF	//flag di ricezione avvenuta
#define onUSART1() 		{TXEN=1;CREN=1;RCIF=0;}
#define offUSART1() 	{TXEN=0;CREN=0;}
#define datorxUSART1()	 RCREG
#define disintrxUSART1() RCIE=0	
//-----------------------------
// baudrate 300:115200

void setUSART1(unsigned long baud){	
	LC6=1;TRISC6=0;TRISC7=1;RCIF=0;
	TXSTA=0b00000100;	//TXEN=0,SYNC=0,BRGH=1
	RCSTA=0b10000000;	//SPEN=1,CREN=0
	BAUDCON=0b00001000;	//..,BRG16=1				
	SPBRGH=((((FREQMHZ * 1000000)/baud)/4)-1)/256;
	SPBRG=((((FREQMHZ * 1000000)/baud)/4)-1)-(SPBRGH*256);
}

//---------------------------
//es: txdatoUSART1(0x71);
//es: txdatoUSART1(122);

void txdatoUSART1 (unsigned char dato)
	{while (!TRMT){};
	TXREG=dato;
}

//-----------------------------
//txstringaUSART1 ("ABCDEF");
//#define stringa1 "012345"
//txstringaUSART1 (stringa1);

void txstringaUSART1 (const char *s)
	{while(*s) txdatoUSART1(*s++);}

//-----------------------------
//enable interrupt su ricezione dato seriale
void enintrxUSART1(void){
	unsigned char x;
	//GIE=1;PEIE=1;
	RCIF=0;RCIE=1;	
	#ifdef intfarUSART1
		posdatorxUSART1=0;
		for (x=0;x<lenbufferUSART1;x++){bufferrxUSART1[x]=0;}
	#endif
}	


#ifdef	intfarUSART1
	//-----------------------------
	//lettura dei caratteri, memorizzazione nel buffer, incremento puntatore
	void interruptfarUSART1(){
		asm("movff	RCREG,RXF4EIDH");
		bufferrxUSART1[posdatorxUSART1]=RXF4EIDH;
		if (posdatorxUSART1<lenbufferUSART1) posdatorxUSART1++;	
	}
#endif



//============================================================================
// PWM1
//============================================================================

#define onPWM1() TMR2ON=1;CCP1CON=0x0F
#define offPWM1() TMR2ON=0;CCP1CON=0

void setdutycyclePWM1(unsigned char perc){	//da eseguire dopo la "setperiodoPWM1"
	if(!T2OUTPS0) CCPR1L=perc;
	else CCPR1L=perc<<1;					// percentuale x 2
}

void setperiodoPWM1(unsigned int periodo){
	
	LATC2=0;
	TRISC2=0;

	CCP1CON=0;					//defaul PWM/CCCP disabilitati
	CCP1CON=0b00001111;
	switch (periodo){
		case 100:				// 100 * ciclo macchina (PR2=99, presc:1)
			T2CON=0b00000100;	// duty cycle*1
			PR2=99;
			break;
		case 200:				// (PR2=199, presc:1) duty cycle*2
			T2CON=0b00001100;	// viene usato T2CON.3 come flag
			PR2=199;
			break;				
		case 400:				// (PR2=99, presc:4) duty cycle*1
			T2CON=0b00000101;
			PR2=99;
			break;
		case 800:				// (PR2=199, presc:4) duty cycle*2
			T2CON=0b00001101;
			PR2=199;
			break;
		case 1600:				// (PR2=99, presc:16) duty cycle*1
			T2CON=0b00000110;
			PR2=99;
			break;
		case 3200:				// (PR2=199, presc:16) duty cycle*2
			T2CON=0b00001110;
			PR2=199;
			break;
		default:				// (PR2=199, presc:16) duty cycle*2
			T2CON=0b00001110;
			break;
	}		
}


//============================================================================
// VPWM1 - Virtual PWM1
//============================================================================
// utilizza la risorsa TIMER1 in interrupt
// RXM0	= Periodo
// RXF5 = Ton
// RXM1 = Toffback
// RXF1 = Toff

void setPeriodoVPWM1(unsigned int periodo){
	//RXM0=Periodo
	//Toff=Periodo
	//Ton=0
	//pin XVPWM1=0
	//disabilito l'interrupt TMR1
	//se periodo>0 TMR1IE=1;TMR1IF=0;
	//
	//con "setPeriodoVPWM1(>0)" viene abilitato anche l'interrupt TMR1
	//con "setPeriodoVPWM1(0)" viene disabilitato l'interrupt TMR1

	#if (defined OSCINTCKOUT) || (defined OSCINT)
		switch (FREQMHZ){			//base tempi = 1usec con tutte le frequenze
									//TIMER1=16bit,prescaler,oscill off,sync,
									//clock internal,stop
			case 4:
				T1CON=0b10000000;	//:1
				break;
			case 8:
				T1CON=0b10010000;	//:2
				break;
			
			case 16:
				T1CON=0b10100000;	//:4
				break;
			
			case 32:
				T1CON=0b10110000;	//:8
				break;
		}
	#endif
	
	//RXM0EIDH:RXM0EIDL= backup Periodo
	periodo--;
	RXM0EIDH=periodo/256;
	RXM0EIDH^=0xFF;
	//TMR1H=RXM0EIDH;
	RXF1EIDH=RXM0EIDH;
	RXM0EIDL=periodo;
	RXM0EIDL^=0xFF;
	//TMR1L=RXM0EIDL;
	
	RXF1EIDL=RXM0EIDL;
	RXF1EIDH=RXM0EIDH;
	
	RXF5EIDH=0;RXF5EIDL=0;
	
	#ifdef VPWM1
		VPWM1=0;
	#endif
	
	if(periodo>0){TMR1IE=1;TMR1ON=1;} else {TMR1IE=0;TMR1ON=0;}
	TMR1IF=0;
}


void setTonVPWM1(unsigned int tonusec){	//da eseguire dopo la "setPerVPWM1"
	//disabilito interrupt TMR1
	//memorizzo Ton in RXF5
	//Toffback=Periodo-Ton
	//abilito l'interrupt del TMR1
	//
	//per azzerare il pin di out eseguire "setTonVPWM1(0)"
	
	TMR1IE=0;
	tonusec--;
	RXF5EIDH=tonusec/256;
	RXF5EIDH^=0xFF;
	RXF5EIDL=tonusec;
	RXF5EIDL^=0xFF;
	
	//Toffback
	#asm
		movff	RXF5EIDL,PRODL	//Ton
		movff	RXF5EIDH,PRODH
		comf	PRODL
		comf	PRODH
		infsnz	PRODL
		incf	PRODH
		
		movff	RXM0EIDL,WREG	//Periodo
		addwf	PRODL,0			//differenza
		movff	WREG,RXM1EIDL	//RXM1=Toffback
		movff	RXM0EIDH,WREG
		addwfc	PRODH,0
		movff	WREG,RXM1EIDH
	#endasm		

	TMR1IE=1;

}

//============================================================================
// MODULO PWM (i segnali PWM vengono generati su una base tempi in interrupt)
// la base tempi viene generata dal TIMER0 in interrupt

#define onMPWM()		TMR0ON=1;TMR0IF=0;TMR0IE=1	//on TIMER0, enable INT
#define offMPWM()		TMR0ON=0;TMR0IE=1			//off TIMER0, disab INT
#define flagMPWM	  	TMR0IF			//flag di overflow TIMER0


#if defined MPWM1 || defined MPWM2 || defined MPWM3 || defined MPWM4

	void setModuloPWM(unsigned char risoluzione){
		#if (defined OSCINTCKOUT) || (defined OSCINT)
		
			//base tempi = 1usec * risoluzione
			//"risoluzione" deve essere maggiore di ......
			switch (FREQMHZ){			
				case 4:
					T0CON=0b01001000;	//TIMER0off,8bit,:1
					break;
				case 8:
					T0CON=0b01000000;	//:2
					break;			
				case 16:
					T0CON=0b01000001;	//:4
					break;			
				case 32:
					T0CON=0b01000010;	//:8
					break;
			}
		#endif
		flagMPWM=0;
		//RXF0EIDL= backup costante di tempo
		RXF0EIDL=risoluzione-5;	//empirica
		RXF0EIDL^=0xFF;
		TMR0L=RXF0EIDL;
		periodoMPWM=0;
	}
#endif




void setTonMPWM1(unsigned char valMPWM1){
	#ifdef MPWM1
		contaMPWM1=valMPWM1;	
	#endif
}

void setTonMPWM2(unsigned char valMPWM2){
	#ifdef MPWM2
		contaMPWM2=valMPWM2;	
	#endif

}

void setTonMPWM3(unsigned char valMPWM3){
	#ifdef MPWM3
		contaMPWM3=valMPWM3;	
	#endif

}

void setTonMPWM4(unsigned char valMPWM4){
	#ifdef MPWM4
		contaMPWM4=valMPWM4;	
	#endif

}

//============================================================================
// TON MONOSTABILE (0:65535usec)
// genera un impulso di durata variabile

void setMonoTon(unsigned int usec){
	#if (defined OSCINTCKOUT) || (defined OSCINT)
		switch (FREQMHZ){			//base tempi = 1usec con tutte le frequenze
									//TIMER1=16bit,prescaler,oscill off,sync,
									//clock internal,stop
			case 4:
				T1CON=0b10000000;	//:1
				break;
			case 8:
				T1CON=0b10010000;	//:2
				break;
			
			case 16:
				T1CON=0b10100000;	//:4
				break;
			
			case 32:
				T1CON=0b10110000;	//:8
				break;
		}
	#endif
	usec--;
	//RXF1EIDH:RXF1EIDL= backup costante di tempo
	RXF1EIDH=usec/256;
	RXF1EIDH^=0xFF;
	TMR1H=RXF1EIDH;
	RXF1EIDL=usec;
	RXF1EIDL^=0xFF;
	TMR1L=RXF1EIDL;
	
	#ifdef	MONOTON
		TMR1IF=0;TMR1IE=1;
		TMR1ON=1;		//start TIMER1
		MONOTON=1;		//set del pin
	#endif
}




//============================================================================
// TIMER0
//============================================================================
	
#define onTIMER0()		TMR0ON=1		//on TIMER0
#define offIMER0()		TMR0ON=0		//on TIMER0
#define flagTIMER0  	TMR0IF			//flag di overflow TIMER0
#define restartTIMER0()	flagTIMER0=0;TMR0H=RXF0EIDH;TMR0L=RXF0EIDL
#define enintTIMER0()	TMR0IF=0;TMR0IE=1
#define disintTIMER0()	TMR0IE=1

//============================================================================
// timer0 0:1000000usec
void setTIMER0CKINT(unsigned long usec){
	#if (defined OSCINTCKOUT) || (defined OSCINT)
		switch (FREQMHZ){			//base tempi = 16usec con tutte le frequenze
									//TIMER0=stop,16bit,prescaler
			case 4:
				T0CON=0b00000011;	//:16
				break;
			case 8:
				T0CON=0b00000100;	//:32
				break;
			
			case 16:
				T0CON=0b00000101;	//:64
				break;
			
			case 32:
				T0CON=0b00000110;	//:128
				break;
		}
	#endif
	usec=usec/16;
	usec--;
	flagTIMER0=0;
	//RXF0EIDH:RXF0EIDL= backup costante di tempo
	RXF0EIDH=usec/256;
	RXF0EIDH^=0xFF;
	TMR0H=RXF0EIDH;
	RXF0EIDL=usec;
	RXF0EIDL^=0xFF;
	TMR0L=RXF0EIDL;
}

//============================================================================
// COUNTER0
//============================================================================
	
#define COUNTER0		TMR0
#define onCOUNTER0()	TMR0ON=1		//on COUNTER0
#define offCOUNTER0()	TMR0ON=0		//on COUNTER0
#define flagCOUNTER0	TMR0IF			//flag di overflow COUNTER0
#define restartCOUNTER0()	flagCOUNTER0=0;TMR0H=RXF0EIDH;TMR0L=RXF0EIDL
#define enintCOUNTER0()	TMR0IF=0;TMR0IE=1
#define disintCOUNTER0()TMR0IE=1

//============================================================================
// 	valoreiniziale=0:65535, prescaler=1,2,4,8,16,32,64,128,256
// 	il conteggio degli impulsi presenti sul pin "COUNTER0" avviene in 
//	incremento/decremento dal valore iniziale, con 
//	interposto il prescaler

void setupCOUNTER0(unsigned int valoreiniziale,unsigned char prescaler){

	TRISA4=1;
	
	switch (prescaler){	
		case 1:
			T0CON=0b00101000;
			break;
		case 2:
			T0CON=0b00100000;
			break;
		case 4:
			T0CON=0b00100001;
			break;
		case 8:
			T0CON=0b00100010;
			break;
		case 16:
			T0CON=0b00100011;
			break;
		case 32:
			T0CON=0b00100100;
			break;
		case 64:
			T0CON=0b00100101;
			break;
		case 128:
			T0CON=0b00100110;
			break;
		case 256:
			T0CON=0b00100111;
			break;
		default:
			T0CON=0b00101000;	//default :1
			break;
	}	
	flagCOUNTER0=0;
	RXF0EIDH=valoreiniziale/256;
	TMR0H=RXF0EIDH;
	RXF0EIDL=valoreiniziale;
	TMR0L=RXF0EIDL;
}

//============================================================================
//	Il conteggio in "down" è solo una finzione e serve a capire quando il
//  conteggio è arrivato a zero (anche se in realtà il counter conta sempre
//	in avanti)

void setdownCOUNTER0(unsigned int valoreiniziale,unsigned char prescaler){

	TRISA4=1;

	switch (prescaler){	
		case 1:
			T0CON=0b00101000;
			break;
		case 2:
			T0CON=0b00100000;
			break;
		case 4:
			T0CON=0b00100001;
			break;
		case 8:
			T0CON=0b00100010;
			break;
		case 16:
			T0CON=0b00100011;
			break;
		case 32:
			T0CON=0b00100100;
			break;
		case 64:
			T0CON=0b00100101;
			break;
		case 128:
			T0CON=0b00100110;
			break;
		case 256:
			T0CON=0b00100111;
			break;
		default:
			T0CON=0b00101000;	//default :1
			break;
	}	

	flagCOUNTER0=0;
	RXF0EIDH=valoreiniziale/256;
	RXF0EIDH^=0xFF;
	TMR0H=RXF0EIDH;
	RXF0EIDL=valoreiniziale;
	RXF0EIDL^=0xFF;
	TMR0L=RXF0EIDL;

}



//============================================================================
// TIMER1
//============================================================================
	
#define onTIMER1()		TMR1ON=1		//on TIMER1
#define offTIMER1()		TMR1ON=0		//on TIMER1
#define flagTIMER1  	TMR1IF			//flag di overflow TIMER1
#define restartTIMER1()	flagTIMER1=0;TMR1H=RXF1EIDH;TMR1L=RXF1EIDL
#define enintTIMER1()	TMR1IF=0;TMR1IE=1
#define disintTIMER1()	TMR1IE=0

//============================================================================
// timer1 0:65535usec
void setTIMER1CKINT(unsigned int usec){
	#if (defined OSCINTCKOUT) || (defined OSCINT)
		switch (FREQMHZ){			//base tempi = 1usec con tutte le frequenze
									//TIMER1=16bit,prescaler,oscill off,sync,
									//clock internal,stop
			case 4:
				T1CON=0b10000000;	//:1
				break;
			case 8:
				T1CON=0b10010000;	//:2
				break;
			
			case 16:
				T1CON=0b10100000;	//:4
				break;
			
			case 32:
				T1CON=0b10110000;	//:8
				break;
		}
	#endif
	usec--;
	flagTIMER1=0;
	//RXF1EIDH:RXF1EIDL= backup costante di tempo
	RXF1EIDH=usec/256;
	RXF1EIDH^=0xFF;
	TMR1H=RXF1EIDH;
	RXF1EIDL=usec;
	RXF1EIDL^=0xFF;
	TMR1L=RXF1EIDL;
}




//======================================================
// COUNTER1
	
#define COUNTER1		TMR1
#define onCOUNTER1()	TMR1ON=1		//on COUNTER1
#define offCOUNTER1()	TMR1ON=0		//on COUNTER1
#define flagCOUNTER1	TMR1IF			//flag di overflow COUNTER1
#define restartCOUNTER1()	flagCOUNTER1=0;TMR1H=RXF1EIDH;TMR1L=RXF1EIDL
#define enintCOUNTER1()	TMR1IF=0;TMR1IE=1
#define disintCOUNTER1()TMR1IE=1

//============================================================================
// 	valoreiniziale=0:65535, prescaler=1,2,4,8
// 	il conteggio degli impulsi presenti sul pin "COUNTER1" (TMR13CKI)avviene in
//	incremento/decremento dal valore iniziale, con interposto il prescaler

void setupCOUNTER1(unsigned int valoreiniziale,unsigned char prescaler){

	TRISC0=1;
	
	switch (prescaler){	
		case 1:
			T1CON=0b10000010;
			break;
		case 2:
			T1CON=0b10010010;
			break;
		case 4:
			T1CON=0b10100010;
			break;
		case 8:
			T1CON=0b10110010;
			break;
		default:
			T1CON=0b10000010;	//default :1
			break;
	}	
	flagCOUNTER1=0;
	RXF1EIDH=valoreiniziale/256;
	TMR1H=RXF1EIDH;
	RXF1EIDL=valoreiniziale;
	TMR1L=RXF1EIDL;
}


//============================================================================
//	Il conteggio in "down" è solo una finzione e serve a capire quando il
//  conteggio è arrivato a zero (anche se in realtà il counter conta sempre
//	in avanti)

void setdownCOUNTER1(unsigned int valoreiniziale,unsigned char prescaler){

	TRISC0=1;
	
	switch (prescaler){	
		case 1:
			T1CON=0b10000010;
			break;
		case 2:
			T1CON=0b10010010;
			break;
		case 4:
			T1CON=0b10100010;
			break;
		case 8:
			T1CON=0b10110010;
			break;
		default:
			T1CON=0b10000010;	//default :1
			break;
	}	

	flagCOUNTER1=0;
	RXF1EIDH=valoreiniziale/256;
	RXF1EIDH^=0xFF;
	TMR1H=RXF1EIDH;
	RXF1EIDL=valoreiniziale;
	RXF1EIDL^=0xFF;
	TMR1L=RXF1EIDL;

}


//============================================================================
// A/D di default: 
// 8bit, 1 canale (CH0)), VREFMENO=0, VREFPIU=5, giustificato destra
//
// nbit=8/10. Se 8bit il dato a 10bit viene giustif. a destra, se 10bit sin.
// nch= 1,2,3,4
//
// Acquisition Time= Automatic, A/D Conversion Clock= Fosc/32
//============================================================================


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

//la macro "enVREFMIN" abilita anche 3 canali analogici
void enVREFMIN(){
	if(VCFG0)ADCON1=0b00111011; 
	else ADCON1=0b00101100;		//VREF- = P4, 3 canali
}

//la macro "enVREFMAX" abilita anche 4 canali analogici
void enVREFMAX(){
	if(VCFG1)ADCON1=0b00111011;	//VREF+ = P5, 4 canali
	else ADCON1=0b00011011;
}

unsigned int readADCH0 (void){
	unsigned int datoAD;
	ADCON0=0b00000011;			//GODONE, ADON
	//_delay(10);				//automatic acquisition time
	while (GODONE)continue;
	ADIF=0;
	if(!ADFM)datoAD=ADRESH;
	else {
		datoAD=ADRESH;
		datoAD=datoAD<<8;
		datoAD+=ADRESL;
	}
	return datoAD;
}

unsigned int readADCH1 (void){
	unsigned int datoAD;
	ADCON0=0b00000111;			//GODONE, ADON
	//_delay(10);				//automatic acquisition time
	while (GODONE)continue;
	ADIF=0;
	if(!ADFM)datoAD=ADRESH;
	else {
		datoAD=ADRESH;
		datoAD=datoAD<<8;
		datoAD+=ADRESL;
	}
	return datoAD;
}

unsigned int readADCH2 (void){
	unsigned int datoAD;
	ADCON0=0b00001011;			//GODONE, ADON
	//_delay(10);				//automatic acquisition time
	while (GODONE)continue;
	ADIF=0;
	if(!ADFM)datoAD=ADRESH;
	else {
		datoAD=ADRESH;
		datoAD=datoAD<<8;
		datoAD+=ADRESL;
	}
	return datoAD;
}

unsigned int readADCH3 (void){
	unsigned int datoAD;
	ADCON0=0b00001111;			//GODONE, ADON
	//_delay(10);				//automatic acquisition time
	while (GODONE)continue;
	ADIF=0;
	if(!ADFM)datoAD=ADRESH;
	else {
		datoAD=ADRESH;
		datoAD=datoAD<<8;
		datoAD+=ADRESL;
	}
	return datoAD;
}

//****************************************************************************
//  FUNZIONI DI UTILITA'
//****************************************************************************

//===================================================================
//  ritardousec(0:255)
//  funzione di ritardo in microsecondi (con FREQMHZ=4 è un poco imprecisa)
//  reg. usati: WREG
//  SOLO PER FREQMHZ = 4/8/16/32 !!!

void ritardousec(unsigned char micro){
	#if FREQMHZ == 4 
		micro=micro>>2;
	#elif FREQMHZ == 8
		micro=micro>>1;
	#endif
	WREG=micro;
	#asm
dlyu01:	nop
		#if FREQMHZ == 32
			nop
			nop
			nop
			nop
		#endif
		decfsz	WREG
		bra		dlyu01
	#endasm
}


//===================================================================
//  ritardo10usec(0:65535)
//  funzione di ritardo in multipli di 10microsecondi
//  tempi di ritardo (0:655msec.)
//  SOLO PER FREQMHZ = 4/8/16/32 !!!

void ritardo10usec(unsigned int micro){
	unsigned char giri;
	#if FREQMHZ == 32
		micro=micro;
	#elif FREQMHZ == 16
		micro=micro>>1;
	#elif FREQMHZ == 8
		micro=micro>>2;
	#elif FREQMHZ == 4
		micro=micro>>3;
	#endif
	
	while(--micro>0){
		giri=20;NOP();NOP();NOP();
		while(--giri>0){}
	}
}



/*

	
		
//-----------------------------------------------------------
// TIMER1

	#define	TIMER1		TMR1;
	#define COUNTER1	TMR1;
	
//-----------------------------------------------------------
// TIMER2 utilizzato solo per la periferica PWM !!!

	#define	TIMER2 		TMR2;
	
//-----------------------------------------------------------
// TIMER3

	#define	TIMER3			TMR3;
	#define COUNTER3		TMR3;
		
	





		
//-----------------------------------------------------------
// TIMER1/COUNTER1

void setTIMER1(unsigned char nbit, unsigned char presc1){
	switch (presc1){
		case 1:
			T1CON=0b00000000;break;
		case 2:
			T1CON=0b00010000;break;
		case 4:
			T1CON=0b00100000;break;
		case 8:
			T1CON=0b00110000;break;
		default:
			T1CON=0b00000000;		//Timer1_OFF,8bit,:1,stop,shut off
			break;			
	}
	switch (nbit){
		case 8:
			break;
		case 16:
			T1CON=T1CON|0b10000000;break;
		default:
			break;
	}
}

void setCOUNTER1 (unsigned char nbit, unsigned char div1){
	switch (div1){
		case 1:
			T1CON=0b10000010;break;
		case 2:
			T1CON=0b10010010;break;
		case 4:
			T1CON=0b10100010;break;
		case 8:
			T1CON=0b10110010;break;
		default:
			T1CON=0b10000010;		//Timer1_OFF,16bit,:1,stop,shut off
			break;			
	}
	TRISC0=1;
	switch (nbit){
		case 8:
			T1CON=T1CON&0b01111111;break;
		case 16:
			T1CON=T1CON|0b10000000;break;
		default:
			T1CON=T1CON&0b01111111;break;
	}
}

#define TIMER1_ON TMR1ON=1
#define TIMER1_OFF TMR1ON=0
#define COUNTER1_ON TMR1ON=1
#define COUNTER1_OFF TMR1ON=0
#define clear_TIMER0 {TMR0H=0;TMR0L=0;}
#define clear_COUNTER1 {TMR1H=0;TMR1L=0;}

void setVAL_TIMER1 (unsigned int valore)
	{valore=(valore^0xFFFF)+1;
	TMR1H=valore>>8;
	TMR1L=valore;}

void setVAL_COUNTER1 (unsigned int valore)
	{valore=(valore^0xFFFF)+1;
	TMR1H=valore>>8;
	TMR1L=valore;}

//-----------------------------------------------------------
// TIMER2


setTIMER2 (unsigned char presc2, unsigned char post2){
	switch (presc2){
		case 1:
			T2CON=0b00000000;break;
		case 4:
			T2CON=0b00000001;break;
		case 16:
			T2CON=0b00000010;break;
		default:
			T2CON=0b00000000;break;		//Timer2_OFF,presc:1,post:1						
	}
	T2CON=T2CON|((post2-1)<<3);
}

#define TIMER2_ON TMR2ON=1
#define TIMER2_OFF TMR2ON=0

void setVAL_TIMER2 (unsigned int valore)		//LIMITE MASSIMO 255 !!!!
	{if (valore<256)TMR2=valore; else TMR2=255;}

void setLIM_TIMER2 (unsigned int valore)		//LIMITE MASSIMO 255 !!!!
	{if (valore<256)PR2=valore; else PR2=255;}

//-----------------------------------------------------------
// TIMER3

setTIMER3 (unsigned char nbit, unsigned char presc3){

	switch (presc3){
		case 1:
			T3CON=0b01001000;break;
		case 2:
			T3CON=0b01011000;break;
		case 4:
			T3CON=0b01101000;break;
		case 8:
			T3CON=0b01111000;break;
		default:
			T3CON=0b01001000;		//Timer3_OFF,8bit,:1,stop,shut off
			break;			
	}
	switch (nbit){
		case 8:
			break;
		case 16:
			T3CON=T3CON|0b10000000;break;
		default:
			break;
	}
}

setCOUNTER3 (unsigned char nbit, unsigned char presc3){

	switch (presc3){
		case 1:
			T3CON=0b11001010;break;
		case 2:
			T3CON=0b11011010;break;
		case 4:
			T3CON=0b11101010;break;
		case 8:
			T3CON=0b11111010;break;
		default:
			T3CON=0b11001010;break;		//Timer3_OFF,8bit,:1,stop,shut off
						
	}
	switch (nbit){
		case 8:
			break;
		case 16:
			T3CON=T3CON|0b10000000;break;
		default:
			break;
	}
	TRISC0=1;
}

#define TIMER3_ON TMR3ON=1
#define TIMER3_OFF TMR3ON=0
#define COUNTER3_ON TMR3ON=1
#define COUNTER3_OFF TMR3ON=0
#define clear_TIMER3 {TMR3H=0;TMR3L=0;}
#define clear_COUNTER3 {TMR3H=0;TMR3L=0;}

void setVAL_TIMER3 (unsigned int valore)
	{valore=(valore^0xFFFF)+1;
	TMR3H=valore>>8;
	TMR3L=valore;}

void setVAL_COUNTER3 (unsigned int valore)
	{valore=(valore^0xFFFF)+1;
	TMR3H=valore>>8;
	TMR3L=valore;}

	

//------------------------------------------------------------
// AD

#define CH0 0
#define CH1 1
#define CH2 2

unsigned int readAD (unsigned char canale)
	{
	//unsigned int dato;
	ADCON0 |= canale<<2;
	_delay(10);				//da rivedere
	GODONE=1;
	while (GODONE)continue;
	ADIF=0;
	//dato=ADRESH;
	#ifdef AD10BIT
		unsigned int dato;
		dato=ADRESH;
		{dato=dato<<8;
		dato+=ADRESL;}
	#else
		unsigned char dato;
		dato=ADRESH;				
	#endif
	return dato;
	}
//-------------------------------------------------------------





	//======================================================
	// Analogico/Digitale (canali max = 4 :AN0,AN1,AN2,AN3)
	// default: AN0:AN3 analog, VREF-=0, VREF+=+5, CH0
	
	ADCON0=0b00000001;	//modulo ON, selezione CH0

	
	ADCON1=0b00001011;	//Vref+ 5V, Vref- 0V, AN0:AN3
	#ifdef P04_VREFMIN
		ADCON1=ADCON1 | 0x20;	//Vref- = AN2 (P4)
	#endif
	#ifdef P05_VREFMAX
		ADCON1=ADCON1 | 0x10;	//Vref+ = AN3 (P5)
	#endif
	#ifdef P02_AD
		ADCON1=0b00001110;
		#define P02	0
	#endif
	#ifdef P03_AD
		ADCON1=0b00001101;
		#define P03	1
	#endif
	#ifdef P04_AD
		ADCON1=0b00001100;
		#define P04	2
	#endif
	#ifdef P05_AD
		ADCON1=0b00001011;
		#define P05	3
	#endif
	
	#ifdef AD10BIT
		ADCON2=0b10100010;	//giust. destra,8 TAD, Fosc/32
	#else
		ADCON2=0b00100010;	//giust. sin.,8 TAD, Fosc/32
	#endif
							//da verificare!!!!!!

	//CMCON=0b00000111;	//comparatori off
	//CVRCON	





*/
