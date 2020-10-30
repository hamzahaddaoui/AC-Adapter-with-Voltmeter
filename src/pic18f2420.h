#ifndef _PIC18F2420_H_
#define _PIC18F2420_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC18F2420
 */
#ifndef _HTC_H_
#warning Header file pic18f2420.h included directly. Use #include <htc.h> instead.
#endif

/*
 * Register Definitions
 */

// Register: PORTA
extern volatile unsigned char           PORTA               @ 0xF80;
#ifndef _LIB_BUILD
asm("PORTA equ 0F80h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
    struct {
        unsigned RA                     :8;
    };
    struct {
        unsigned AN0                    :1;
        unsigned AN1                    :1;
        unsigned AN2                    :1;
        unsigned AN3                    :1;
        unsigned T0CKI                  :1;
        unsigned AN4                    :1;
        unsigned OSC2                   :1;
        unsigned OSC1                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned VREFN                  :1;
        unsigned VREFP                  :1;
        unsigned                        :1;
        unsigned SS                     :1;
        unsigned CLKO                   :1;
        unsigned CLKI                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_SS                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned CVREF                  :1;
        unsigned                        :2;
        unsigned nSS                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LVDIN                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned HLVDIN                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned C1OUT                  :1;
        unsigned C2OUT                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned RJPU                   :1;
    };
    struct {
        unsigned ULPWUIN                :1;
    };
} PORTAbits @ 0xF80;

// Register: PORTB
extern volatile unsigned char           PORTB               @ 0xF81;
#ifndef _LIB_BUILD
asm("PORTB equ 0F81h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned RB                     :8;
    };
    struct {
        unsigned INT0                   :1;
        unsigned INT1                   :1;
        unsigned INT2                   :1;
        unsigned CCP2                   :1;
        unsigned KBI0                   :1;
        unsigned KBI1                   :1;
        unsigned KBI2                   :1;
        unsigned KBI3                   :1;
    };
    struct {
        unsigned AN12                   :1;
        unsigned AN10                   :1;
        unsigned AN8                    :1;
        unsigned AN9                    :1;
        unsigned AN11                   :1;
        unsigned PGM                    :1;
        unsigned PGC                    :1;
        unsigned PGD                    :1;
    };
    struct {
        unsigned FLT0                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP2_PA2               :1;
    };
} PORTBbits @ 0xF81;

// Register: PORTC
extern volatile unsigned char           PORTC               @ 0xF82;
#ifndef _LIB_BUILD
asm("PORTC equ 0F82h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned RC                     :8;
    };
    struct {
        unsigned T1OSO                  :1;
        unsigned T1OSI                  :1;
        unsigned CCP1                   :1;
        unsigned SCK                    :1;
        unsigned SDI                    :1;
        unsigned SDO                    :1;
        unsigned TX                     :1;
        unsigned RX                     :1;
    };
    struct {
        unsigned T13CKI                 :1;
        unsigned CCP2                   :1;
        unsigned                        :1;
        unsigned SCL                    :1;
        unsigned SDA                    :1;
        unsigned                        :1;
        unsigned CK                     :1;
        unsigned DT                     :1;
    };
    struct {
        unsigned T1CKI                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned PA1                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned PA2                    :1;
    };
} PORTCbits @ 0xF82;

// Register: PORTE
extern volatile unsigned char           PORTE               @ 0xF84;
#ifndef _LIB_BUILD
asm("PORTE equ 0F84h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :3;
        unsigned RE3                    :1;
    };
    struct {
        unsigned RE                     :8;
    };
    struct {
        unsigned                        :3;
        unsigned MCLR                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_MCLR               :1;
    };
    struct {
        unsigned                        :3;
        unsigned nMCLR                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned VPP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned CCP10                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CCP2E                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned CCP6E                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned CCP7E                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned CCP8E                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CCP9E                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CS                     :1;
    };
    struct {
        unsigned                        :7;
        unsigned PA2E                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned PB1E                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned PB2                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned PB3E                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned PC1E                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned PC2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned PC3E                   :1;
    };
    struct {
        unsigned PD2                    :1;
    };
    struct {
        unsigned RDE                    :1;
    };
    struct {
        unsigned RE0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned RE1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned RE2                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned RE4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned RE5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned RE6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned RE7                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned WRE                    :1;
    };
} PORTEbits @ 0xF84;

// Register: LATA
extern volatile unsigned char           LATA                @ 0xF89;
#ifndef _LIB_BUILD
asm("LATA equ 0F89h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LATA                   :8;
    };
    struct {
        unsigned LA0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LA1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LA2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LA3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LA4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LA5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LA6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LA7                    :1;
    };
} LATAbits @ 0xF89;

// Register: LATB
extern volatile unsigned char           LATB                @ 0xF8A;
#ifndef _LIB_BUILD
asm("LATB equ 0F8Ah");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned LATB0                  :1;
        unsigned LATB1                  :1;
        unsigned LATB2                  :1;
        unsigned LATB3                  :1;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LATB                   :8;
    };
    struct {
        unsigned LB0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LB1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LB2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LB3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LB4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LB5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LB6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LB7                    :1;
    };
} LATBbits @ 0xF8A;

// Register: LATC
extern volatile unsigned char           LATC                @ 0xF8B;
#ifndef _LIB_BUILD
asm("LATC equ 0F8Bh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LATC                   :8;
    };
    struct {
        unsigned LC0                    :1;
    };
    struct {
        unsigned                        :1;
        unsigned LC1                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned LC2                    :1;
    };
    struct {
        unsigned                        :3;
        unsigned LC3                    :1;
    };
    struct {
        unsigned                        :4;
        unsigned LC4                    :1;
    };
    struct {
        unsigned                        :5;
        unsigned LC5                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned LC6                    :1;
    };
    struct {
        unsigned                        :7;
        unsigned LC7                    :1;
    };
} LATCbits @ 0xF8B;

// Register: TRISA
extern volatile unsigned char           TRISA               @ 0xF92;
#ifndef _LIB_BUILD
asm("TRISA equ 0F92h");
#endif
// aliases
extern volatile unsigned char           DDRA                @ 0xF92;
#ifndef _LIB_BUILD
asm("DDRA equ 0F92h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned TRISA                  :8;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} TRISAbits @ 0xF92;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned TRISA                  :8;
    };
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
} DDRAbits @ 0xF92;

// Register: TRISB
extern volatile unsigned char           TRISB               @ 0xF93;
#ifndef _LIB_BUILD
asm("TRISB equ 0F93h");
#endif
// aliases
extern volatile unsigned char           DDRB                @ 0xF93;
#ifndef _LIB_BUILD
asm("DDRB equ 0F93h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned TRISB                  :8;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} TRISBbits @ 0xF93;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned TRISB                  :8;
    };
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
} DDRBbits @ 0xF93;

// Register: TRISC
extern volatile unsigned char           TRISC               @ 0xF94;
#ifndef _LIB_BUILD
asm("TRISC equ 0F94h");
#endif
// aliases
extern volatile unsigned char           DDRC                @ 0xF94;
#ifndef _LIB_BUILD
asm("DDRC equ 0F94h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned TRISC                  :8;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} TRISCbits @ 0xF94;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned TRISC                  :8;
    };
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
} DDRCbits @ 0xF94;

// Register: OSCTUNE
extern volatile unsigned char           OSCTUNE             @ 0xF9B;
#ifndef _LIB_BUILD
asm("OSCTUNE equ 0F9Bh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TUN                    :5;
        unsigned                        :1;
        unsigned PLLEN                  :1;
        unsigned INTSRC                 :1;
    };
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
    };
} OSCTUNEbits @ 0xF9B;

// Register: PIE1
extern volatile unsigned char           PIE1                @ 0xF9D;
#ifndef _LIB_BUILD
asm("PIE1 equ 0F9Dh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned SSPIE                  :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IE                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IE                  :1;
    };
} PIE1bits @ 0xF9D;

// Register: PIR1
extern volatile unsigned char           PIR1                @ 0xF9E;
#ifndef _LIB_BUILD
asm("PIR1 equ 0F9Eh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSPIF                  :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSPIF                  :1;
        unsigned                        :2;
        unsigned ADIF                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IF                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IF                  :1;
    };
} PIR1bits @ 0xF9E;

// Register: IPR1
extern volatile unsigned char           IPR1                @ 0xF9F;
#ifndef _LIB_BUILD
asm("IPR1 equ 0F9Fh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1IP                 :1;
        unsigned TMR2IP                 :1;
        unsigned CCP1IP                 :1;
        unsigned SSPIP                  :1;
        unsigned TXIP                   :1;
        unsigned RCIP                   :1;
        unsigned ADIP                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RC1IP                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned TX1IP                  :1;
    };
} IPR1bits @ 0xF9F;

// Register: PIE2
extern volatile unsigned char           PIE2                @ 0xFA0;
#ifndef _LIB_BUILD
asm("PIE2 equ 0FA0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned TMR3IE                 :1;
        unsigned HLVDIE                 :1;
        unsigned BCLIE                  :1;
        unsigned EEIE                   :1;
        unsigned                        :1;
        unsigned CMIE                   :1;
        unsigned OSCFIE                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIE                  :1;
    };
} PIE2bits @ 0xFA0;

// Register: PIR2
extern volatile unsigned char           PIR2                @ 0xFA1;
#ifndef _LIB_BUILD
asm("PIR2 equ 0FA1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned TMR3IF                 :1;
        unsigned HLVDIF                 :1;
        unsigned BCLIF                  :1;
        unsigned EEIF                   :1;
        unsigned                        :1;
        unsigned CMIF                   :1;
        unsigned OSCFIF                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIF                  :1;
    };
} PIR2bits @ 0xFA1;

// Register: IPR2
extern volatile unsigned char           IPR2                @ 0xFA2;
#ifndef _LIB_BUILD
asm("IPR2 equ 0FA2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCP2IP                 :1;
        unsigned TMR3IP                 :1;
        unsigned HLVDIP                 :1;
        unsigned BCLIP                  :1;
        unsigned EEIP                   :1;
        unsigned                        :1;
        unsigned CMIP                   :1;
        unsigned OSCFIP                 :1;
    };
    struct {
        unsigned                        :2;
        unsigned LVDIP                  :1;
    };
} IPR2bits @ 0xFA2;

// Register: EECON1
extern volatile unsigned char           EECON1              @ 0xFA6;
#ifndef _LIB_BUILD
asm("EECON1 equ 0FA6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned                        :1;
        unsigned CFGS                   :1;
        unsigned EEPGD                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned EEFS                   :1;
    };
} EECON1bits @ 0xFA6;

// Register: EECON2
extern volatile unsigned char           EECON2              @ 0xFA7;
#ifndef _LIB_BUILD
asm("EECON2 equ 0FA7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned EECON2                 :8;
    };
} EECON2bits @ 0xFA7;

// Register: EEDATA
extern volatile unsigned char           EEDATA              @ 0xFA8;
#ifndef _LIB_BUILD
asm("EEDATA equ 0FA8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned EEDATA                 :8;
    };
} EEDATAbits @ 0xFA8;

// Register: EEADR
extern volatile unsigned char           EEADR               @ 0xFA9;
#ifndef _LIB_BUILD
asm("EEADR equ 0FA9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned EEADR                  :8;
    };
} EEADRbits @ 0xFA9;

// Register: RCSTA
extern volatile unsigned char           RCSTA               @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA equ 0FABh");
#endif
// aliases
extern volatile unsigned char           RCSTA1              @ 0xFAB;
#ifndef _LIB_BUILD
asm("RCSTA1 equ 0FABh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTAbits @ 0xFAB;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
    struct {
        unsigned                        :3;
        unsigned ADEN                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned SRENA                  :1;
    };
} RCSTA1bits @ 0xFAB;

// Register: TXSTA
extern volatile unsigned char           TXSTA               @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA equ 0FACh");
#endif
// aliases
extern volatile unsigned char           TXSTA1              @ 0xFAC;
#ifndef _LIB_BUILD
asm("TXSTA1 equ 0FACh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
} TXSTAbits @ 0xFAC;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned BRGH1                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned CSRC1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SENDB1                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SYNC1                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned TRMT1                  :1;
    };
    struct {
        unsigned                        :6;
        unsigned TX91                   :1;
    };
    struct {
        unsigned TX9D1                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned TXEN1                  :1;
    };
} TXSTA1bits @ 0xFAC;

// Register: TXREG
extern volatile unsigned char           TXREG               @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG equ 0FADh");
#endif
// aliases
extern volatile unsigned char           TXREG1              @ 0xFAD;
#ifndef _LIB_BUILD
asm("TXREG1 equ 0FADh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TXREG                  :8;
    };
} TXREGbits @ 0xFAD;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned TXREG                  :8;
    };
} TXREG1bits @ 0xFAD;

// Register: RCREG
extern volatile unsigned char           RCREG               @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG equ 0FAEh");
#endif
// aliases
extern volatile unsigned char           RCREG1              @ 0xFAE;
#ifndef _LIB_BUILD
asm("RCREG1 equ 0FAEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RCREG                  :8;
    };
} RCREGbits @ 0xFAE;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned RCREG                  :8;
    };
} RCREG1bits @ 0xFAE;

// Register: SPBRG
extern volatile unsigned char           SPBRG               @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG equ 0FAFh");
#endif
// aliases
extern volatile unsigned char           SPBRG1              @ 0xFAF;
#ifndef _LIB_BUILD
asm("SPBRG1 equ 0FAFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SPBRG                  :8;
    };
} SPBRGbits @ 0xFAF;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned SPBRG                  :8;
    };
} SPBRG1bits @ 0xFAF;

// Register: SPBRGH
extern volatile unsigned char           SPBRGH              @ 0xFB0;
#ifndef _LIB_BUILD
asm("SPBRGH equ 0FB0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SPBRGH                 :8;
    };
} SPBRGHbits @ 0xFB0;

// Register: T3CON
extern volatile unsigned char           T3CON               @ 0xFB1;
#ifndef _LIB_BUILD
asm("T3CON equ 0FB1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :2;
        unsigned NOT_T3SYNC             :1;
    };
    struct {
        unsigned TMR3ON                 :1;
        unsigned TMR3CS                 :1;
        unsigned nT3SYNC                :1;
        unsigned T3CCP1                 :1;
        unsigned T3CKPS                 :2;
        unsigned T3CCP2                 :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T3SYNC                 :1;
        unsigned                        :1;
        unsigned T3CKPS0                :1;
        unsigned T3CKPS1                :1;
    };
    struct {
        unsigned                        :7;
        unsigned RD163                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN3                :1;
    };
    struct {
        unsigned                        :7;
        unsigned T3RD16                 :1;
    };
} T3CONbits @ 0xFB1;

// Register: TMR3
extern volatile unsigned short          TMR3                @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3 equ 0FB2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR3                   :16;
    };
} TMR3bits @ 0xFB2;

