#ifndef _PIC18F2420_INC_
#define _PIC18F2420_INC_

/*
 * Assembly Header file for the Microchip PIC Microcontroller
 * PIC18F2420
 */

/*
 * Device Registers
 */
PORTA                                    equ 0F80h
PORTB                                    equ 0F81h
PORTC                                    equ 0F82h
PORTE                                    equ 0F84h
LATA                                     equ 0F89h
LATB                                     equ 0F8Ah
LATC                                     equ 0F8Bh
TRISA                                    equ 0F92h
TRISB                                    equ 0F93h
TRISC                                    equ 0F94h
OSCTUNE                                  equ 0F9Bh
PIE1                                     equ 0F9Dh
PIR1                                     equ 0F9Eh
IPR1                                     equ 0F9Fh
PIE2                                     equ 0FA0h
PIR2                                     equ 0FA1h
IPR2                                     equ 0FA2h
EECON1                                   equ 0FA6h
EECON2                                   equ 0FA7h
EEDATA                                   equ 0FA8h
EEADR                                    equ 0FA9h
RCSTA                                    equ 0FABh
TXSTA                                    equ 0FACh
TXREG                                    equ 0FADh
RCREG                                    equ 0FAEh
SPBRG                                    equ 0FAFh
SPBRGH                                   equ 0FB0h
T3CON                                    equ 0FB1h
TMR3                                     equ 0FB2h
TMR3L                                    equ 0FB2h
TMR3H                                    equ 0FB3h
CMCON                                    equ 0FB4h
CVRCON                                   equ 0FB5h
ECCP1AS                                  equ 0FB6h
PWM1CON                                  equ 0FB7h
BAUDCON                                  equ 0FB8h
CCP2CON                                  equ 0FBAh
CCPR2                                    equ 0FBBh
CCPR2L                                   equ 0FBBh
CCPR2H                                   equ 0FBCh
CCP1CON                                  equ 0FBDh
CCPR1                                    equ 0FBEh
CCPR1L                                   equ 0FBEh
CCPR1H                                   equ 0FBFh
ADCON2                                   equ 0FC0h
ADCON1                                   equ 0FC1h
ADCON0                                   equ 0FC2h
ADRES                                    equ 0FC3h
ADRESL                                   equ 0FC3h
ADRESH                                   equ 0FC4h
SSPCON2                                  equ 0FC5h
SSPCON1                                  equ 0FC6h
SSPSTAT                                  equ 0FC7h
SSPADD                                   equ 0FC8h
SSPBUF                                   equ 0FC9h
T2CON                                    equ 0FCAh
PR2                                      equ 0FCBh
TMR2                                     equ 0FCCh
T1CON                                    equ 0FCDh
TMR1                                     equ 0FCEh
TMR1L                                    equ 0FCEh
TMR1H                                    equ 0FCFh
RCON                                     equ 0FD0h
WDTCON                                   equ 0FD1h
HLVDCON                                  equ 0FD2h
OSCCON                                   equ 0FD3h
T0CON                                    equ 0FD5h
TMR0                                     equ 0FD6h
TMR0L                                    equ 0FD6h
TMR0H                                    equ 0FD7h
STATUS                                   equ 0FD8h
FSR2                                     equ 0FD9h
FSR2L                                    equ 0FD9h
FSR2H                                    equ 0FDAh
PLUSW2                                   equ 0FDBh
PREINC2                                  equ 0FDCh
POSTDEC2                                 equ 0FDDh
POSTINC2                                 equ 0FDEh
INDF2                                    equ 0FDFh
BSR                                      equ 0FE0h
FSR1                                     equ 0FE1h
FSR1L                                    equ 0FE1h
FSR1H                                    equ 0FE2h
PLUSW1                                   equ 0FE3h
PREINC1                                  equ 0FE4h
POSTDEC1                                 equ 0FE5h
POSTINC1                                 equ 0FE6h
INDF1                                    equ 0FE7h
WREG                                     equ 0FE8h
FSR0                                     equ 0FE9h
FSR0L                                    equ 0FE9h
FSR0H                                    equ 0FEAh
PLUSW0                                   equ 0FEBh
PREINC0                                  equ 0FECh
POSTDEC0                                 equ 0FEDh
POSTINC0                                 equ 0FEEh
INDF0                                    equ 0FEFh
INTCON3                                  equ 0FF0h
INTCON2                                  equ 0FF1h
INTCON                                   equ 0FF2h
PROD                                     equ 0FF3h
PRODL                                    equ 0FF3h
PRODH                                    equ 0FF4h
TABLAT                                   equ 0FF5h
TBLPTR                                   equ 0FF6h
TBLPTRL                                  equ 0FF6h
TBLPTRH                                  equ 0FF7h
TBLPTRU                                  equ 0FF8h
PCLAT                                    equ 0FF9h
PCL                                      equ 0FF9h
PCLATH                                   equ 0FFAh
PCLATU                                   equ 0FFBh
STKPTR                                   equ 0FFCh
TOS                                      equ 0FFDh
TOSL                                     equ 0FFDh
TOSH                                     equ 0FFEh
TOSU                                     equ 0FFFh
/*
 * Bit Access Macros
 */