// Register: TMR3L
extern volatile unsigned char           TMR3L               @ 0xFB2;
#ifndef _LIB_BUILD
asm("TMR3L equ 0FB2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR3L                  :8;
    };
} TMR3Lbits @ 0xFB2;

// Register: TMR3H
extern volatile unsigned char           TMR3H               @ 0xFB3;
#ifndef _LIB_BUILD
asm("TMR3H equ 0FB3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR3H                  :8;
    };
} TMR3Hbits @ 0xFB3;

// Register: CMCON
extern volatile unsigned char           CMCON               @ 0xFB4;
#ifndef _LIB_BUILD
asm("CMCON equ 0FB4h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CM                     :3;
        unsigned CIS                    :1;
        unsigned C1INV                  :1;
        unsigned C2INV                  :1;
        unsigned C1OUT                  :1;
        unsigned C2OUT                  :1;
    };
    struct {
        unsigned CM0                    :1;
        unsigned CM1                    :1;
        unsigned CM2                    :1;
    };
    struct {
        unsigned CMEN0                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned CMEN1                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned CMEN2                  :1;
    };
} CMCONbits @ 0xFB4;

// Register: CVRCON
extern volatile unsigned char           CVRCON              @ 0xFB5;
#ifndef _LIB_BUILD
asm("CVRCON equ 0FB5h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CVR                    :4;
        unsigned CVRSS                  :1;
        unsigned CVRR                   :1;
        unsigned CVROE                  :1;
        unsigned CVREN                  :1;
    };
    struct {
        unsigned CVR0                   :1;
        unsigned CVR1                   :1;
        unsigned CVR2                   :1;
        unsigned CVR3                   :1;
    };
    struct {
        unsigned                        :6;
        unsigned CVROEN                 :1;
    };
} CVRCONbits @ 0xFB5;

// Register: ECCP1AS
extern volatile unsigned char           ECCP1AS             @ 0xFB6;
#ifndef _LIB_BUILD
asm("ECCP1AS equ 0FB6h");
#endif
// aliases
extern volatile unsigned char           ECCPAS              @ 0xFB6;
#ifndef _LIB_BUILD
asm("ECCPAS equ 0FB6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned                        :2;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} ECCP1ASbits @ 0xFB6;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned                        :2;
        unsigned PSSAC                  :2;
        unsigned ECCPAS                 :3;
        unsigned ECCPASE                :1;
    };
    struct {
        unsigned                        :2;
        unsigned PSSAC0                 :1;
        unsigned PSSAC1                 :1;
        unsigned ECCPAS0                :1;
        unsigned ECCPAS1                :1;
        unsigned ECCPAS2                :1;
    };
} ECCPASbits @ 0xFB6;

// Register: PWM1CON
extern volatile unsigned char           PWM1CON             @ 0xFB7;
#ifndef _LIB_BUILD
asm("PWM1CON equ 0FB7h");
#endif
// aliases
extern volatile unsigned char           ECCP1DEL            @ 0xFB7;
#ifndef _LIB_BUILD
asm("ECCP1DEL equ 0FB7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :7;
        unsigned PRSEN                  :1;
    };
} PWM1CONbits @ 0xFB7;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned                        :7;
        unsigned PRSEN                  :1;
    };
} ECCP1DELbits @ 0xFB7;

// Register: BAUDCON
extern volatile unsigned char           BAUDCON             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCON equ 0FB8h");
#endif
// aliases
extern volatile unsigned char           BAUDCTL             @ 0xFB8;
#ifndef _LIB_BUILD
asm("BAUDCTL equ 0FB8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCONbits @ 0xFB8;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned TXCKP                  :1;
        unsigned RXDTP                  :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCMT                   :1;
    };
    struct {
        unsigned                        :5;
        unsigned RXCKP                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned W4E                    :1;
    };
} BAUDCTLbits @ 0xFB8;

// Register: CCP2CON
extern volatile unsigned char           CCP2CON             @ 0xFBA;
#ifndef _LIB_BUILD
asm("CCP2CON equ 0FBAh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
    };
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned CCP2Y                  :1;
        unsigned CCP2X                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
    };
} CCP2CONbits @ 0xFBA;

// Register: CCPR2
extern volatile unsigned short          CCPR2               @ 0xFBB;
#ifndef _LIB_BUILD
asm("CCPR2 equ 0FBBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR2                  :16;
    };
} CCPR2bits @ 0xFBB;

// Register: CCPR2L
extern volatile unsigned char           CCPR2L              @ 0xFBB;
#ifndef _LIB_BUILD
asm("CCPR2L equ 0FBBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits @ 0xFBB;

// Register: CCPR2H
extern volatile unsigned char           CCPR2H              @ 0xFBC;
#ifndef _LIB_BUILD
asm("CCPR2H equ 0FBCh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits @ 0xFBC;

// Register: CCP1CON
extern volatile unsigned char           CCP1CON             @ 0xFBD;
#ifndef _LIB_BUILD
asm("CCP1CON equ 0FBDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
    };
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned CCP1Y                  :1;
        unsigned CCP1X                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
    };
} CCP1CONbits @ 0xFBD;

// Register: CCPR1
extern volatile unsigned short          CCPR1               @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1 equ 0FBEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR1                  :16;
    };
} CCPR1bits @ 0xFBE;

// Register: CCPR1L
extern volatile unsigned char           CCPR1L              @ 0xFBE;
#ifndef _LIB_BUILD
asm("CCPR1L equ 0FBEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits @ 0xFBE;

// Register: CCPR1H
extern volatile unsigned char           CCPR1H              @ 0xFBF;
#ifndef _LIB_BUILD
asm("CCPR1H equ 0FBFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits @ 0xFBF;

// Register: ADCON2
extern volatile unsigned char           ADCON2              @ 0xFC0;
#ifndef _LIB_BUILD
asm("ADCON2 equ 0FC0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned ADCS                   :3;
        unsigned ACQT                   :3;
        unsigned                        :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ACQT0                  :1;
        unsigned ACQT1                  :1;
        unsigned ACQT2                  :1;
    };
} ADCON2bits @ 0xFC0;

// Register: ADCON1
extern volatile unsigned char           ADCON1              @ 0xFC1;
#ifndef _LIB_BUILD
asm("ADCON1 equ 0FC1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PCFG                   :4;
        unsigned VCFG                   :2;
    };
    struct {
        unsigned PCFG0                  :1;
        unsigned PCFG1                  :1;
        unsigned PCFG2                  :1;
        unsigned PCFG3                  :1;
        unsigned VCFG0                  :1;
        unsigned VCFG1                  :1;
    };
    struct {
        unsigned                        :3;
        unsigned CHSN3                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned VCFG01                 :1;
    };
    struct {
        unsigned                        :5;
        unsigned VCFG11                 :1;
    };
} ADCON1bits @ 0xFC1;

// Register: ADCON0
extern volatile unsigned char           ADCON0              @ 0xFC2;
#ifndef _LIB_BUILD
asm("ADCON0 equ 0FC2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
    };
    struct {
        unsigned                        :1;
        unsigned GO_NOT_DONE            :1;
    };
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS                    :4;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_DONE               :1;
    };
    struct {
        unsigned                        :1;
        unsigned nDONE                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned GO_DONE                :1;
    };
    struct {
        unsigned                        :1;
        unsigned GODONE                 :1;
    };
} ADCON0bits @ 0xFC2;

// Register: ADRES
extern volatile unsigned short          ADRES               @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRES equ 0FC3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned ADRES                  :16;
    };
} ADRESbits @ 0xFC3;

// Register: ADRESL
extern volatile unsigned char           ADRESL              @ 0xFC3;
#ifndef _LIB_BUILD
asm("ADRESL equ 0FC3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits @ 0xFC3;

// Register: ADRESH
extern volatile unsigned char           ADRESH              @ 0xFC4;
#ifndef _LIB_BUILD
asm("ADRESH equ 0FC4h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits @ 0xFC4;

// Register: SSPCON2
extern volatile unsigned char           SSPCON2             @ 0xFC5;
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0FC5h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADMSK1                 :1;
        unsigned ADMSK2                 :1;
        unsigned ADMSK3                 :1;
        unsigned ADMSK4                 :1;
        unsigned ADMSK5                 :1;
    };
} SSPCON2bits @ 0xFC5;

// Register: SSPCON1
extern volatile unsigned char           SSPCON1             @ 0xFC6;
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0FC6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SSPM                   :4;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
    };
} SSPCON1bits @ 0xFC6;

// Register: SSPSTAT
extern volatile unsigned char           SSPSTAT             @ 0xFC7;
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0FC7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_NOT_W                :1;
    };
    struct {
        unsigned                        :5;
        unsigned D_NOT_A                :1;
    };
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned R                      :1;
        unsigned                        :2;
        unsigned D                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned W                      :1;
        unsigned                        :2;
        unsigned A                      :1;
    };
    struct {
        unsigned                        :2;
        unsigned nW                     :1;
        unsigned                        :2;
        unsigned nA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned R_W                    :1;
        unsigned                        :2;
        unsigned D_A                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_WRITE              :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_ADDRESS            :1;
    };
    struct {
        unsigned                        :2;
        unsigned nWRITE                 :1;
        unsigned                        :2;
        unsigned nADDRESS               :1;
    };
    struct {
        unsigned                        :5;
        unsigned DA                     :1;
    };
    struct {
        unsigned                        :2;
        unsigned RW                     :1;
    };
    struct {
        unsigned                        :3;
        unsigned START                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned STOP                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_W                  :1;
    };
    struct {
        unsigned                        :5;
        unsigned NOT_A                  :1;
    };
} SSPSTATbits @ 0xFC7;

// Register: SSPADD
extern volatile unsigned char           SSPADD              @ 0xFC8;
#ifndef _LIB_BUILD
asm("SSPADD equ 0FC8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSPADDbits @ 0xFC8;

// Register: SSPBUF
extern volatile unsigned char           SSPBUF              @ 0xFC9;
#ifndef _LIB_BUILD
asm("SSPBUF equ 0FC9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSPBUFbits @ 0xFC9;

// Register: T2CON
extern volatile unsigned char           T2CON               @ 0xFCA;
#ifndef _LIB_BUILD
asm("T2CON equ 0FCAh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned T2CKPS                 :2;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS                :4;
    };
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned                        :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned                        :3;
        unsigned TOUTPS0                :1;
        unsigned TOUTPS1                :1;
        unsigned TOUTPS2                :1;
        unsigned TOUTPS3                :1;
    };
} T2CONbits @ 0xFCA;

// Register: PR2
extern volatile unsigned char           PR2                 @ 0xFCB;
#ifndef _LIB_BUILD
asm("PR2 equ 0FCBh");
#endif
// aliases
extern volatile unsigned char           MEMCON              @ 0xFCB;
#ifndef _LIB_BUILD
asm("MEMCON equ 0FCBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits @ 0xFCB;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned PR2                    :8;
    };
} MEMCONbits @ 0xFCB;

// Register: TMR2
extern volatile unsigned char           TMR2                @ 0xFCC;
#ifndef _LIB_BUILD
asm("TMR2 equ 0FCCh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits @ 0xFCC;

// Register: T1CON
extern volatile unsigned char           T1CON               @ 0xFCD;
#ifndef _LIB_BUILD
asm("T1CON equ 0FCDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :2;
        unsigned NOT_T1SYNC             :1;
    };
    struct {
        unsigned TMR1ON                 :1;
        unsigned TMR1CS                 :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS                 :2;
        unsigned T1RUN                  :1;
        unsigned RD16                   :1;
    };
    struct {
        unsigned                        :2;
        unsigned T1SYNC                 :1;
        unsigned                        :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
    };
    struct {
        unsigned                        :3;
        unsigned SOSCEN                 :1;
    };
    struct {
        unsigned                        :7;
        unsigned T1RD16                 :1;
    };
} T1CONbits @ 0xFCD;

// Register: TMR1
extern volatile unsigned short          TMR1                @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1 equ 0FCEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1                   :16;
    };
} TMR1bits @ 0xFCE;

// Register: TMR1L
extern volatile unsigned char           TMR1L               @ 0xFCE;
#ifndef _LIB_BUILD
asm("TMR1L equ 0FCEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits @ 0xFCE;

// Register: TMR1H
extern volatile unsigned char           TMR1H               @ 0xFCF;
#ifndef _LIB_BUILD
asm("TMR1H equ 0FCFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits @ 0xFCF;

// Register: RCON
extern volatile unsigned char           RCON                @ 0xFD0;
#ifndef _LIB_BUILD
asm("RCON equ 0FD0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned NOT_BOR                :1;
    };
    struct {
        unsigned                        :1;
        unsigned NOT_POR                :1;
    };
    struct {
        unsigned                        :2;
        unsigned NOT_PD                 :1;
    };
    struct {
        unsigned                        :3;
        unsigned NOT_TO                 :1;
    };
    struct {
        unsigned                        :4;
        unsigned NOT_RI                 :1;
    };
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
        unsigned nRI                    :1;
        unsigned                        :1;
        unsigned SBOREN                 :1;
        unsigned IPEN                   :1;
    };
    struct {
        unsigned BOR                    :1;
        unsigned POR                    :1;
        unsigned PD                     :1;
        unsigned TO                     :1;
        unsigned RI                     :1;
    };
} RCONbits @ 0xFD0;

// Register: WDTCON
extern volatile unsigned char           WDTCON              @ 0xFD1;
#ifndef _LIB_BUILD
asm("WDTCON equ 0FD1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SWDTEN                 :1;
    };
    struct {
        unsigned SWDTE                  :1;
    };
} WDTCONbits @ 0xFD1;

// Register: HLVDCON
extern volatile unsigned char           HLVDCON             @ 0xFD2;
#ifndef _LIB_BUILD
asm("HLVDCON equ 0FD2h");
#endif
// aliases
extern volatile unsigned char           LVDCON              @ 0xFD2;
#ifndef _LIB_BUILD
asm("LVDCON equ 0FD2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IVRST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IRVST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} HLVDCONbits @ 0xFD2;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned HLVDL                  :4;
        unsigned HLVDEN                 :1;
        unsigned IVRST                  :1;
        unsigned                        :1;
        unsigned VDIRMAG                :1;
    };
    struct {
        unsigned HLVDL0                 :1;
        unsigned HLVDL1                 :1;
        unsigned HLVDL2                 :1;
        unsigned HLVDL3                 :1;
    };
    struct {
        unsigned LVDL0                  :1;
        unsigned LVDL1                  :1;
        unsigned LVDL2                  :1;
        unsigned LVDL3                  :1;
        unsigned LVDEN                  :1;
        unsigned IRVST                  :1;
    };
    struct {
        unsigned LVV0                   :1;
        unsigned LVV1                   :1;
        unsigned LVV2                   :1;
        unsigned LVV3                   :1;
        unsigned                        :1;
        unsigned BGST                   :1;
    };
} LVDCONbits @ 0xFD2;