#define ABDEN                           BAUDCON, 0
#define ABDOVF                          BAUDCON, 7
#define ACKDT                           SSPCON2, 5
#define ACKEN                           SSPCON2, 4
#define ACKSTAT                         SSPCON2, 6
#define ACQT0                           ADCON2, 3
#define ACQT1                           ADCON2, 4
#define ACQT2                           ADCON2, 5
#define ADCS0                           ADCON2, 0
#define ADCS1                           ADCON2, 1
#define ADCS2                           ADCON2, 2
#define ADDEN                           RCSTA, 3
#define ADEN                            RCSTA, 3
#define ADFM                            ADCON2, 7
#define ADIE                            PIE1, 6
#define ADIF                            PIR1, 6
#define ADIP                            IPR1, 6
#define ADMSK1                          SSPCON2, 1
#define ADMSK2                          SSPCON2, 2
#define ADMSK3                          SSPCON2, 3
#define ADMSK4                          SSPCON2, 4
#define ADMSK5                          SSPCON2, 5
#define ADON                            ADCON0, 0
#define AN0                             PORTA, 0
#define AN1                             PORTA, 1
#define AN10                            PORTB, 1
#define AN11                            PORTB, 4
#define AN12                            PORTB, 0
#define AN2                             PORTA, 2
#define AN3                             PORTA, 3
#define AN4                             PORTA, 5
#define AN8                             PORTB, 2
#define AN9                             PORTB, 3
#define BCLIE                           PIE2, 3
#define BCLIF                           PIR2, 3
#define BCLIP                           IPR2, 3
#define BF                              SSPSTAT, 0
#define BGST                            HLVDCON, 5
#define BOR                             RCON, 0
#define BRG16                           BAUDCON, 3
#define BRGH                            TXSTA, 2
#define BRGH1                           TXSTA, 2
#define C1INV                           CMCON, 4
#define C1OUT                           CMCON, 6
#define C2INV                           CMCON, 5
#define C2OUT                           CMCON, 7
#define CARRY                           STATUS, 0
#define CCP1                            PORTC, 2
#define CCP1IE                          PIE1, 2
#define CCP1IF                          PIR1, 2
#define CCP1IP                          IPR1, 2
#define CCP1M0                          CCP1CON, 0
#define CCP1M1                          CCP1CON, 1
#define CCP1M2                          CCP1CON, 2
#define CCP1M3                          CCP1CON, 3
#define CCP1X                           CCP1CON, 5
#define CCP1Y                           CCP1CON, 4
#define CCP2IE                          PIE2, 0
#define CCP2IF                          PIR2, 0
#define CCP2IP                          IPR2, 0
#define CCP2M0                          CCP2CON, 0
#define CCP2M1                          CCP2CON, 1
#define CCP2M2                          CCP2CON, 2
#define CCP2M3                          CCP2CON, 3
#define CCP2X                           CCP2CON, 5
#define CCP2Y                           CCP2CON, 4
#define CCP2_PA2                        PORTB, 3
#define CCP9E                           PORTE, 3
#define CFGS                            EECON1, 6
#define CHS0                            ADCON0, 2
#define CHS1                            ADCON0, 3
#define CHS2                            ADCON0, 4
#define CHS3                            ADCON0, 5
#define CHSN3                           ADCON1, 3
#define CIS                             CMCON, 3
#define CK                              PORTC, 6
#define CKE                             SSPSTAT, 6
#define CKP                             SSPCON1, 4
#define CLKI                            PORTA, 7
#define CLKO                            PORTA, 6
#define CM0                             CMCON, 0
#define CM1                             CMCON, 1
#define CM2                             CMCON, 2
#define CMEN0                           CMCON, 0
#define CMEN1                           CMCON, 1
#define CMEN2                           CMCON, 2
#define CMIE                            PIE2, 6
#define CMIF                            PIR2, 6
#define CMIP                            IPR2, 6
#define CREN                            RCSTA, 4
#define CSRC                            TXSTA, 7
#define CSRC1                           TXSTA, 7
#define CVR0                            CVRCON, 0
#define CVR1                            CVRCON, 1
#define CVR2                            CVRCON, 2
#define CVR3                            CVRCON, 3
#define CVREF                           PORTA, 2
#define CVREN                           CVRCON, 7
#define CVROE                           CVRCON, 6
#define CVROEN                          CVRCON, 6
#define CVRR                            CVRCON, 5
#define CVRSS                           CVRCON, 4
#define DA                              SSPSTAT, 5
#define DC                              STATUS, 1
#define DC1B0                           CCP1CON, 4
#define DC1B1                           CCP1CON, 5
#define DC2B0                           CCP2CON, 4
#define DC2B1                           CCP2CON, 5
#define DONE                            ADCON0, 1
#define DT                              PORTC, 7
#define D_A                             SSPSTAT, 5
#define D_nA                            SSPSTAT, 5
#define ECCPAS0                         ECCP1AS, 4
#define ECCPAS1                         ECCP1AS, 5
#define ECCPAS2                         ECCP1AS, 6
#define ECCPASE                         ECCP1AS, 7
#define EEFS                            EECON1, 6
#define EEIE                            PIE2, 4
#define EEIF                            PIR2, 4
#define EEIP                            IPR2, 4
#define EEPGD                           EECON1, 7
#define FERR                            RCSTA, 2
#define FLT0                            PORTB, 0
#define FLTS                            OSCCON, 2
#define FREE                            EECON1, 4
#define GCEN                            SSPCON2, 7
#define GIE                             INTCON, 7
#define GIEH                            INTCON, 7
#define GIEL                            INTCON, 6
#define GIE_GIEH                        INTCON, 7
#define GO                              ADCON0, 1
#define GODONE                          ADCON0, 1
#define GO_DONE                         ADCON0, 1
#define GO_nDONE                        ADCON0, 1
#define HLVDEN                          HLVDCON, 4
#define HLVDIE                          PIE2, 2
#define HLVDIF                          PIR2, 2
#define HLVDIN                          PORTA, 5
#define HLVDIP                          IPR2, 2
#define HLVDL0                          HLVDCON, 0
#define HLVDL1                          HLVDCON, 1
#define HLVDL2                          HLVDCON, 2
#define HLVDL3                          HLVDCON, 3
#define IDLEN                           OSCCON, 7
#define INT0                            PORTB, 0
#define INT0E                           INTCON, 4
#define INT0F                           INTCON, 1
#define INT0IE                          INTCON, 4
#define INT0IF                          INTCON, 1
#define INT1                            PORTB, 1
#define INT1E                           INTCON3, 3
#define INT1F                           INTCON3, 0
#define INT1IE                          INTCON3, 3
#define INT1IF                          INTCON3, 0
#define INT1IP                          INTCON3, 6
#define INT1P                           INTCON3, 6
#define INT2                            PORTB, 2
#define INT2E                           INTCON3, 4
#define INT2F                           INTCON3, 1
#define INT2IE                          INTCON3, 4
#define INT2IF                          INTCON3, 1
#define INT2IP                          INTCON3, 7
#define INT2P                           INTCON3, 7
#define INTEDG0                         INTCON2, 6
#define INTEDG1                         INTCON2, 5
#define INTEDG2                         INTCON2, 4
#define INTSRC                          OSCTUNE, 7
#define IOFS                            OSCCON, 2
#define IPEN                            RCON, 7
#define IRCF0                           OSCCON, 4
#define IRCF1                           OSCCON, 5
#define IRCF2                           OSCCON, 6
#define IRVST                           HLVDCON, 5
#define IVRST                           HLVDCON, 5
#define KBI0                            PORTB, 4
#define KBI1                            PORTB, 5
#define KBI2                            PORTB, 6
#define KBI3                            PORTB, 7
#define LA0                             LATA, 0
#define LA1                             LATA, 1
#define LA2                             LATA, 2
#define LA3                             LATA, 3
#define LA4                             LATA, 4
#define LA5                             LATA, 5
#define LA6                             LATA, 6
#define LA7                             LATA, 7
#define LATA0                           LATA, 0
#define LATA1                           LATA, 1
#define LATA2                           LATA, 2
#define LATA3                           LATA, 3
#define LATA4                           LATA, 4
#define LATA5                           LATA, 5
#define LATA6                           LATA, 6
#define LATA7                           LATA, 7
#define LATB0                           LATB, 0
#define LATB1                           LATB, 1
#define LATB2                           LATB, 2
#define LATB3                           LATB, 3
#define LATB4                           LATB, 4
#define LATB5                           LATB, 5
#define LATB6                           LATB, 6
#define LATB7                           LATB, 7
#define LATC0                           LATC, 0
#define LATC1                           LATC, 1
#define LATC2                           LATC, 2
#define LATC3                           LATC, 3
#define LATC4                           LATC, 4
#define LATC5                           LATC, 5
#define LATC6                           LATC, 6
#define LATC7                           LATC, 7
#define LB0                             LATB, 0
#define LB1                             LATB, 1
#define LB2                             LATB, 2
#define LB3                             LATB, 3
#define LB4                             LATB, 4
#define LB5                             LATB, 5
#define LB6                             LATB, 6
#define LB7                             LATB, 7
#define LC0                             LATC, 0
#define LC1                             LATC, 1
#define LC2                             LATC, 2
#define LC3                             LATC, 3
#define LC4                             LATC, 4
#define LC5                             LATC, 5
#define LC6                             LATC, 6
#define LC7                             LATC, 7
#define LVDEN                           HLVDCON, 4
#define LVDIE                           PIE2, 2
#define LVDIF                           PIR2, 2
#define LVDIN                           PORTA, 5
#define LVDIP                           IPR2, 2
#define LVDL0                           HLVDCON, 0
#define LVDL1                           HLVDCON, 1
#define LVDL2                           HLVDCON, 2
#define LVDL3                           HLVDCON, 3
#define LVV0                            HLVDCON, 0
#define LVV1                            HLVDCON, 1
#define LVV2                            HLVDCON, 2
#define LVV3                            HLVDCON, 3
#define MCLR                            PORTE, 3
#define NEGATIVE                        STATUS, 4
#define NOT_A                           SSPSTAT, 5
#define NOT_W                           SSPSTAT, 2
#define OERR                            RCSTA, 1
#define OSC1                            PORTA, 7
#define OSC2                            PORTA, 6
#define OSCFIE                          PIE2, 7
#define OSCFIF                          PIR2, 7
#define OSCFIP                          IPR2, 7
#define OSTS                            OSCCON, 3
#define OV                              STATUS, 3
#define OVERFLOW                        STATUS, 3
#define PA1                             PORTC, 2
#define PA2                             PORTC, 1
#define PC3E                            PORTE, 3
#define PCFG0                           ADCON1, 0
#define PCFG1                           ADCON1, 1
#define PCFG2                           ADCON1, 2
#define PCFG3                           ADCON1, 3
#define PD                              RCON, 2
#define PEIE                            INTCON, 6
#define PEIE_GIEL                       INTCON, 6
#define PEN                             SSPCON2, 2
#define PGC                             PORTB, 6
#define PGD                             PORTB, 7
#define PGM                             PORTB, 5
#define PLLEN                           OSCTUNE, 6
#define POR                             RCON, 1
#define PRSEN                           PWM1CON, 7
#define PSA                             T0CON, 3
#define PSSAC0                          ECCP1AS, 2
#define PSSAC1                          ECCP1AS, 3
#define RA0                             PORTA, 0
#define RA1                             PORTA, 1
#define RA2                             PORTA, 2
#define RA3                             PORTA, 3
#define RA4                             PORTA, 4
#define RA5                             PORTA, 5
#define RA6                             PORTA, 6
#define RA7                             PORTA, 7
#define RB0                             PORTB, 0
#define RB1                             PORTB, 1
#define RB2                             PORTB, 2
#define RB3                             PORTB, 3
#define RB4                             PORTB, 4
#define RB5                             PORTB, 5
#define RB6                             PORTB, 6
#define RB7                             PORTB, 7
#define RBIE                            INTCON, 3
#define RBIF                            INTCON, 0
#define RBIP                            INTCON2, 0
#define RBPU                            INTCON2, 7
#define RC0                             PORTC, 0
#define RC1                             PORTC, 1
#define RC1IE                           PIE1, 5
#define RC1IF                           PIR1, 5
#define RC1IP                           IPR1, 5
#define RC2                             PORTC, 2
#define RC3                             PORTC, 3
#define RC4                             PORTC, 4
#define RC5                             PORTC, 5
#define RC6                             PORTC, 6
#define RC7                             PORTC, 7
#define RCEN                            SSPCON2, 3
#define RCIDL                           BAUDCON, 6
#define RCIE                            PIE1, 5
#define RCIF                            PIR1, 5
#define RCIP                            IPR1, 5
#define RCMT                            BAUDCON, 6
#define RD                              EECON1, 0
#define RD163                           T3CON, 7
#define RE3                             PORTE, 3
#define RI                              RCON, 4
#define RJPU                            PORTA, 7
#define RSEN                            SSPCON2, 1
#define RW                              SSPSTAT, 2
#define RX                              PORTC, 7
#define RX9                             RCSTA, 6
#define RX9D                            RCSTA, 0
#define RXCKP                           BAUDCON, 5
#define RXDTP                           BAUDCON, 5
#define R_W                             SSPSTAT, 2
#define R_nW                            SSPSTAT, 2
#define SBOREN                          RCON, 6
#define SCK                             PORTC, 3
#define SCKP                            BAUDCON, 4
#define SCL                             PORTC, 3
#define SCS0                            OSCCON, 0
#define SCS1                            OSCCON, 1
#define SDA                             PORTC, 4
#define SDI                             PORTC, 4
#define SDO                             PORTC, 5
#define SEN                             SSPCON2, 0
#define SENDB                           TXSTA, 3
#define SENDB1                          TXSTA, 3
#define SMP                             SSPSTAT, 7
#define SOSCEN                          T1CON, 3
#define SOSCEN3                         T3CON, 3
#define SP0                             STKPTR, 0
#define SP1                             STKPTR, 1
#define SP2                             STKPTR, 2
#define SP3                             STKPTR, 3
#define SP4                             STKPTR, 4
#define SPEN                            RCSTA, 7
#define SREN                            RCSTA, 5
#define SRENA                           RCSTA, 5
#define SS                              PORTA, 5
#define SSPEN                           SSPCON1, 5
#define SSPIE                           PIE1, 3
#define SSPIF                           PIR1, 3
#define SSPIP                           IPR1, 3
#define SSPM0                           SSPCON1, 0
#define SSPM1                           SSPCON1, 1
#define SSPM2                           SSPCON1, 2
#define SSPM3                           SSPCON1, 3
#define SSPOV                           SSPCON1, 6
#define START                           SSPSTAT, 3
#define STKFUL                          STKPTR, 7
#define STKOVF                          STKPTR, 7
#define STKUNF                          STKPTR, 6
#define STOP                            SSPSTAT, 4
#define SWDTE                           WDTCON, 0
#define SWDTEN                          WDTCON, 0
#define SYNC                            TXSTA, 4
#define SYNC1                           TXSTA, 4
#define T016BIT                         T0CON, 6
#define T08BIT                          T0CON, 6
#define T0CKI                           PORTA, 4
#define T0CS                            T0CON, 5
#define T0IE                            INTCON, 5
#define T0IF                            INTCON, 2
#define T0PS0                           T0CON, 0
#define T0PS1                           T0CON, 1
#define T0PS2                           T0CON, 2
#define T0PS3                           T0CON, 3
#define T0SE                            T0CON, 4
#define T13CKI                          PORTC, 0
#define T1CKI                           PORTC, 0
#define T1CKPS0                         T1CON, 4
#define T1CKPS1                         T1CON, 5
#define T1OSCEN                         T1CON, 3
#define T1OSI                           PORTC, 1
#define T1OSO                           PORTC, 0
#define T1RD16                          T1CON, 7
#define T1RUN                           T1CON, 6
#define T1SYNC                          T1CON, 2
#define T2CKPS0                         T2CON, 0
#define T2CKPS1                         T2CON, 1
#define T2OUTPS0                        T2CON, 3
#define T2OUTPS1                        T2CON, 4
#define T2OUTPS2                        T2CON, 5
#define T2OUTPS3                        T2CON, 6
#define T3CCP1                          T3CON, 3
#define T3CCP2                          T3CON, 6
#define T3CKPS0                         T3CON, 4
#define T3CKPS1                         T3CON, 5
#define T3RD16                          T3CON, 7
#define T3SYNC                          T3CON, 2
#define TMR0IE                          INTCON, 5
#define TMR0IF                          INTCON, 2
#define TMR0IP                          INTCON2, 2
#define TMR0ON                          T0CON, 7
#define TMR1CS                          T1CON, 1
#define TMR1IE                          PIE1, 0
#define TMR1IF                          PIR1, 0
#define TMR1IP                          IPR1, 0
#define TMR1ON                          T1CON, 0
#define TMR2IE                          PIE1, 1
#define TMR2IF                          PIR1, 1
#define TMR2IP                          IPR1, 1
#define TMR2ON                          T2CON, 2
#define TMR3CS                          T3CON, 1
#define TMR3IE                          PIE2, 1
#define TMR3IF                          PIR2, 1
#define TMR3IP                          IPR2, 1
#define TMR3ON                          T3CON, 0
#define TO                              RCON, 3
#define TOUTPS0                         T2CON, 3
#define TOUTPS1                         T2CON, 4
#define TOUTPS2                         T2CON, 5
#define TOUTPS3                         T2CON, 6
#define TRISA0                          TRISA, 0
#define TRISA1                          TRISA, 1
#define TRISA2                          TRISA, 2
#define TRISA3                          TRISA, 3
#define TRISA4                          TRISA, 4
#define TRISA5                          TRISA, 5
#define TRISA6                          TRISA, 6
#define TRISA7                          TRISA, 7
#define TRISB0                          TRISB, 0
#define TRISB1                          TRISB, 1
#define TRISB2                          TRISB, 2
#define TRISB3                          TRISB, 3
#define TRISB4                          TRISB, 4
#define TRISB5                          TRISB, 5
#define TRISB6                          TRISB, 6
#define TRISB7                          TRISB, 7
#define TRISC0                          TRISC, 0
#define TRISC1                          TRISC, 1
#define TRISC2                          TRISC, 2
#define TRISC3                          TRISC, 3
#define TRISC4                          TRISC, 4
#define TRISC5                          TRISC, 5
#define TRISC6                          TRISC, 6
#define TRISC7                          TRISC, 7
#define TRMT                            TXSTA, 1
#define TRMT1                           TXSTA, 1
#define TUN0                            OSCTUNE, 0
#define TUN1                            OSCTUNE, 1
#define TUN2                            OSCTUNE, 2
#define TUN3                            OSCTUNE, 3
#define TUN4                            OSCTUNE, 4
#define TX                              PORTC, 6
#define TX1IE                           PIE1, 4
#define TX1IF                           PIR1, 4
#define TX1IP                           IPR1, 4
#define TX9                             TXSTA, 6
#define TX91                            TXSTA, 6
#define TX9D                            TXSTA, 0
#define TX9D1                           TXSTA, 0
#define TXCKP                           BAUDCON, 4
#define TXEN                            TXSTA, 5
#define TXEN1                           TXSTA, 5
#define TXIE                            PIE1, 4
#define TXIF                            PIR1, 4
#define TXIP                            IPR1, 4
#define UA                              SSPSTAT, 1
#define ULPWUIN                         PORTA, 0
#define VCFG0                           ADCON1, 4
#define VCFG01                          ADCON1, 4
#define VCFG1                           ADCON1, 5
#define VCFG11                          ADCON1, 5
#define VDIRMAG                         HLVDCON, 7
#define VPP                             PORTE, 3
#define VREFN                           PORTA, 2
#define VREFP                           PORTA, 3
#define W4E                             BAUDCON, 1
#define WCOL                            SSPCON1, 7
#define WR                              EECON1, 1
#define WREN                            EECON1, 2
#define WRERR                           EECON1, 3
#define WUE                             BAUDCON, 1
#define ZERO                            STATUS, 2
#define nA                              SSPSTAT, 5
#define nADDRESS                        SSPSTAT, 5
#define nBOR                            RCON, 0
#define nDONE                           ADCON0, 1
#define nMCLR                           PORTE, 3
#define nPD                             RCON, 2
#define nPOR                            RCON, 1
#define nRBPU                           INTCON2, 7
#define nRI                             RCON, 4
#define nSS                             PORTA, 5
#define nT1SYNC                         T1CON, 2
#define nT3SYNC                         T3CON, 2
#define nTO                             RCON, 3
#define nW                              SSPSTAT, 2
#define nWRITE                          SSPSTAT, 2

#endif // _PIC18F2420_INC_