// Register: OSCCON
extern volatile unsigned char           OSCCON              @ 0xFD3;
#ifndef _LIB_BUILD
asm("OSCCON equ 0FD3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned SCS                    :2;
        unsigned IOFS                   :1;
        unsigned OSTS                   :1;
        unsigned IRCF                   :3;
        unsigned IDLEN                  :1;
    };
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned FLTS                   :1;
        unsigned                        :1;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
    };
} OSCCONbits @ 0xFD3;

// Register: T0CON
extern volatile unsigned char           T0CON               @ 0xFD5;
#ifndef _LIB_BUILD
asm("T0CON equ 0FD5h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned T0PS                   :3;
        unsigned PSA                    :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
        unsigned T08BIT                 :1;
        unsigned TMR0ON                 :1;
    };
    struct {
        unsigned T0PS0                  :1;
        unsigned T0PS1                  :1;
        unsigned T0PS2                  :1;
        unsigned T0PS3                  :1;
        unsigned                        :2;
        unsigned T016BIT                :1;
    };
} T0CONbits @ 0xFD5;

// Register: TMR0
extern volatile unsigned short          TMR0                @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0 equ 0FD6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR0                   :16;
    };
} TMR0bits @ 0xFD6;

// Register: TMR0L
extern volatile unsigned char           TMR0L               @ 0xFD6;
#ifndef _LIB_BUILD
asm("TMR0L equ 0FD6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR0L                  :8;
    };
} TMR0Lbits @ 0xFD6;

// Register: TMR0H
extern volatile unsigned char           TMR0H               @ 0xFD7;
#ifndef _LIB_BUILD
asm("TMR0H equ 0FD7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TMR0H                  :8;
    };
} TMR0Hbits @ 0xFD7;

// Register: STATUS
extern volatile unsigned char           STATUS              @ 0xFD8;
#ifndef _LIB_BUILD
asm("STATUS equ 0FD8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned OV                     :1;
        unsigned N                      :1;
    };
    struct {
        unsigned CARRY                  :1;
    };
    struct {
        unsigned                        :4;
        unsigned NEGATIVE               :1;
    };
    struct {
        unsigned                        :3;
        unsigned OVERFLOW               :1;
    };
    struct {
        unsigned                        :2;
        unsigned ZERO                   :1;
    };
} STATUSbits @ 0xFD8;

// Register: FSR2
extern volatile unsigned short          FSR2                @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2 equ 0FD9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR2                   :12;
    };
} FSR2bits @ 0xFD9;

// Register: FSR2L
extern volatile unsigned char           FSR2L               @ 0xFD9;
#ifndef _LIB_BUILD
asm("FSR2L equ 0FD9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR2L                  :8;
    };
} FSR2Lbits @ 0xFD9;

// Register: FSR2H
extern volatile unsigned char           FSR2H               @ 0xFDA;
#ifndef _LIB_BUILD
asm("FSR2H equ 0FDAh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR2H                  :4;
    };
} FSR2Hbits @ 0xFDA;

// Register: PLUSW2
extern volatile unsigned char           PLUSW2              @ 0xFDB;
#ifndef _LIB_BUILD
asm("PLUSW2 equ 0FDBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PLUSW2                 :8;
    };
} PLUSW2bits @ 0xFDB;

// Register: PREINC2
extern volatile unsigned char           PREINC2             @ 0xFDC;
#ifndef _LIB_BUILD
asm("PREINC2 equ 0FDCh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PREINC2                :8;
    };
} PREINC2bits @ 0xFDC;

// Register: POSTDEC2
extern volatile unsigned char           POSTDEC2            @ 0xFDD;
#ifndef _LIB_BUILD
asm("POSTDEC2 equ 0FDDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTDEC2               :8;
    };
} POSTDEC2bits @ 0xFDD;

// Register: POSTINC2
extern volatile unsigned char           POSTINC2            @ 0xFDE;
#ifndef _LIB_BUILD
asm("POSTINC2 equ 0FDEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTINC2               :8;
    };
} POSTINC2bits @ 0xFDE;

// Register: INDF2
extern volatile unsigned char           INDF2               @ 0xFDF;
#ifndef _LIB_BUILD
asm("INDF2 equ 0FDFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned INDF2                  :8;
    };
} INDF2bits @ 0xFDF;

// Register: BSR
extern volatile unsigned char           BSR                 @ 0xFE0;
#ifndef _LIB_BUILD
asm("BSR equ 0FE0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned BSR                    :4;
    };
} BSRbits @ 0xFE0;

// Register: FSR1
extern volatile unsigned short          FSR1                @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1 equ 0FE1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR1                   :12;
    };
} FSR1bits @ 0xFE1;

// Register: FSR1L
extern volatile unsigned char           FSR1L               @ 0xFE1;
#ifndef _LIB_BUILD
asm("FSR1L equ 0FE1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR1L                  :8;
    };
} FSR1Lbits @ 0xFE1;

// Register: FSR1H
extern volatile unsigned char           FSR1H               @ 0xFE2;
#ifndef _LIB_BUILD
asm("FSR1H equ 0FE2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR1H                  :4;
    };
} FSR1Hbits @ 0xFE2;

// Register: PLUSW1
extern volatile unsigned char           PLUSW1              @ 0xFE3;
#ifndef _LIB_BUILD
asm("PLUSW1 equ 0FE3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PLUSW1                 :8;
    };
} PLUSW1bits @ 0xFE3;

// Register: PREINC1
extern volatile unsigned char           PREINC1             @ 0xFE4;
#ifndef _LIB_BUILD
asm("PREINC1 equ 0FE4h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PREINC1                :8;
    };
} PREINC1bits @ 0xFE4;

// Register: POSTDEC1
extern volatile unsigned char           POSTDEC1            @ 0xFE5;
#ifndef _LIB_BUILD
asm("POSTDEC1 equ 0FE5h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTDEC1               :8;
    };
} POSTDEC1bits @ 0xFE5;

// Register: POSTINC1
extern volatile unsigned char           POSTINC1            @ 0xFE6;
#ifndef _LIB_BUILD
asm("POSTINC1 equ 0FE6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTINC1               :8;
    };
} POSTINC1bits @ 0xFE6;

// Register: INDF1
extern volatile unsigned char           INDF1               @ 0xFE7;
#ifndef _LIB_BUILD
asm("INDF1 equ 0FE7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned INDF1                  :8;
    };
} INDF1bits @ 0xFE7;

// Register: WREG
extern volatile unsigned char           WREG                @ 0xFE8;
#ifndef _LIB_BUILD
asm("WREG equ 0FE8h");
#endif
// aliases
// extern volatile unsigned char           W                   @ 0xFE8;
#ifndef _LIB_BUILD
// asm("W equ 0FE8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned WREG                   :8;
    };
} WREGbits @ 0xFE8;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned WREG                   :8;
    };
} Wbits @ 0xFE8;

// Register: FSR0
extern volatile unsigned short          FSR0                @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0 equ 0FE9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR0                   :12;
    };
} FSR0bits @ 0xFE9;

// Register: FSR0L
extern volatile unsigned char           FSR0L               @ 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0L equ 0FE9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR0L                  :8;
    };
} FSR0Lbits @ 0xFE9;

// Register: FSR0H
extern volatile unsigned char           FSR0H               @ 0xFEA;
#ifndef _LIB_BUILD
asm("FSR0H equ 0FEAh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned FSR0H                  :4;
    };
} FSR0Hbits @ 0xFEA;

// Register: PLUSW0
extern volatile unsigned char           PLUSW0              @ 0xFEB;
#ifndef _LIB_BUILD
asm("PLUSW0 equ 0FEBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PLUSW0                 :8;
    };
} PLUSW0bits @ 0xFEB;

// Register: PREINC0
extern volatile unsigned char           PREINC0             @ 0xFEC;
#ifndef _LIB_BUILD
asm("PREINC0 equ 0FECh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PREINC0                :8;
    };
} PREINC0bits @ 0xFEC;

// Register: POSTDEC0
extern volatile unsigned char           POSTDEC0            @ 0xFED;
#ifndef _LIB_BUILD
asm("POSTDEC0 equ 0FEDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTDEC0               :8;
    };
} POSTDEC0bits @ 0xFED;

// Register: POSTINC0
extern volatile unsigned char           POSTINC0            @ 0xFEE;
#ifndef _LIB_BUILD
asm("POSTINC0 equ 0FEEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned POSTINC0               :8;
    };
} POSTINC0bits @ 0xFEE;

// Register: INDF0
extern volatile unsigned char           INDF0               @ 0xFEF;
#ifndef _LIB_BUILD
asm("INDF0 equ 0FEFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned INDF0                  :8;
    };
} INDF0bits @ 0xFEF;

// Register: INTCON3
extern volatile unsigned char           INTCON3             @ 0xFF0;
#ifndef _LIB_BUILD
asm("INTCON3 equ 0FF0h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned INT1IF                 :1;
        unsigned INT2IF                 :1;
        unsigned                        :1;
        unsigned INT1IE                 :1;
        unsigned INT2IE                 :1;
        unsigned                        :1;
        unsigned INT1IP                 :1;
        unsigned INT2IP                 :1;
    };
    struct {
        unsigned INT1F                  :1;
        unsigned INT2F                  :1;
        unsigned                        :1;
        unsigned INT1E                  :1;
        unsigned INT2E                  :1;
        unsigned                        :1;
        unsigned INT1P                  :1;
        unsigned INT2P                  :1;
    };
} INTCON3bits @ 0xFF0;

// Register: INTCON2
extern volatile unsigned char           INTCON2             @ 0xFF1;
#ifndef _LIB_BUILD
asm("INTCON2 equ 0FF1h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned                        :7;
        unsigned NOT_RBPU               :1;
    };
    struct {
        unsigned RBIP                   :1;
        unsigned                        :1;
        unsigned TMR0IP                 :1;
        unsigned                        :1;
        unsigned INTEDG2                :1;
        unsigned INTEDG1                :1;
        unsigned INTEDG0                :1;
        unsigned nRBPU                  :1;
    };
    struct {
        unsigned                        :7;
        unsigned RBPU                   :1;
    };
} INTCON2bits @ 0xFF1;

// Register: INTCON
extern volatile unsigned char           INTCON              @ 0xFF2;
#ifndef _LIB_BUILD
asm("INTCON equ 0FF2h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
    struct {
        unsigned RBIF                   :1;
        unsigned INT0IF                 :1;
        unsigned TMR0IF                 :1;
        unsigned RBIE                   :1;
        unsigned INT0IE                 :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE_GIEL              :1;
        unsigned GIE_GIEH               :1;
    };
    struct {
        unsigned                        :1;
        unsigned INT0F                  :1;
        unsigned T0IF                   :1;
        unsigned                        :1;
        unsigned INT0E                  :1;
        unsigned T0IE                   :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :6;
        unsigned GIEL                   :1;
        unsigned GIEH                   :1;
    };
} INTCONbits @ 0xFF2;

// Register: PROD
extern volatile unsigned short          PROD                @ 0xFF3;
#ifndef _LIB_BUILD
asm("PROD equ 0FF3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PROD                   :16;
    };
} PRODbits @ 0xFF3;

// Register: PRODL
extern volatile unsigned char           PRODL               @ 0xFF3;
#ifndef _LIB_BUILD
asm("PRODL equ 0FF3h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PRODL                  :8;
    };
} PRODLbits @ 0xFF3;

// Register: PRODH
extern volatile unsigned char           PRODH               @ 0xFF4;
#ifndef _LIB_BUILD
asm("PRODH equ 0FF4h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PRODH                  :8;
    };
} PRODHbits @ 0xFF4;

// Register: TABLAT
extern volatile unsigned char           TABLAT              @ 0xFF5;
#ifndef _LIB_BUILD
asm("TABLAT equ 0FF5h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TABLAT                 :8;
    };
} TABLATbits @ 0xFF5;

// Register: TBLPTR
extern volatile unsigned short long     TBLPTR              @ 0xFF6;
#ifndef _LIB_BUILD
asm("TBLPTR equ 0FF6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TBLPTR                 :21;
        unsigned ACSS                   :1;
    };
} TBLPTRbits @ 0xFF6;

// Register: TBLPTRL
extern volatile unsigned char           TBLPTRL             @ 0xFF6;
#ifndef _LIB_BUILD
asm("TBLPTRL equ 0FF6h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TBLPTRL                :8;
    };
} TBLPTRLbits @ 0xFF6;

// Register: TBLPTRH
extern volatile unsigned char           TBLPTRH             @ 0xFF7;
#ifndef _LIB_BUILD
asm("TBLPTRH equ 0FF7h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TBLPTRH                :8;
    };
} TBLPTRHbits @ 0xFF7;

// Register: TBLPTRU
extern volatile unsigned char           TBLPTRU             @ 0xFF8;
#ifndef _LIB_BUILD
asm("TBLPTRU equ 0FF8h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TBLPTRU                :5;
        unsigned ACSS                   :1;
    };
} TBLPTRUbits @ 0xFF8;

// Register: PCLAT
extern volatile unsigned short long     PCLAT               @ 0xFF9;
#ifndef _LIB_BUILD
asm("PCLAT equ 0FF9h");
#endif
// aliases
extern volatile unsigned short long     PC                  @ 0xFF9;
#ifndef _LIB_BUILD
asm("PC equ 0FF9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PCLAT                  :21;
    };
} PCLATbits @ 0xFF9;
// alias bitfield definitions
extern volatile union {
    struct {
        unsigned PCLAT                  :21;
    };
} PCbits @ 0xFF9;

// Register: PCL
extern volatile unsigned char           PCL                 @ 0xFF9;
#ifndef _LIB_BUILD
asm("PCL equ 0FF9h");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits @ 0xFF9;

// Register: PCLATH
extern volatile unsigned char           PCLATH              @ 0xFFA;
#ifndef _LIB_BUILD
asm("PCLATH equ 0FFAh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PCH                    :8;
    };
} PCLATHbits @ 0xFFA;

// Register: PCLATU
extern volatile unsigned char           PCLATU              @ 0xFFB;
#ifndef _LIB_BUILD
asm("PCLATU equ 0FFBh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned PCU                    :5;
    };
} PCLATUbits @ 0xFFB;

// Register: STKPTR
extern volatile unsigned char           STKPTR              @ 0xFFC;
#ifndef _LIB_BUILD
asm("STKPTR equ 0FFCh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned STKPTR                 :5;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKFUL                 :1;
    };
    struct {
        unsigned SP0                    :1;
        unsigned SP1                    :1;
        unsigned SP2                    :1;
        unsigned SP3                    :1;
        unsigned SP4                    :1;
        unsigned                        :2;
        unsigned STKOVF                 :1;
    };
} STKPTRbits @ 0xFFC;

// Register: TOS
extern volatile unsigned short long     TOS                 @ 0xFFD;
#ifndef _LIB_BUILD
asm("TOS equ 0FFDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TOS                    :21;
    };
} TOSbits @ 0xFFD;

// Register: TOSL
extern volatile unsigned char           TOSL                @ 0xFFD;
#ifndef _LIB_BUILD
asm("TOSL equ 0FFDh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TOSL                   :8;
    };
} TOSLbits @ 0xFFD;

// Register: TOSH
extern volatile unsigned char           TOSH                @ 0xFFE;
#ifndef _LIB_BUILD
asm("TOSH equ 0FFEh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TOSH                   :8;
    };
} TOSHbits @ 0xFFE;

// Register: TOSU
extern volatile unsigned char           TOSU                @ 0xFFF;
#ifndef _LIB_BUILD
asm("TOSU equ 0FFFh");
#endif
// bitfield definitions
extern volatile union {
    struct {
        unsigned TOSU                   :5;
    };
} TOSUbits @ 0xFFF;

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
extern volatile bit                     ABDEN               @ (((unsigned) &BAUDCON)*8) + 0;
#define                                 ABDEN_bit           BAUDCON, 0
extern volatile bit                     ABDOVF              @ (((unsigned) &BAUDCON)*8) + 7;
#define                                 ABDOVF_bit          BAUDCON, 7
extern volatile bit                     ACKDT               @ (((unsigned) &SSPCON2)*8) + 5;
#define                                 ACKDT_bit           SSPCON2, 5
extern volatile bit                     ACKEN               @ (((unsigned) &SSPCON2)*8) + 4;
#define                                 ACKEN_bit           SSPCON2, 4
extern volatile bit                     ACKSTAT             @ (((unsigned) &SSPCON2)*8) + 6;
#define                                 ACKSTAT_bit         SSPCON2, 6
extern volatile bit                     ACQT0               @ (((unsigned) &ADCON2)*8) + 3;
#define                                 ACQT0_bit           ADCON2, 3
extern volatile bit                     ACQT1               @ (((unsigned) &ADCON2)*8) + 4;
#define                                 ACQT1_bit           ADCON2, 4
extern volatile bit                     ACQT2               @ (((unsigned) &ADCON2)*8) + 5;
#define                                 ACQT2_bit           ADCON2, 5
extern volatile bit                     ADCS0               @ (((unsigned) &ADCON2)*8) + 0;
#define                                 ADCS0_bit           ADCON2, 0
extern volatile bit                     ADCS1               @ (((unsigned) &ADCON2)*8) + 1;
#define                                 ADCS1_bit           ADCON2, 1
extern volatile bit                     ADCS2               @ (((unsigned) &ADCON2)*8) + 2;
#define                                 ADCS2_bit           ADCON2, 2
extern volatile bit                     ADDEN               @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADDEN_bit           RCSTA, 3
extern volatile bit                     ADEN                @ (((unsigned) &RCSTA)*8) + 3;
#define                                 ADEN_bit            RCSTA, 3
extern volatile bit                     ADFM                @ (((unsigned) &ADCON2)*8) + 7;
#define                                 ADFM_bit            ADCON2, 7
extern volatile bit                     ADIE                @ (((unsigned) &PIE1)*8) + 6;
#define                                 ADIE_bit            PIE1, 6
extern volatile bit                     ADIF                @ (((unsigned) &PIR1)*8) + 6;
#define                                 ADIF_bit            PIR1, 6
extern volatile bit                     ADIP                @ (((unsigned) &IPR1)*8) + 6;
#define                                 ADIP_bit            IPR1, 6
extern volatile bit                     ADMSK1              @ (((unsigned) &SSPCON2)*8) + 1;
#define                                 ADMSK1_bit          SSPCON2, 1
extern volatile bit                     ADMSK2              @ (((unsigned) &SSPCON2)*8) + 2;
#define                                 ADMSK2_bit          SSPCON2, 2
extern volatile bit                     ADMSK3              @ (((unsigned) &SSPCON2)*8) + 3;
#define                                 ADMSK3_bit          SSPCON2, 3
extern volatile bit                     ADMSK4              @ (((unsigned) &SSPCON2)*8) + 4;
#define                                 ADMSK4_bit          SSPCON2, 4
extern volatile bit                     ADMSK5              @ (((unsigned) &SSPCON2)*8) + 5;
#define                                 ADMSK5_bit          SSPCON2, 5
extern volatile bit                     ADON                @ (((unsigned) &ADCON0)*8) + 0;
#define                                 ADON_bit            ADCON0, 0
extern volatile bit                     AN0                 @ (((unsigned) &PORTA)*8) + 0;
#define                                 AN0_bit             PORTA, 0
extern volatile bit                     AN1                 @ (((unsigned) &PORTA)*8) + 1;
#define                                 AN1_bit             PORTA, 1
extern volatile bit                     AN10                @ (((unsigned) &PORTB)*8) + 1;
#define                                 AN10_bit            PORTB, 1
extern volatile bit                     AN11                @ (((unsigned) &PORTB)*8) + 4;
#define                                 AN11_bit            PORTB, 4
extern volatile bit                     AN12                @ (((unsigned) &PORTB)*8) + 0;
#define                                 AN12_bit            PORTB, 0
extern volatile bit                     AN2                 @ (((unsigned) &PORTA)*8) + 2;
#define                                 AN2_bit             PORTA, 2
extern volatile bit                     AN3                 @ (((unsigned) &PORTA)*8) + 3;
#define                                 AN3_bit             PORTA, 3
extern volatile bit                     AN4                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 AN4_bit             PORTA, 5
extern volatile bit                     AN8                 @ (((unsigned) &PORTB)*8) + 2;
#define                                 AN8_bit             PORTB, 2
extern volatile bit                     AN9                 @ (((unsigned) &PORTB)*8) + 3;
#define                                 AN9_bit             PORTB, 3
extern volatile bit                     BCLIE               @ (((unsigned) &PIE2)*8) + 3;
#define                                 BCLIE_bit           PIE2, 3
extern volatile bit                     BCLIF               @ (((unsigned) &PIR2)*8) + 3;
#define                                 BCLIF_bit           PIR2, 3
extern volatile bit                     BCLIP               @ (((unsigned) &IPR2)*8) + 3;
#define                                 BCLIP_bit           IPR2, 3
extern volatile bit                     BF                  @ (((unsigned) &SSPSTAT)*8) + 0;
#define                                 BF_bit              SSPSTAT, 0
extern volatile bit                     BGST                @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 BGST_bit            HLVDCON, 5
extern volatile bit                     BOR                 @ (((unsigned) &RCON)*8) + 0;
#define                                 BOR_bit             RCON, 0
extern volatile bit                     BRG16               @ (((unsigned) &BAUDCON)*8) + 3;
#define                                 BRG16_bit           BAUDCON, 3
extern volatile bit                     BRGH                @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH_bit            TXSTA, 2
extern volatile bit                     BRGH1               @ (((unsigned) &TXSTA)*8) + 2;
#define                                 BRGH1_bit           TXSTA, 2
extern volatile bit                     C1INV               @ (((unsigned) &CMCON)*8) + 4;
#define                                 C1INV_bit           CMCON, 4
extern volatile bit _DEPRECATED         C1OUT               @ (((unsigned) &CMCON)*8) + 6;
#define                                 C1OUT_bit           CMCON, 6
extern volatile bit                     C2INV               @ (((unsigned) &CMCON)*8) + 5;
#define                                 C2INV_bit           CMCON, 5
extern volatile bit _DEPRECATED         C2OUT               @ (((unsigned) &CMCON)*8) + 7;
#define                                 C2OUT_bit           CMCON, 7
extern volatile bit                     CARRY               @ (((unsigned) &STATUS)*8) + 0;
#define                                 CARRY_bit           STATUS, 0
extern volatile bit                     CCP1                @ (((unsigned) &PORTC)*8) + 2;
#define                                 CCP1_bit            PORTC, 2
extern volatile bit                     CCP10               @ (((unsigned) &PORTE)*8) + 2;
#define                                 CCP10_bit           PORTE, 2
extern volatile bit                     CCP1IE              @ (((unsigned) &PIE1)*8) + 2;
#define                                 CCP1IE_bit          PIE1, 2
extern volatile bit                     CCP1IF              @ (((unsigned) &PIR1)*8) + 2;
#define                                 CCP1IF_bit          PIR1, 2
extern volatile bit                     CCP1IP              @ (((unsigned) &IPR1)*8) + 2;
#define                                 CCP1IP_bit          IPR1, 2
extern volatile bit                     CCP1M0              @ (((unsigned) &CCP1CON)*8) + 0;
#define                                 CCP1M0_bit          CCP1CON, 0
extern volatile bit                     CCP1M1              @ (((unsigned) &CCP1CON)*8) + 1;
#define                                 CCP1M1_bit          CCP1CON, 1
extern volatile bit                     CCP1M2              @ (((unsigned) &CCP1CON)*8) + 2;
#define                                 CCP1M2_bit          CCP1CON, 2
extern volatile bit                     CCP1M3              @ (((unsigned) &CCP1CON)*8) + 3;
#define                                 CCP1M3_bit          CCP1CON, 3
extern volatile bit                     CCP1X               @ (((unsigned) &CCP1CON)*8) + 5;
#define                                 CCP1X_bit           CCP1CON, 5
extern volatile bit                     CCP1Y               @ (((unsigned) &CCP1CON)*8) + 4;
#define                                 CCP1Y_bit           CCP1CON, 4
extern volatile bit                     CCP2E               @ (((unsigned) &PORTE)*8) + 7;
#define                                 CCP2E_bit           PORTE, 7
extern volatile bit                     CCP2IE              @ (((unsigned) &PIE2)*8) + 0;
#define                                 CCP2IE_bit          PIE2, 0
extern volatile bit                     CCP2IF              @ (((unsigned) &PIR2)*8) + 0;
#define                                 CCP2IF_bit          PIR2, 0
extern volatile bit                     CCP2IP              @ (((unsigned) &IPR2)*8) + 0;
#define                                 CCP2IP_bit          IPR2, 0
extern volatile bit                     CCP2M0              @ (((unsigned) &CCP2CON)*8) + 0;
#define                                 CCP2M0_bit          CCP2CON, 0
extern volatile bit                     CCP2M1              @ (((unsigned) &CCP2CON)*8) + 1;
#define                                 CCP2M1_bit          CCP2CON, 1
extern volatile bit                     CCP2M2              @ (((unsigned) &CCP2CON)*8) + 2;
#define                                 CCP2M2_bit          CCP2CON, 2
extern volatile bit                     CCP2M3              @ (((unsigned) &CCP2CON)*8) + 3;
#define                                 CCP2M3_bit          CCP2CON, 3
extern volatile bit                     CCP2X               @ (((unsigned) &CCP2CON)*8) + 5;
#define                                 CCP2X_bit           CCP2CON, 5
extern volatile bit                     CCP2Y               @ (((unsigned) &CCP2CON)*8) + 4;
#define                                 CCP2Y_bit           CCP2CON, 4
extern volatile bit                     CCP2_PA2            @ (((unsigned) &PORTB)*8) + 3;
#define                                 CCP2_PA2_bit        PORTB, 3
extern volatile bit                     CCP6E               @ (((unsigned) &PORTE)*8) + 6;
#define                                 CCP6E_bit           PORTE, 6
extern volatile bit                     CCP7E               @ (((unsigned) &PORTE)*8) + 5;
#define                                 CCP7E_bit           PORTE, 5
extern volatile bit                     CCP8E               @ (((unsigned) &PORTE)*8) + 4;
#define                                 CCP8E_bit           PORTE, 4
extern volatile bit                     CCP9E               @ (((unsigned) &PORTE)*8) + 3;
#define                                 CCP9E_bit           PORTE, 3
extern volatile bit                     CFGS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 CFGS_bit            EECON1, 6
extern volatile bit                     CHS0                @ (((unsigned) &ADCON0)*8) + 2;
#define                                 CHS0_bit            ADCON0, 2
extern volatile bit                     CHS1                @ (((unsigned) &ADCON0)*8) + 3;
#define                                 CHS1_bit            ADCON0, 3
extern volatile bit                     CHS2                @ (((unsigned) &ADCON0)*8) + 4;
#define                                 CHS2_bit            ADCON0, 4
extern volatile bit                     CHS3                @ (((unsigned) &ADCON0)*8) + 5;
#define                                 CHS3_bit            ADCON0, 5
extern volatile bit                     CHSN3               @ (((unsigned) &ADCON1)*8) + 3;
#define                                 CHSN3_bit           ADCON1, 3
extern volatile bit                     CIS                 @ (((unsigned) &CMCON)*8) + 3;
#define                                 CIS_bit             CMCON, 3
extern volatile bit                     CK                  @ (((unsigned) &PORTC)*8) + 6;
#define                                 CK_bit              PORTC, 6
extern volatile bit                     CKE                 @ (((unsigned) &SSPSTAT)*8) + 6;
#define                                 CKE_bit             SSPSTAT, 6
extern volatile bit                     CKP                 @ (((unsigned) &SSPCON1)*8) + 4;
#define                                 CKP_bit             SSPCON1, 4
extern volatile bit                     CLKI                @ (((unsigned) &PORTA)*8) + 7;
#define                                 CLKI_bit            PORTA, 7
extern volatile bit                     CLKO                @ (((unsigned) &PORTA)*8) + 6;
#define                                 CLKO_bit            PORTA, 6
extern volatile bit                     CM0                 @ (((unsigned) &CMCON)*8) + 0;
#define                                 CM0_bit             CMCON, 0
extern volatile bit                     CM1                 @ (((unsigned) &CMCON)*8) + 1;
#define                                 CM1_bit             CMCON, 1
extern volatile bit                     CM2                 @ (((unsigned) &CMCON)*8) + 2;
#define                                 CM2_bit             CMCON, 2
extern volatile bit                     CMEN0               @ (((unsigned) &CMCON)*8) + 0;
#define                                 CMEN0_bit           CMCON, 0
extern volatile bit                     CMEN1               @ (((unsigned) &CMCON)*8) + 1;
#define                                 CMEN1_bit           CMCON, 1
extern volatile bit                     CMEN2               @ (((unsigned) &CMCON)*8) + 2;
#define                                 CMEN2_bit           CMCON, 2
extern volatile bit                     CMIE                @ (((unsigned) &PIE2)*8) + 6;
#define                                 CMIE_bit            PIE2, 6
extern volatile bit                     CMIF                @ (((unsigned) &PIR2)*8) + 6;
#define                                 CMIF_bit            PIR2, 6
extern volatile bit                     CMIP                @ (((unsigned) &IPR2)*8) + 6;
#define                                 CMIP_bit            IPR2, 6
extern volatile bit                     CREN                @ (((unsigned) &RCSTA)*8) + 4;
#define                                 CREN_bit            RCSTA, 4
extern volatile bit                     CS                  @ (((unsigned) &PORTE)*8) + 2;
#define                                 CS_bit              PORTE, 2
extern volatile bit                     CSRC                @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC_bit            TXSTA, 7
extern volatile bit                     CSRC1               @ (((unsigned) &TXSTA)*8) + 7;
#define                                 CSRC1_bit           TXSTA, 7
extern volatile bit                     CVR0                @ (((unsigned) &CVRCON)*8) + 0;
#define                                 CVR0_bit            CVRCON, 0
extern volatile bit                     CVR1                @ (((unsigned) &CVRCON)*8) + 1;
#define                                 CVR1_bit            CVRCON, 1
extern volatile bit                     CVR2                @ (((unsigned) &CVRCON)*8) + 2;
#define                                 CVR2_bit            CVRCON, 2
extern volatile bit                     CVR3                @ (((unsigned) &CVRCON)*8) + 3;
#define                                 CVR3_bit            CVRCON, 3
extern volatile bit                     CVREF               @ (((unsigned) &PORTA)*8) + 2;
#define                                 CVREF_bit           PORTA, 2
extern volatile bit                     CVREN               @ (((unsigned) &CVRCON)*8) + 7;
#define                                 CVREN_bit           CVRCON, 7
extern volatile bit                     CVROE               @ (((unsigned) &CVRCON)*8) + 6;
#define                                 CVROE_bit           CVRCON, 6
extern volatile bit                     CVROEN              @ (((unsigned) &CVRCON)*8) + 6;
#define                                 CVROEN_bit          CVRCON, 6
extern volatile bit                     CVRR                @ (((unsigned) &CVRCON)*8) + 5;
#define                                 CVRR_bit            CVRCON, 5
extern volatile bit                     CVRSS               @ (((unsigned) &CVRCON)*8) + 4;
#define                                 CVRSS_bit           CVRCON, 4
extern volatile bit                     DA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 DA_bit              SSPSTAT, 5
extern volatile bit                     DC                  @ (((unsigned) &STATUS)*8) + 1;
#define                                 DC_bit              STATUS, 1
extern volatile bit                     DC1B0               @ (((unsigned) &CCP1CON)*8) + 4;
#define                                 DC1B0_bit           CCP1CON, 4
extern volatile bit                     DC1B1               @ (((unsigned) &CCP1CON)*8) + 5;
#define                                 DC1B1_bit           CCP1CON, 5
extern volatile bit                     DC2B0               @ (((unsigned) &CCP2CON)*8) + 4;
#define                                 DC2B0_bit           CCP2CON, 4
extern volatile bit                     DC2B1               @ (((unsigned) &CCP2CON)*8) + 5;
#define                                 DC2B1_bit           CCP2CON, 5
extern volatile bit                     DONE                @ (((unsigned) &ADCON0)*8) + 1;
#define                                 DONE_bit            ADCON0, 1
extern volatile bit                     DT                  @ (((unsigned) &PORTC)*8) + 7;
#define                                 DT_bit              PORTC, 7
extern volatile bit                     D_A                 @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_A_bit             SSPSTAT, 5
extern volatile bit                     D_NOT_A             @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_NOT_A_bit         SSPSTAT, 5
extern volatile bit                     D_nA                @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_nA_bit            SSPSTAT, 5
extern volatile bit                     ECCPAS0             @ (((unsigned) &ECCP1AS)*8) + 4;
#define                                 ECCPAS0_bit         ECCP1AS, 4
extern volatile bit                     ECCPAS1             @ (((unsigned) &ECCP1AS)*8) + 5;
#define                                 ECCPAS1_bit         ECCP1AS, 5
extern volatile bit                     ECCPAS2             @ (((unsigned) &ECCP1AS)*8) + 6;
#define                                 ECCPAS2_bit         ECCP1AS, 6
extern volatile bit                     ECCPASE             @ (((unsigned) &ECCP1AS)*8) + 7;
#define                                 ECCPASE_bit         ECCP1AS, 7
extern volatile bit                     EEFS                @ (((unsigned) &EECON1)*8) + 6;
#define                                 EEFS_bit            EECON1, 6
extern volatile bit                     EEIE                @ (((unsigned) &PIE2)*8) + 4;
#define                                 EEIE_bit            PIE2, 4
extern volatile bit                     EEIF                @ (((unsigned) &PIR2)*8) + 4;
#define                                 EEIF_bit            PIR2, 4
extern volatile bit                     EEIP                @ (((unsigned) &IPR2)*8) + 4;
#define                                 EEIP_bit            IPR2, 4
extern volatile bit                     EEPGD               @ (((unsigned) &EECON1)*8) + 7;
#define                                 EEPGD_bit           EECON1, 7
extern volatile bit                     FERR                @ (((unsigned) &RCSTA)*8) + 2;
#define                                 FERR_bit            RCSTA, 2
extern volatile bit                     FLT0                @ (((unsigned) &PORTB)*8) + 0;
#define                                 FLT0_bit            PORTB, 0
extern volatile bit                     FLTS                @ (((unsigned) &OSCCON)*8) + 2;
#define                                 FLTS_bit            OSCCON, 2
extern volatile bit                     FREE                @ (((unsigned) &EECON1)*8) + 4;
#define                                 FREE_bit            EECON1, 4
extern volatile bit                     GCEN                @ (((unsigned) &SSPCON2)*8) + 7;
#define                                 GCEN_bit            SSPCON2, 7
extern volatile bit                     GIE                 @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_bit             INTCON, 7
extern volatile bit                     GIEH                @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIEH_bit            INTCON, 7
extern volatile bit                     GIEL                @ (((unsigned) &INTCON)*8) + 6;
#define                                 GIEL_bit            INTCON, 6
extern volatile bit                     GIE_GIEH            @ (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_GIEH_bit        INTCON, 7
extern volatile bit                     GO                  @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_bit              ADCON0, 1
extern volatile bit                     GODONE              @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GODONE_bit          ADCON0, 1
extern volatile bit                     GO_DONE             @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_DONE_bit         ADCON0, 1
extern volatile bit                     GO_NOT_DONE         @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_NOT_DONE_bit     ADCON0, 1
extern volatile bit                     GO_nDONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_nDONE_bit        ADCON0, 1
extern volatile bit                     HLVDEN              @ (((unsigned) &HLVDCON)*8) + 4;
#define                                 HLVDEN_bit          HLVDCON, 4
extern volatile bit                     HLVDIE              @ (((unsigned) &PIE2)*8) + 2;
#define                                 HLVDIE_bit          PIE2, 2
extern volatile bit                     HLVDIF              @ (((unsigned) &PIR2)*8) + 2;
#define                                 HLVDIF_bit          PIR2, 2
extern volatile bit                     HLVDIN              @ (((unsigned) &PORTA)*8) + 5;
#define                                 HLVDIN_bit          PORTA, 5
extern volatile bit                     HLVDIP              @ (((unsigned) &IPR2)*8) + 2;
#define                                 HLVDIP_bit          IPR2, 2
extern volatile bit                     HLVDL0              @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 HLVDL0_bit          HLVDCON, 0
extern volatile bit                     HLVDL1              @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 HLVDL1_bit          HLVDCON, 1
extern volatile bit                     HLVDL2              @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 HLVDL2_bit          HLVDCON, 2
extern volatile bit                     HLVDL3              @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 HLVDL3_bit          HLVDCON, 3
extern volatile bit                     IDLEN               @ (((unsigned) &OSCCON)*8) + 7;
#define                                 IDLEN_bit           OSCCON, 7
extern volatile bit                     INT0                @ (((unsigned) &PORTB)*8) + 0;
#define                                 INT0_bit            PORTB, 0
extern volatile bit                     INT0E               @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0E_bit           INTCON, 4
extern volatile bit                     INT0F               @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0F_bit           INTCON, 1
extern volatile bit                     INT0IE              @ (((unsigned) &INTCON)*8) + 4;
#define                                 INT0IE_bit          INTCON, 4
extern volatile bit                     INT0IF              @ (((unsigned) &INTCON)*8) + 1;
#define                                 INT0IF_bit          INTCON, 1
extern volatile bit                     INT1                @ (((unsigned) &PORTB)*8) + 1;
#define                                 INT1_bit            PORTB, 1
extern volatile bit                     INT1E               @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1E_bit           INTCON3, 3
extern volatile bit                     INT1F               @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1F_bit           INTCON3, 0
extern volatile bit                     INT1IE              @ (((unsigned) &INTCON3)*8) + 3;
#define                                 INT1IE_bit          INTCON3, 3
extern volatile bit                     INT1IF              @ (((unsigned) &INTCON3)*8) + 0;
#define                                 INT1IF_bit          INTCON3, 0
extern volatile bit                     INT1IP              @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1IP_bit          INTCON3, 6
extern volatile bit                     INT1P               @ (((unsigned) &INTCON3)*8) + 6;
#define                                 INT1P_bit           INTCON3, 6
extern volatile bit                     INT2                @ (((unsigned) &PORTB)*8) + 2;
#define                                 INT2_bit            PORTB, 2
extern volatile bit                     INT2E               @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2E_bit           INTCON3, 4
extern volatile bit                     INT2F               @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2F_bit           INTCON3, 1
extern volatile bit                     INT2IE              @ (((unsigned) &INTCON3)*8) + 4;
#define                                 INT2IE_bit          INTCON3, 4
extern volatile bit                     INT2IF              @ (((unsigned) &INTCON3)*8) + 1;
#define                                 INT2IF_bit          INTCON3, 1
extern volatile bit                     INT2IP              @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2IP_bit          INTCON3, 7
extern volatile bit                     INT2P               @ (((unsigned) &INTCON3)*8) + 7;
#define                                 INT2P_bit           INTCON3, 7
extern volatile bit                     INTEDG0             @ (((unsigned) &INTCON2)*8) + 6;
#define                                 INTEDG0_bit         INTCON2, 6
extern volatile bit                     INTEDG1             @ (((unsigned) &INTCON2)*8) + 5;
#define                                 INTEDG1_bit         INTCON2, 5
extern volatile bit                     INTEDG2             @ (((unsigned) &INTCON2)*8) + 4;
#define                                 INTEDG2_bit         INTCON2, 4
extern volatile bit                     INTSRC              @ (((unsigned) &OSCTUNE)*8) + 7;
#define                                 INTSRC_bit          OSCTUNE, 7
extern volatile bit                     IOFS                @ (((unsigned) &OSCCON)*8) + 2;
#define                                 IOFS_bit            OSCCON, 2
extern volatile bit                     IPEN                @ (((unsigned) &RCON)*8) + 7;
#define                                 IPEN_bit            RCON, 7
extern volatile bit                     IRCF0               @ (((unsigned) &OSCCON)*8) + 4;
#define                                 IRCF0_bit           OSCCON, 4
extern volatile bit                     IRCF1               @ (((unsigned) &OSCCON)*8) + 5;
#define                                 IRCF1_bit           OSCCON, 5
extern volatile bit                     IRCF2               @ (((unsigned) &OSCCON)*8) + 6;
#define                                 IRCF2_bit           OSCCON, 6
extern volatile bit                     IRVST               @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 IRVST_bit           HLVDCON, 5
extern volatile bit                     IVRST               @ (((unsigned) &HLVDCON)*8) + 5;
#define                                 IVRST_bit           HLVDCON, 5
extern volatile bit                     KBI0                @ (((unsigned) &PORTB)*8) + 4;
#define                                 KBI0_bit            PORTB, 4
extern volatile bit                     KBI1                @ (((unsigned) &PORTB)*8) + 5;
#define                                 KBI1_bit            PORTB, 5
extern volatile bit                     KBI2                @ (((unsigned) &PORTB)*8) + 6;
#define                                 KBI2_bit            PORTB, 6
extern volatile bit                     KBI3                @ (((unsigned) &PORTB)*8) + 7;
#define                                 KBI3_bit            PORTB, 7
extern volatile bit                     LA0                 @ (((unsigned) &LATA)*8) + 0;
#define                                 LA0_bit             LATA, 0
extern volatile bit                     LA1                 @ (((unsigned) &LATA)*8) + 1;
#define                                 LA1_bit             LATA, 1
extern volatile bit                     LA2                 @ (((unsigned) &LATA)*8) + 2;
#define                                 LA2_bit             LATA, 2
extern volatile bit                     LA3                 @ (((unsigned) &LATA)*8) + 3;
#define                                 LA3_bit             LATA, 3
extern volatile bit                     LA4                 @ (((unsigned) &LATA)*8) + 4;
#define                                 LA4_bit             LATA, 4
extern volatile bit                     LA5                 @ (((unsigned) &LATA)*8) + 5;
#define                                 LA5_bit             LATA, 5
extern volatile bit                     LA6                 @ (((unsigned) &LATA)*8) + 6;
#define                                 LA6_bit             LATA, 6
extern volatile bit                     LA7                 @ (((unsigned) &LATA)*8) + 7;
#define                                 LA7_bit             LATA, 7
extern volatile bit                     LATA0               @ (((unsigned) &LATA)*8) + 0;
#define                                 LATA0_bit           LATA, 0
extern volatile bit                     LATA1               @ (((unsigned) &LATA)*8) + 1;
#define                                 LATA1_bit           LATA, 1
extern volatile bit                     LATA2               @ (((unsigned) &LATA)*8) + 2;
#define                                 LATA2_bit           LATA, 2
extern volatile bit                     LATA3               @ (((unsigned) &LATA)*8) + 3;
#define                                 LATA3_bit           LATA, 3
extern volatile bit                     LATA4               @ (((unsigned) &LATA)*8) + 4;
#define                                 LATA4_bit           LATA, 4
extern volatile bit                     LATA5               @ (((unsigned) &LATA)*8) + 5;
#define                                 LATA5_bit           LATA, 5
extern volatile bit                     LATA6               @ (((unsigned) &LATA)*8) + 6;
#define                                 LATA6_bit           LATA, 6
extern volatile bit                     LATA7               @ (((unsigned) &LATA)*8) + 7;
#define                                 LATA7_bit           LATA, 7
extern volatile bit                     LATB0               @ (((unsigned) &LATB)*8) + 0;
#define                                 LATB0_bit           LATB, 0
extern volatile bit                     LATB1               @ (((unsigned) &LATB)*8) + 1;
#define                                 LATB1_bit           LATB, 1
extern volatile bit                     LATB2               @ (((unsigned) &LATB)*8) + 2;
#define                                 LATB2_bit           LATB, 2
extern volatile bit                     LATB3               @ (((unsigned) &LATB)*8) + 3;
#define                                 LATB3_bit           LATB, 3
extern volatile bit                     LATB4               @ (((unsigned) &LATB)*8) + 4;
#define                                 LATB4_bit           LATB, 4
extern volatile bit                     LATB5               @ (((unsigned) &LATB)*8) + 5;
#define                                 LATB5_bit           LATB, 5
extern volatile bit                     LATB6               @ (((unsigned) &LATB)*8) + 6;
#define                                 LATB6_bit           LATB, 6
extern volatile bit                     LATB7               @ (((unsigned) &LATB)*8) + 7;
#define                                 LATB7_bit           LATB, 7
extern volatile bit                     LATC0               @ (((unsigned) &LATC)*8) + 0;
#define                                 LATC0_bit           LATC, 0
extern volatile bit                     LATC1               @ (((unsigned) &LATC)*8) + 1;
#define                                 LATC1_bit           LATC, 1
extern volatile bit                     LATC2               @ (((unsigned) &LATC)*8) + 2;
#define                                 LATC2_bit           LATC, 2
extern volatile bit                     LATC3               @ (((unsigned) &LATC)*8) + 3;
#define                                 LATC3_bit           LATC, 3
extern volatile bit                     LATC4               @ (((unsigned) &LATC)*8) + 4;
#define                                 LATC4_bit           LATC, 4
extern volatile bit                     LATC5               @ (((unsigned) &LATC)*8) + 5;
#define                                 LATC5_bit           LATC, 5
extern volatile bit                     LATC6               @ (((unsigned) &LATC)*8) + 6;
#define                                 LATC6_bit           LATC, 6
extern volatile bit                     LATC7               @ (((unsigned) &LATC)*8) + 7;
#define                                 LATC7_bit           LATC, 7
extern volatile bit                     LB0                 @ (((unsigned) &LATB)*8) + 0;
#define                                 LB0_bit             LATB, 0
extern volatile bit                     LB1                 @ (((unsigned) &LATB)*8) + 1;
#define                                 LB1_bit             LATB, 1
extern volatile bit                     LB2                 @ (((unsigned) &LATB)*8) + 2;
#define                                 LB2_bit             LATB, 2
extern volatile bit                     LB3                 @ (((unsigned) &LATB)*8) + 3;
#define                                 LB3_bit             LATB, 3
extern volatile bit                     LB4                 @ (((unsigned) &LATB)*8) + 4;
#define                                 LB4_bit             LATB, 4
extern volatile bit                     LB5                 @ (((unsigned) &LATB)*8) + 5;
#define                                 LB5_bit             LATB, 5
extern volatile bit                     LB6                 @ (((unsigned) &LATB)*8) + 6;
#define                                 LB6_bit             LATB, 6
extern volatile bit                     LB7                 @ (((unsigned) &LATB)*8) + 7;
#define                                 LB7_bit             LATB, 7
extern volatile bit                     LC0                 @ (((unsigned) &LATC)*8) + 0;
#define                                 LC0_bit             LATC, 0
extern volatile bit                     LC1                 @ (((unsigned) &LATC)*8) + 1;
#define                                 LC1_bit             LATC, 1
extern volatile bit                     LC2                 @ (((unsigned) &LATC)*8) + 2;
#define                                 LC2_bit             LATC, 2
extern volatile bit                     LC3                 @ (((unsigned) &LATC)*8) + 3;
#define                                 LC3_bit             LATC, 3
extern volatile bit                     LC4                 @ (((unsigned) &LATC)*8) + 4;
#define                                 LC4_bit             LATC, 4
extern volatile bit                     LC5                 @ (((unsigned) &LATC)*8) + 5;
#define                                 LC5_bit             LATC, 5
extern volatile bit                     LC6                 @ (((unsigned) &LATC)*8) + 6;
#define                                 LC6_bit             LATC, 6
extern volatile bit                     LC7                 @ (((unsigned) &LATC)*8) + 7;
#define                                 LC7_bit             LATC, 7
extern volatile bit                     LVDEN               @ (((unsigned) &HLVDCON)*8) + 4;
#define                                 LVDEN_bit           HLVDCON, 4
extern volatile bit                     LVDIE               @ (((unsigned) &PIE2)*8) + 2;
#define                                 LVDIE_bit           PIE2, 2
extern volatile bit                     LVDIF               @ (((unsigned) &PIR2)*8) + 2;
#define                                 LVDIF_bit           PIR2, 2
extern volatile bit                     LVDIN               @ (((unsigned) &PORTA)*8) + 5;
#define                                 LVDIN_bit           PORTA, 5
extern volatile bit                     LVDIP               @ (((unsigned) &IPR2)*8) + 2;
#define                                 LVDIP_bit           IPR2, 2
extern volatile bit                     LVDL0               @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 LVDL0_bit           HLVDCON, 0
extern volatile bit                     LVDL1               @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 LVDL1_bit           HLVDCON, 1
extern volatile bit                     LVDL2               @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 LVDL2_bit           HLVDCON, 2
extern volatile bit                     LVDL3               @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 LVDL3_bit           HLVDCON, 3
extern volatile bit                     LVV0                @ (((unsigned) &HLVDCON)*8) + 0;
#define                                 LVV0_bit            HLVDCON, 0
extern volatile bit                     LVV1                @ (((unsigned) &HLVDCON)*8) + 1;
#define                                 LVV1_bit            HLVDCON, 1
extern volatile bit                     LVV2                @ (((unsigned) &HLVDCON)*8) + 2;
#define                                 LVV2_bit            HLVDCON, 2
extern volatile bit                     LVV3                @ (((unsigned) &HLVDCON)*8) + 3;
#define                                 LVV3_bit            HLVDCON, 3
extern volatile bit                     MCLR                @ (((unsigned) &PORTE)*8) + 3;
#define                                 MCLR_bit            PORTE, 3
extern volatile bit                     NEGATIVE            @ (((unsigned) &STATUS)*8) + 4;
#define                                 NEGATIVE_bit        STATUS, 4
extern volatile bit                     NOT_A               @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_A_bit           SSPSTAT, 5
extern volatile bit                     NOT_ADDRESS         @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 NOT_ADDRESS_bit     SSPSTAT, 5
extern volatile bit                     NOT_BOR             @ (((unsigned) &RCON)*8) + 0;
#define                                 NOT_BOR_bit         RCON, 0
extern volatile bit                     NOT_DONE            @ (((unsigned) &ADCON0)*8) + 1;
#define                                 NOT_DONE_bit        ADCON0, 1
extern volatile bit                     NOT_MCLR            @ (((unsigned) &PORTE)*8) + 3;
#define                                 NOT_MCLR_bit        PORTE, 3
extern volatile bit                     NOT_PD              @ (((unsigned) &RCON)*8) + 2;
#define                                 NOT_PD_bit          RCON, 2
extern volatile bit                     NOT_POR             @ (((unsigned) &RCON)*8) + 1;
#define                                 NOT_POR_bit         RCON, 1
extern volatile bit                     NOT_RBPU            @ (((unsigned) &INTCON2)*8) + 7;
#define                                 NOT_RBPU_bit        INTCON2, 7
extern volatile bit                     NOT_RI              @ (((unsigned) &RCON)*8) + 4;
#define                                 NOT_RI_bit          RCON, 4
extern volatile bit                     NOT_SS              @ (((unsigned) &PORTA)*8) + 5;
#define                                 NOT_SS_bit          PORTA, 5
extern volatile bit                     NOT_T1SYNC          @ (((unsigned) &T1CON)*8) + 2;
#define                                 NOT_T1SYNC_bit      T1CON, 2
extern volatile bit                     NOT_T3SYNC          @ (((unsigned) &T3CON)*8) + 2;
#define                                 NOT_T3SYNC_bit      T3CON, 2
extern volatile bit                     NOT_TO              @ (((unsigned) &RCON)*8) + 3;
#define                                 NOT_TO_bit          RCON, 3
extern volatile bit                     NOT_W               @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_W_bit           SSPSTAT, 2
extern volatile bit                     NOT_WRITE           @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 NOT_WRITE_bit       SSPSTAT, 2
extern volatile bit                     OERR                @ (((unsigned) &RCSTA)*8) + 1;
#define                                 OERR_bit            RCSTA, 1
extern volatile bit                     OSC1                @ (((unsigned) &PORTA)*8) + 7;
#define                                 OSC1_bit            PORTA, 7
extern volatile bit                     OSC2                @ (((unsigned) &PORTA)*8) + 6;
#define                                 OSC2_bit            PORTA, 6
extern volatile bit                     OSCFIE              @ (((unsigned) &PIE2)*8) + 7;
#define                                 OSCFIE_bit          PIE2, 7
extern volatile bit                     OSCFIF              @ (((unsigned) &PIR2)*8) + 7;
#define                                 OSCFIF_bit          PIR2, 7
extern volatile bit                     OSCFIP              @ (((unsigned) &IPR2)*8) + 7;
#define                                 OSCFIP_bit          IPR2, 7
extern volatile bit                     OSTS                @ (((unsigned) &OSCCON)*8) + 3;
#define                                 OSTS_bit            OSCCON, 3
extern volatile bit                     OV                  @ (((unsigned) &STATUS)*8) + 3;
#define                                 OV_bit              STATUS, 3
extern volatile bit                     OVERFLOW            @ (((unsigned) &STATUS)*8) + 3;
#define                                 OVERFLOW_bit        STATUS, 3
extern volatile bit                     PA1                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 PA1_bit             PORTC, 2
extern volatile bit                     PA2                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 PA2_bit             PORTC, 1
extern volatile bit                     PA2E                @ (((unsigned) &PORTE)*8) + 7;
#define                                 PA2E_bit            PORTE, 7
extern volatile bit                     PB1E                @ (((unsigned) &PORTE)*8) + 6;
#define                                 PB1E_bit            PORTE, 6
extern volatile bit                     PB2                 @ (((unsigned) &PORTE)*8) + 2;
#define                                 PB2_bit             PORTE, 2
extern volatile bit                     PB3E                @ (((unsigned) &PORTE)*8) + 4;
#define                                 PB3E_bit            PORTE, 4
extern volatile bit                     PC1E                @ (((unsigned) &PORTE)*8) + 5;
#define                                 PC1E_bit            PORTE, 5
extern volatile bit                     PC2                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 PC2_bit             PORTE, 1
extern volatile bit                     PC3E                @ (((unsigned) &PORTE)*8) + 3;
#define                                 PC3E_bit            PORTE, 3
extern volatile bit                     PCFG0               @ (((unsigned) &ADCON1)*8) + 0;
#define                                 PCFG0_bit           ADCON1, 0
extern volatile bit                     PCFG1               @ (((unsigned) &ADCON1)*8) + 1;
#define                                 PCFG1_bit           ADCON1, 1
extern volatile bit                     PCFG2               @ (((unsigned) &ADCON1)*8) + 2;
#define                                 PCFG2_bit           ADCON1, 2
extern volatile bit                     PCFG3               @ (((unsigned) &ADCON1)*8) + 3;
#define                                 PCFG3_bit           ADCON1, 3
extern volatile bit                     PD                  @ (((unsigned) &RCON)*8) + 2;
#define                                 PD_bit              RCON, 2
extern volatile bit                     PD2                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 PD2_bit             PORTE, 0
extern volatile bit                     PEIE                @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_bit            INTCON, 6
extern volatile bit                     PEIE_GIEL           @ (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_GIEL_bit       INTCON, 6
extern volatile bit                     PEN                 @ (((unsigned) &SSPCON2)*8) + 2;
#define                                 PEN_bit             SSPCON2, 2
extern volatile bit                     PGC                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 PGC_bit             PORTB, 6
extern volatile bit                     PGD                 @ (((unsigned) &PORTB)*8) + 7;
#define                                 PGD_bit             PORTB, 7
extern volatile bit                     PGM                 @ (((unsigned) &PORTB)*8) + 5;
#define                                 PGM_bit             PORTB, 5
extern volatile bit                     PLLEN               @ (((unsigned) &OSCTUNE)*8) + 6;
#define                                 PLLEN_bit           OSCTUNE, 6
extern volatile bit                     POR                 @ (((unsigned) &RCON)*8) + 1;
#define                                 POR_bit             RCON, 1
extern volatile bit                     PRSEN               @ (((unsigned) &PWM1CON)*8) + 7;
#define                                 PRSEN_bit           PWM1CON, 7
extern volatile bit                     PSA                 @ (((unsigned) &T0CON)*8) + 3;
#define                                 PSA_bit             T0CON, 3
extern volatile bit                     PSSAC0              @ (((unsigned) &ECCP1AS)*8) + 2;
#define                                 PSSAC0_bit          ECCP1AS, 2
extern volatile bit                     PSSAC1              @ (((unsigned) &ECCP1AS)*8) + 3;
#define                                 PSSAC1_bit          ECCP1AS, 3
extern volatile bit _DEPRECATED         RA0                 @ (((unsigned) &PORTA)*8) + 0;
#define                                 RA0_bit             PORTA, 0
extern volatile bit _DEPRECATED         RA1                 @ (((unsigned) &PORTA)*8) + 1;
#define                                 RA1_bit             PORTA, 1
extern volatile bit _DEPRECATED         RA2                 @ (((unsigned) &PORTA)*8) + 2;
#define                                 RA2_bit             PORTA, 2
extern volatile bit _DEPRECATED         RA3                 @ (((unsigned) &PORTA)*8) + 3;
#define                                 RA3_bit             PORTA, 3
extern volatile bit _DEPRECATED         RA4                 @ (((unsigned) &PORTA)*8) + 4;
#define                                 RA4_bit             PORTA, 4
extern volatile bit _DEPRECATED         RA5                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 RA5_bit             PORTA, 5
extern volatile bit _DEPRECATED         RA6                 @ (((unsigned) &PORTA)*8) + 6;
#define                                 RA6_bit             PORTA, 6
extern volatile bit _DEPRECATED         RA7                 @ (((unsigned) &PORTA)*8) + 7;
#define                                 RA7_bit             PORTA, 7
extern volatile bit _DEPRECATED         RB0                 @ (((unsigned) &PORTB)*8) + 0;
#define                                 RB0_bit             PORTB, 0
extern volatile bit _DEPRECATED         RB1                 @ (((unsigned) &PORTB)*8) + 1;
#define                                 RB1_bit             PORTB, 1
extern volatile bit _DEPRECATED         RB2                 @ (((unsigned) &PORTB)*8) + 2;
#define                                 RB2_bit             PORTB, 2
extern volatile bit _DEPRECATED         RB3                 @ (((unsigned) &PORTB)*8) + 3;
#define                                 RB3_bit             PORTB, 3
extern volatile bit _DEPRECATED         RB4                 @ (((unsigned) &PORTB)*8) + 4;
#define                                 RB4_bit             PORTB, 4
extern volatile bit _DEPRECATED         RB5                 @ (((unsigned) &PORTB)*8) + 5;
#define                                 RB5_bit             PORTB, 5
extern volatile bit _DEPRECATED         RB6                 @ (((unsigned) &PORTB)*8) + 6;
#define                                 RB6_bit             PORTB, 6
extern volatile bit _DEPRECATED         RB7                 @ (((unsigned) &PORTB)*8) + 7;
#define                                 RB7_bit             PORTB, 7
extern volatile bit                     RBIE                @ (((unsigned) &INTCON)*8) + 3;
#define                                 RBIE_bit            INTCON, 3
extern volatile bit                     RBIF                @ (((unsigned) &INTCON)*8) + 0;
#define                                 RBIF_bit            INTCON, 0
extern volatile bit                     RBIP                @ (((unsigned) &INTCON2)*8) + 0;
#define                                 RBIP_bit            INTCON2, 0
extern volatile bit                     RBPU                @ (((unsigned) &INTCON2)*8) + 7;
#define                                 RBPU_bit            INTCON2, 7
extern volatile bit _DEPRECATED         RC0                 @ (((unsigned) &PORTC)*8) + 0;
#define                                 RC0_bit             PORTC, 0
extern volatile bit _DEPRECATED         RC1                 @ (((unsigned) &PORTC)*8) + 1;
#define                                 RC1_bit             PORTC, 1
extern volatile bit                     RC1IE               @ (((unsigned) &PIE1)*8) + 5;
#define                                 RC1IE_bit           PIE1, 5
extern volatile bit                     RC1IF               @ (((unsigned) &PIR1)*8) + 5;
#define                                 RC1IF_bit           PIR1, 5
extern volatile bit                     RC1IP               @ (((unsigned) &IPR1)*8) + 5;
#define                                 RC1IP_bit           IPR1, 5
extern volatile bit _DEPRECATED         RC2                 @ (((unsigned) &PORTC)*8) + 2;
#define                                 RC2_bit             PORTC, 2
extern volatile bit _DEPRECATED         RC3                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 RC3_bit             PORTC, 3
extern volatile bit _DEPRECATED         RC4                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 RC4_bit             PORTC, 4
extern volatile bit _DEPRECATED         RC5                 @ (((unsigned) &PORTC)*8) + 5;
#define                                 RC5_bit             PORTC, 5
extern volatile bit _DEPRECATED         RC6                 @ (((unsigned) &PORTC)*8) + 6;
#define                                 RC6_bit             PORTC, 6
extern volatile bit _DEPRECATED         RC7                 @ (((unsigned) &PORTC)*8) + 7;
#define                                 RC7_bit             PORTC, 7
extern volatile bit                     RCEN                @ (((unsigned) &SSPCON2)*8) + 3;
#define                                 RCEN_bit            SSPCON2, 3
extern volatile bit                     RCIDL               @ (((unsigned) &BAUDCON)*8) + 6;
#define                                 RCIDL_bit           BAUDCON, 6
extern volatile bit                     RCIE                @ (((unsigned) &PIE1)*8) + 5;
#define                                 RCIE_bit            PIE1, 5
extern volatile bit                     RCIF                @ (((unsigned) &PIR1)*8) + 5;
#define                                 RCIF_bit            PIR1, 5
extern volatile bit                     RCIP                @ (((unsigned) &IPR1)*8) + 5;
#define                                 RCIP_bit            IPR1, 5
extern volatile bit                     RCMT                @ (((unsigned) &BAUDCON)*8) + 6;
#define                                 RCMT_bit            BAUDCON, 6
extern volatile bit                     RD                  @ (((unsigned) &EECON1)*8) + 0;
#define                                 RD_bit              EECON1, 0
extern volatile bit                     RD163               @ (((unsigned) &T3CON)*8) + 7;
#define                                 RD163_bit           T3CON, 7
extern volatile bit                     RDE                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 RDE_bit             PORTE, 0
extern volatile bit                     RE0                 @ (((unsigned) &PORTE)*8) + 0;
#define                                 RE0_bit             PORTE, 0
extern volatile bit                     RE1                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 RE1_bit             PORTE, 1
extern volatile bit                     RE2                 @ (((unsigned) &PORTE)*8) + 2;
#define                                 RE2_bit             PORTE, 2
extern volatile bit                     RE3                 @ (((unsigned) &PORTE)*8) + 3;
#define                                 RE3_bit             PORTE, 3
extern volatile bit                     RE4                 @ (((unsigned) &PORTE)*8) + 4;
#define                                 RE4_bit             PORTE, 4
extern volatile bit                     RE5                 @ (((unsigned) &PORTE)*8) + 5;
#define                                 RE5_bit             PORTE, 5
extern volatile bit                     RE6                 @ (((unsigned) &PORTE)*8) + 6;
#define                                 RE6_bit             PORTE, 6
extern volatile bit                     RE7                 @ (((unsigned) &PORTE)*8) + 7;
#define                                 RE7_bit             PORTE, 7
extern volatile bit                     RI                  @ (((unsigned) &RCON)*8) + 4;
#define                                 RI_bit              RCON, 4
extern volatile bit                     RJPU                @ (((unsigned) &PORTA)*8) + 7;
#define                                 RJPU_bit            PORTA, 7
extern volatile bit                     RSEN                @ (((unsigned) &SSPCON2)*8) + 1;
#define                                 RSEN_bit            SSPCON2, 1
extern volatile bit                     RW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 RW_bit              SSPSTAT, 2
extern volatile bit                     RX                  @ (((unsigned) &PORTC)*8) + 7;
#define                                 RX_bit              PORTC, 7
extern volatile bit                     RX9                 @ (((unsigned) &RCSTA)*8) + 6;
#define                                 RX9_bit             RCSTA, 6
extern volatile bit                     RX9D                @ (((unsigned) &RCSTA)*8) + 0;
#define                                 RX9D_bit            RCSTA, 0
extern volatile bit                     RXCKP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 RXCKP_bit           BAUDCON, 5
extern volatile bit                     RXDTP               @ (((unsigned) &BAUDCON)*8) + 5;
#define                                 RXDTP_bit           BAUDCON, 5
extern volatile bit                     R_NOT_W             @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_NOT_W_bit         SSPSTAT, 2
extern volatile bit                     R_W                 @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_W_bit             SSPSTAT, 2
extern volatile bit                     R_nW                @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_nW_bit            SSPSTAT, 2
extern volatile bit                     SBOREN              @ (((unsigned) &RCON)*8) + 6;
#define                                 SBOREN_bit          RCON, 6
extern volatile bit                     SCK                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 SCK_bit             PORTC, 3
extern volatile bit                     SCKP                @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 SCKP_bit            BAUDCON, 4
extern volatile bit                     SCL                 @ (((unsigned) &PORTC)*8) + 3;
#define                                 SCL_bit             PORTC, 3
extern volatile bit                     SCS0                @ (((unsigned) &OSCCON)*8) + 0;
#define                                 SCS0_bit            OSCCON, 0
extern volatile bit                     SCS1                @ (((unsigned) &OSCCON)*8) + 1;
#define                                 SCS1_bit            OSCCON, 1
extern volatile bit                     SDA                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 SDA_bit             PORTC, 4
extern volatile bit                     SDI                 @ (((unsigned) &PORTC)*8) + 4;
#define                                 SDI_bit             PORTC, 4
extern volatile bit                     SDO                 @ (((unsigned) &PORTC)*8) + 5;
#define                                 SDO_bit             PORTC, 5
extern volatile bit                     SEN                 @ (((unsigned) &SSPCON2)*8) + 0;
#define                                 SEN_bit             SSPCON2, 0
extern volatile bit                     SENDB               @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB_bit           TXSTA, 3
extern volatile bit                     SENDB1              @ (((unsigned) &TXSTA)*8) + 3;
#define                                 SENDB1_bit          TXSTA, 3
extern volatile bit                     SMP                 @ (((unsigned) &SSPSTAT)*8) + 7;
#define                                 SMP_bit             SSPSTAT, 7
extern volatile bit                     SOSCEN              @ (((unsigned) &T1CON)*8) + 3;
#define                                 SOSCEN_bit          T1CON, 3
extern volatile bit                     SOSCEN3             @ (((unsigned) &T3CON)*8) + 3;
#define                                 SOSCEN3_bit         T3CON, 3
extern volatile bit                     SP0                 @ (((unsigned) &STKPTR)*8) + 0;
#define                                 SP0_bit             STKPTR, 0
extern volatile bit                     SP1                 @ (((unsigned) &STKPTR)*8) + 1;
#define                                 SP1_bit             STKPTR, 1
extern volatile bit                     SP2                 @ (((unsigned) &STKPTR)*8) + 2;
#define                                 SP2_bit             STKPTR, 2
extern volatile bit                     SP3                 @ (((unsigned) &STKPTR)*8) + 3;
#define                                 SP3_bit             STKPTR, 3
extern volatile bit                     SP4                 @ (((unsigned) &STKPTR)*8) + 4;
#define                                 SP4_bit             STKPTR, 4
extern volatile bit                     SPEN                @ (((unsigned) &RCSTA)*8) + 7;
#define                                 SPEN_bit            RCSTA, 7
extern volatile bit                     SREN                @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SREN_bit            RCSTA, 5
extern volatile bit                     SRENA               @ (((unsigned) &RCSTA)*8) + 5;
#define                                 SRENA_bit           RCSTA, 5
extern volatile bit                     SS                  @ (((unsigned) &PORTA)*8) + 5;
#define                                 SS_bit              PORTA, 5
extern volatile bit                     SSPEN               @ (((unsigned) &SSPCON1)*8) + 5;
#define                                 SSPEN_bit           SSPCON1, 5
extern volatile bit                     SSPIE               @ (((unsigned) &PIE1)*8) + 3;
#define                                 SSPIE_bit           PIE1, 3
extern volatile bit                     SSPIF               @ (((unsigned) &PIR1)*8) + 3;
#define                                 SSPIF_bit           PIR1, 3
extern volatile bit                     SSPIP               @ (((unsigned) &IPR1)*8) + 3;
#define                                 SSPIP_bit           IPR1, 3
extern volatile bit                     SSPM0               @ (((unsigned) &SSPCON1)*8) + 0;
#define                                 SSPM0_bit           SSPCON1, 0
extern volatile bit                     SSPM1               @ (((unsigned) &SSPCON1)*8) + 1;
#define                                 SSPM1_bit           SSPCON1, 1
extern volatile bit                     SSPM2               @ (((unsigned) &SSPCON1)*8) + 2;
#define                                 SSPM2_bit           SSPCON1, 2
extern volatile bit                     SSPM3               @ (((unsigned) &SSPCON1)*8) + 3;
#define                                 SSPM3_bit           SSPCON1, 3
extern volatile bit                     SSPOV               @ (((unsigned) &SSPCON1)*8) + 6;
#define                                 SSPOV_bit           SSPCON1, 6
extern volatile bit                     START               @ (((unsigned) &SSPSTAT)*8) + 3;
#define                                 START_bit           SSPSTAT, 3
extern volatile bit                     STKFUL              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKFUL_bit          STKPTR, 7
extern volatile bit                     STKOVF              @ (((unsigned) &STKPTR)*8) + 7;
#define                                 STKOVF_bit          STKPTR, 7
extern volatile bit                     STKUNF              @ (((unsigned) &STKPTR)*8) + 6;
#define                                 STKUNF_bit          STKPTR, 6
extern volatile bit                     STOP                @ (((unsigned) &SSPSTAT)*8) + 4;
#define                                 STOP_bit            SSPSTAT, 4
extern volatile bit                     SWDTE               @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTE_bit           WDTCON, 0
extern volatile bit                     SWDTEN              @ (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTEN_bit          WDTCON, 0
extern volatile bit                     SYNC                @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC_bit            TXSTA, 4
extern volatile bit                     SYNC1               @ (((unsigned) &TXSTA)*8) + 4;
#define                                 SYNC1_bit           TXSTA, 4
extern volatile bit                     T016BIT             @ (((unsigned) &T0CON)*8) + 6;
#define                                 T016BIT_bit         T0CON, 6
extern volatile bit                     T08BIT              @ (((unsigned) &T0CON)*8) + 6;
#define                                 T08BIT_bit          T0CON, 6
extern volatile bit                     T0CKI               @ (((unsigned) &PORTA)*8) + 4;
#define                                 T0CKI_bit           PORTA, 4
extern volatile bit                     T0CS                @ (((unsigned) &T0CON)*8) + 5;
#define                                 T0CS_bit            T0CON, 5
extern volatile bit                     T0IE                @ (((unsigned) &INTCON)*8) + 5;
#define                                 T0IE_bit            INTCON, 5
extern volatile bit                     T0IF                @ (((unsigned) &INTCON)*8) + 2;
#define                                 T0IF_bit            INTCON, 2
extern volatile bit                     T0PS0               @ (((unsigned) &T0CON)*8) + 0;
#define                                 T0PS0_bit           T0CON, 0
extern volatile bit                     T0PS1               @ (((unsigned) &T0CON)*8) + 1;
#define                                 T0PS1_bit           T0CON, 1
extern volatile bit                     T0PS2               @ (((unsigned) &T0CON)*8) + 2;
#define                                 T0PS2_bit           T0CON, 2
extern volatile bit                     T0PS3               @ (((unsigned) &T0CON)*8) + 3;
#define                                 T0PS3_bit           T0CON, 3
extern volatile bit                     T0SE                @ (((unsigned) &T0CON)*8) + 4;
#define                                 T0SE_bit            T0CON, 4
extern volatile bit                     T13CKI              @ (((unsigned) &PORTC)*8) + 0;
#define                                 T13CKI_bit          PORTC, 0
extern volatile bit                     T1CKI               @ (((unsigned) &PORTC)*8) + 0;
#define                                 T1CKI_bit           PORTC, 0
extern volatile bit                     T1CKPS0             @ (((unsigned) &T1CON)*8) + 4;
#define                                 T1CKPS0_bit         T1CON, 4
extern volatile bit                     T1CKPS1             @ (((unsigned) &T1CON)*8) + 5;
#define                                 T1CKPS1_bit         T1CON, 5
extern volatile bit                     T1OSCEN             @ (((unsigned) &T1CON)*8) + 3;
#define                                 T1OSCEN_bit         T1CON, 3
extern volatile bit                     T1OSI               @ (((unsigned) &PORTC)*8) + 1;
#define                                 T1OSI_bit           PORTC, 1
extern volatile bit                     T1OSO               @ (((unsigned) &PORTC)*8) + 0;
#define                                 T1OSO_bit           PORTC, 0
extern volatile bit                     T1RD16              @ (((unsigned) &T1CON)*8) + 7;
#define                                 T1RD16_bit          T1CON, 7
extern volatile bit                     T1RUN               @ (((unsigned) &T1CON)*8) + 6;
#define                                 T1RUN_bit           T1CON, 6
extern volatile bit                     T1SYNC              @ (((unsigned) &T1CON)*8) + 2;
#define                                 T1SYNC_bit          T1CON, 2
extern volatile bit                     T2CKPS0             @ (((unsigned) &T2CON)*8) + 0;
#define                                 T2CKPS0_bit         T2CON, 0
extern volatile bit                     T2CKPS1             @ (((unsigned) &T2CON)*8) + 1;
#define                                 T2CKPS1_bit         T2CON, 1
extern volatile bit                     T2OUTPS0            @ (((unsigned) &T2CON)*8) + 3;
#define                                 T2OUTPS0_bit        T2CON, 3
extern volatile bit                     T2OUTPS1            @ (((unsigned) &T2CON)*8) + 4;
#define                                 T2OUTPS1_bit        T2CON, 4
extern volatile bit                     T2OUTPS2            @ (((unsigned) &T2CON)*8) + 5;
#define                                 T2OUTPS2_bit        T2CON, 5
extern volatile bit                     T2OUTPS3            @ (((unsigned) &T2CON)*8) + 6;
#define                                 T2OUTPS3_bit        T2CON, 6
extern volatile bit                     T3CCP1              @ (((unsigned) &T3CON)*8) + 3;
#define                                 T3CCP1_bit          T3CON, 3
extern volatile bit                     T3CCP2              @ (((unsigned) &T3CON)*8) + 6;
#define                                 T3CCP2_bit          T3CON, 6
extern volatile bit                     T3CKPS0             @ (((unsigned) &T3CON)*8) + 4;
#define                                 T3CKPS0_bit         T3CON, 4
extern volatile bit                     T3CKPS1             @ (((unsigned) &T3CON)*8) + 5;
#define                                 T3CKPS1_bit         T3CON, 5
extern volatile bit                     T3RD16              @ (((unsigned) &T3CON)*8) + 7;
#define                                 T3RD16_bit          T3CON, 7
extern volatile bit                     T3SYNC              @ (((unsigned) &T3CON)*8) + 2;
#define                                 T3SYNC_bit          T3CON, 2
extern volatile bit                     TMR0IE              @ (((unsigned) &INTCON)*8) + 5;
#define                                 TMR0IE_bit          INTCON, 5
extern volatile bit                     TMR0IF              @ (((unsigned) &INTCON)*8) + 2;
#define                                 TMR0IF_bit          INTCON, 2
extern volatile bit                     TMR0IP              @ (((unsigned) &INTCON2)*8) + 2;
#define                                 TMR0IP_bit          INTCON2, 2
extern volatile bit                     TMR0ON              @ (((unsigned) &T0CON)*8) + 7;
#define                                 TMR0ON_bit          T0CON, 7
extern volatile bit                     TMR1CS              @ (((unsigned) &T1CON)*8) + 1;
#define                                 TMR1CS_bit          T1CON, 1
extern volatile bit                     TMR1IE              @ (((unsigned) &PIE1)*8) + 0;
#define                                 TMR1IE_bit          PIE1, 0
extern volatile bit                     TMR1IF              @ (((unsigned) &PIR1)*8) + 0;
#define                                 TMR1IF_bit          PIR1, 0
extern volatile bit                     TMR1IP              @ (((unsigned) &IPR1)*8) + 0;
#define                                 TMR1IP_bit          IPR1, 0
extern volatile bit                     TMR1ON              @ (((unsigned) &T1CON)*8) + 0;
#define                                 TMR1ON_bit          T1CON, 0
extern volatile bit                     TMR2IE              @ (((unsigned) &PIE1)*8) + 1;
#define                                 TMR2IE_bit          PIE1, 1
extern volatile bit                     TMR2IF              @ (((unsigned) &PIR1)*8) + 1;
#define                                 TMR2IF_bit          PIR1, 1
extern volatile bit                     TMR2IP              @ (((unsigned) &IPR1)*8) + 1;
#define                                 TMR2IP_bit          IPR1, 1
extern volatile bit                     TMR2ON              @ (((unsigned) &T2CON)*8) + 2;
#define                                 TMR2ON_bit          T2CON, 2
extern volatile bit                     TMR3CS              @ (((unsigned) &T3CON)*8) + 1;
#define                                 TMR3CS_bit          T3CON, 1
extern volatile bit                     TMR3IE              @ (((unsigned) &PIE2)*8) + 1;
#define                                 TMR3IE_bit          PIE2, 1
extern volatile bit                     TMR3IF              @ (((unsigned) &PIR2)*8) + 1;
#define                                 TMR3IF_bit          PIR2, 1
extern volatile bit                     TMR3IP              @ (((unsigned) &IPR2)*8) + 1;
#define                                 TMR3IP_bit          IPR2, 1
extern volatile bit                     TMR3ON              @ (((unsigned) &T3CON)*8) + 0;
#define                                 TMR3ON_bit          T3CON, 0
extern volatile bit                     TO                  @ (((unsigned) &RCON)*8) + 3;
#define                                 TO_bit              RCON, 3
extern volatile bit                     TOUTPS0             @ (((unsigned) &T2CON)*8) + 3;
#define                                 TOUTPS0_bit         T2CON, 3
extern volatile bit                     TOUTPS1             @ (((unsigned) &T2CON)*8) + 4;
#define                                 TOUTPS1_bit         T2CON, 4
extern volatile bit                     TOUTPS2             @ (((unsigned) &T2CON)*8) + 5;
#define                                 TOUTPS2_bit         T2CON, 5
extern volatile bit                     TOUTPS3             @ (((unsigned) &T2CON)*8) + 6;
#define                                 TOUTPS3_bit         T2CON, 6
extern volatile bit                     TRISA0              @ (((unsigned) &TRISA)*8) + 0;
#define                                 TRISA0_bit          TRISA, 0
extern volatile bit                     TRISA1              @ (((unsigned) &TRISA)*8) + 1;
#define                                 TRISA1_bit          TRISA, 1
extern volatile bit                     TRISA2              @ (((unsigned) &TRISA)*8) + 2;
#define                                 TRISA2_bit          TRISA, 2
extern volatile bit                     TRISA3              @ (((unsigned) &TRISA)*8) + 3;
#define                                 TRISA3_bit          TRISA, 3
extern volatile bit                     TRISA4              @ (((unsigned) &TRISA)*8) + 4;
#define                                 TRISA4_bit          TRISA, 4
extern volatile bit                     TRISA5              @ (((unsigned) &TRISA)*8) + 5;
#define                                 TRISA5_bit          TRISA, 5
extern volatile bit                     TRISA6              @ (((unsigned) &TRISA)*8) + 6;
#define                                 TRISA6_bit          TRISA, 6
extern volatile bit                     TRISA7              @ (((unsigned) &TRISA)*8) + 7;
#define                                 TRISA7_bit          TRISA, 7
extern volatile bit                     TRISB0              @ (((unsigned) &TRISB)*8) + 0;
#define                                 TRISB0_bit          TRISB, 0
extern volatile bit                     TRISB1              @ (((unsigned) &TRISB)*8) + 1;
#define                                 TRISB1_bit          TRISB, 1
extern volatile bit                     TRISB2              @ (((unsigned) &TRISB)*8) + 2;
#define                                 TRISB2_bit          TRISB, 2
extern volatile bit                     TRISB3              @ (((unsigned) &TRISB)*8) + 3;
#define                                 TRISB3_bit          TRISB, 3
extern volatile bit                     TRISB4              @ (((unsigned) &TRISB)*8) + 4;
#define                                 TRISB4_bit          TRISB, 4
extern volatile bit                     TRISB5              @ (((unsigned) &TRISB)*8) + 5;
#define                                 TRISB5_bit          TRISB, 5
extern volatile bit                     TRISB6              @ (((unsigned) &TRISB)*8) + 6;
#define                                 TRISB6_bit          TRISB, 6
extern volatile bit                     TRISB7              @ (((unsigned) &TRISB)*8) + 7;
#define                                 TRISB7_bit          TRISB, 7
extern volatile bit                     TRISC0              @ (((unsigned) &TRISC)*8) + 0;
#define                                 TRISC0_bit          TRISC, 0
extern volatile bit                     TRISC1              @ (((unsigned) &TRISC)*8) + 1;
#define                                 TRISC1_bit          TRISC, 1
extern volatile bit                     TRISC2              @ (((unsigned) &TRISC)*8) + 2;
#define                                 TRISC2_bit          TRISC, 2
extern volatile bit                     TRISC3              @ (((unsigned) &TRISC)*8) + 3;
#define                                 TRISC3_bit          TRISC, 3
extern volatile bit                     TRISC4              @ (((unsigned) &TRISC)*8) + 4;
#define                                 TRISC4_bit          TRISC, 4
extern volatile bit                     TRISC5              @ (((unsigned) &TRISC)*8) + 5;
#define                                 TRISC5_bit          TRISC, 5
extern volatile bit                     TRISC6              @ (((unsigned) &TRISC)*8) + 6;
#define                                 TRISC6_bit          TRISC, 6
extern volatile bit                     TRISC7              @ (((unsigned) &TRISC)*8) + 7;
#define                                 TRISC7_bit          TRISC, 7
extern volatile bit                     TRMT                @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT_bit            TXSTA, 1
extern volatile bit                     TRMT1               @ (((unsigned) &TXSTA)*8) + 1;
#define                                 TRMT1_bit           TXSTA, 1
extern volatile bit                     TUN0                @ (((unsigned) &OSCTUNE)*8) + 0;
#define                                 TUN0_bit            OSCTUNE, 0
extern volatile bit                     TUN1                @ (((unsigned) &OSCTUNE)*8) + 1;
#define                                 TUN1_bit            OSCTUNE, 1
extern volatile bit                     TUN2                @ (((unsigned) &OSCTUNE)*8) + 2;
#define                                 TUN2_bit            OSCTUNE, 2
extern volatile bit                     TUN3                @ (((unsigned) &OSCTUNE)*8) + 3;
#define                                 TUN3_bit            OSCTUNE, 3
extern volatile bit                     TUN4                @ (((unsigned) &OSCTUNE)*8) + 4;
#define                                 TUN4_bit            OSCTUNE, 4
extern volatile bit                     TX                  @ (((unsigned) &PORTC)*8) + 6;
#define                                 TX_bit              PORTC, 6
extern volatile bit                     TX1IE               @ (((unsigned) &PIE1)*8) + 4;
#define                                 TX1IE_bit           PIE1, 4
extern volatile bit                     TX1IF               @ (((unsigned) &PIR1)*8) + 4;
#define                                 TX1IF_bit           PIR1, 4
extern volatile bit                     TX1IP               @ (((unsigned) &IPR1)*8) + 4;
#define                                 TX1IP_bit           IPR1, 4
extern volatile bit                     TX9                 @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX9_bit             TXSTA, 6
extern volatile bit                     TX91                @ (((unsigned) &TXSTA)*8) + 6;
#define                                 TX91_bit            TXSTA, 6
extern volatile bit                     TX9D                @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D_bit            TXSTA, 0
extern volatile bit                     TX9D1               @ (((unsigned) &TXSTA)*8) + 0;
#define                                 TX9D1_bit           TXSTA, 0
extern volatile bit                     TXCKP               @ (((unsigned) &BAUDCON)*8) + 4;
#define                                 TXCKP_bit           BAUDCON, 4
extern volatile bit                     TXEN                @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN_bit            TXSTA, 5
extern volatile bit                     TXEN1               @ (((unsigned) &TXSTA)*8) + 5;
#define                                 TXEN1_bit           TXSTA, 5
extern volatile bit                     TXIE                @ (((unsigned) &PIE1)*8) + 4;
#define                                 TXIE_bit            PIE1, 4
extern volatile bit                     TXIF                @ (((unsigned) &PIR1)*8) + 4;
#define                                 TXIF_bit            PIR1, 4
extern volatile bit                     TXIP                @ (((unsigned) &IPR1)*8) + 4;
#define                                 TXIP_bit            IPR1, 4
extern volatile bit                     UA                  @ (((unsigned) &SSPSTAT)*8) + 1;
#define                                 UA_bit              SSPSTAT, 1
extern volatile bit                     ULPWUIN             @ (((unsigned) &PORTA)*8) + 0;
#define                                 ULPWUIN_bit         PORTA, 0
extern volatile bit                     VCFG0               @ (((unsigned) &ADCON1)*8) + 4;
#define                                 VCFG0_bit           ADCON1, 4
extern volatile bit                     VCFG01              @ (((unsigned) &ADCON1)*8) + 4;
#define                                 VCFG01_bit          ADCON1, 4
extern volatile bit                     VCFG1               @ (((unsigned) &ADCON1)*8) + 5;
#define                                 VCFG1_bit           ADCON1, 5
extern volatile bit                     VCFG11              @ (((unsigned) &ADCON1)*8) + 5;
#define                                 VCFG11_bit          ADCON1, 5
extern volatile bit                     VDIRMAG             @ (((unsigned) &HLVDCON)*8) + 7;
#define                                 VDIRMAG_bit         HLVDCON, 7
extern volatile bit                     VPP                 @ (((unsigned) &PORTE)*8) + 3;
#define                                 VPP_bit             PORTE, 3
extern volatile bit                     VREFN               @ (((unsigned) &PORTA)*8) + 2;
#define                                 VREFN_bit           PORTA, 2
extern volatile bit                     VREFP               @ (((unsigned) &PORTA)*8) + 3;
#define                                 VREFP_bit           PORTA, 3
extern volatile bit                     W4E                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 W4E_bit             BAUDCON, 1
extern volatile bit                     WCOL                @ (((unsigned) &SSPCON1)*8) + 7;
#define                                 WCOL_bit            SSPCON1, 7
extern volatile bit                     WR                  @ (((unsigned) &EECON1)*8) + 1;
#define                                 WR_bit              EECON1, 1
extern volatile bit                     WRE                 @ (((unsigned) &PORTE)*8) + 1;
#define                                 WRE_bit             PORTE, 1
extern volatile bit                     WREN                @ (((unsigned) &EECON1)*8) + 2;
#define                                 WREN_bit            EECON1, 2
extern volatile bit                     WRERR               @ (((unsigned) &EECON1)*8) + 3;
#define                                 WRERR_bit           EECON1, 3
extern volatile bit                     WUE                 @ (((unsigned) &BAUDCON)*8) + 1;
#define                                 WUE_bit             BAUDCON, 1
extern volatile bit                     ZERO                @ (((unsigned) &STATUS)*8) + 2;
#define                                 ZERO_bit            STATUS, 2
extern volatile bit                     nA                  @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nA_bit              SSPSTAT, 5
extern volatile bit                     nADDRESS            @ (((unsigned) &SSPSTAT)*8) + 5;
#define                                 nADDRESS_bit        SSPSTAT, 5
extern volatile bit                     nBOR                @ (((unsigned) &RCON)*8) + 0;
#define                                 nBOR_bit            RCON, 0
extern volatile bit                     nDONE               @ (((unsigned) &ADCON0)*8) + 1;
#define                                 nDONE_bit           ADCON0, 1
extern volatile bit                     nMCLR               @ (((unsigned) &PORTE)*8) + 3;
#define                                 nMCLR_bit           PORTE, 3
extern volatile bit                     nPD                 @ (((unsigned) &RCON)*8) + 2;
#define                                 nPD_bit             RCON, 2
extern volatile bit                     nPOR                @ (((unsigned) &RCON)*8) + 1;
#define                                 nPOR_bit            RCON, 1
extern volatile bit                     nRBPU               @ (((unsigned) &INTCON2)*8) + 7;
#define                                 nRBPU_bit           INTCON2, 7
extern volatile bit                     nRI                 @ (((unsigned) &RCON)*8) + 4;
#define                                 nRI_bit             RCON, 4
extern volatile bit                     nSS                 @ (((unsigned) &PORTA)*8) + 5;
#define                                 nSS_bit             PORTA, 5
extern volatile bit                     nT1SYNC             @ (((unsigned) &T1CON)*8) + 2;
#define                                 nT1SYNC_bit         T1CON, 2
extern volatile bit                     nT3SYNC             @ (((unsigned) &T3CON)*8) + 2;
#define                                 nT3SYNC_bit         T3CON, 2
extern volatile bit                     nTO                 @ (((unsigned) &RCON)*8) + 3;
#define                                 nTO_bit             RCON, 3
extern volatile bit                     nW                  @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nW_bit              SSPSTAT, 2
extern volatile bit                     nWRITE              @ (((unsigned) &SSPSTAT)*8) + 2;
#define                                 nWRITE_bit          SSPSTAT, 2

#endif // _PIC18F2420_H_
