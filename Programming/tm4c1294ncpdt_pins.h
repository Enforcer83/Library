#define PA 1
#define PB 2
#define PC 3
#define PD 4
#define PE 5
#define PF 6
#define PG 7
#define PH 8
#define PJ 9
#define PK 10
#define PL 11
#define PM 12
#define PN 13
#define PP 14
#define PQ 15
#define PR 16
#define PS 17
#define PT 18

//
// GPIO definitions by physical pin
//
static const uint8_t PD_0    =   1;
static const uint8_t PD_1    =   2;
static const uint8_t PD_2    =   3;
static const uint8_t PD_3    =   4;
static const uint8_t PQ_0    =   5;
static const uint8_t PQ_1    =   6;
//					 VDD     =   7;
//					 VDDA    =   8;
//					 VREFA+  =   9;
//					 GNDA    =  10;
static const uint8_t PQ_2    =  11;
static const uint8_t PE_3    =  12;
static const uint8_t PE_2    =  13;
static const uint8_t PE_1    =  14;
static const uint8_t PE_0    =  15;
//					 VDD     =  16;
//					 GND     =  17;
static const uint8_t PK_0    =  18;
static const uint8_t PK_1    =  19;
static const uint8_t PK_2    =  20;
static const uint8_t PK_3    =  21;
static const uint8_t PC_7    =  22;
static const uint8_t PC_6    =  23;
static const uint8_t PC_5    =  24;
static const uint8_t PC_4    =  25;
//					 VDD     =  26;
static const uint8_t PQ_3    =  27;
//					 VDD     =  28;
static const uint8_t PH_0    =  29;
static const uint8_t PH_1    =  30;
static const uint8_t PH_2    =  31;
static const uint8_t PH_3    =  32;
static const uint8_t PA_0    =  33;
static const uint8_t PA_1    =  34;
static const uint8_t PA_2    =  35;
static const uint8_t PA_3    =  36;
static const uint8_t PA_4    =  37;
static const uint8_t PA_5    =  38;
//					 VDD     =  39;
static const uint8_t PA_6    =  40;
static const uint8_t PA_7    =  41;
static const uint8_t PF_0    =  42;
static const uint8_t PF_1    =  43;
static const uint8_t PF_2    =  44;
static const uint8_t PF_3    =  45;
static const uint8_t PF_4    =  46;
//					 VDD     =  47;
//					 GND     =  48;
static const uint8_t PG_0    =  49;
static const uint8_t PG_1    =  50;
//					 VDD     =  51;
//					 VDD     =  52;
//					 EN0RXIN =  53;
//					 EN0RXIP =  54;
//					 GND     =  55;
//					 EN0TXON =  56;
//					 EN0TXOP =  57;
//					 GND     =  58;
//					 RBIAS   =  59;
static const uint8_t PK_7    =  60;
static const uint8_t PK_6    =  61;
static const uint8_t PK_5    =  62;
static const uint8_t PK_4    =  63;
//					 nWAKE   =  64;
//					 nHIB    =  65;
//					 XOSC0   =  66;
//					 XOSC1   =  67;
//					 VBAT    =  68;
//					 VDD     =  69;
//					 nRST    =  70;
static const uint8_t PM_7 	 =  71;
static const uint8_t PM_6    =  72;
static const uint8_t PM_5    =  73;
static const uint8_t PM_4    =  74;
static const uint8_t PM_3    =  75;
static const uint8_t PM_2    =  76;
static const uint8_t PM_1    =  77;
static const uint8_t PM_0    =  78;
//					 VDD     =  79;
//					 GND     =  80;
static const uint8_t PL_0    =  81;
static const uint8_t PL_1    =  82;
static const uint8_t PL_2    =  83;
static const uint8_t PL_3    =  84;
static const uint8_t PL_4    =  85;
static const uint8_t PL_5    =  86;
//					 VDDC    =  87;
//					 OSC0    =  88;
//					 OSC1    =  89;
//					 VDD     =  90;
static const uint8_t PB_2    =  91;
static const uint8_t PB_3    =  92;
static const uint8_t PL_7    =  93;
static const uint8_t PL_6    =  94;
static const uint8_t PB_0    =  95;
static const uint8_t PB_1    =  96;
static const uint8_t PC_3    =  97;
static const uint8_t PC_2    =  98;
static const uint8_t PC_1    =  99;
static const uint8_t PC_0    = 100;
//					 VDD     = 101;
static const uint8_t PQ_4    = 102;
static const uint8_t PP_2    = 103;
static const uint8_t PP_3    = 104;
static const uint8_t PP_4    = 105;
static const uint8_t PP_5    = 106;
static const uint8_t PN_0    = 107;
static const uint8_t PN_1    = 108;
static const uint8_t PN_2    = 109;
static const uint8_t PN_3    = 110;
static const uint8_t PN_4    = 111;
static const uint8_t PN_5    = 112;
//					 VDD     = 113;
//					 GND     = 114;
//					 VDDC    = 115;
static const uint8_t PJ_0    = 116;
static const uint8_t PJ_1    = 117;
static const uint8_t PP_0    = 118;
static const uint8_t PP_1    = 119;
static const uint8_t PB_5    = 120;
static const uint8_t PB_4    = 121;
//					 VDD     = 122;
static const uint8_t PE_4    = 123;
static const uint8_t PE_5    = 124;
static const uint8_t PD_4    = 125;
static const uint8_t PD_5    = 126;
static const uint8_t PD_6    = 127;
static const uint8_t PD_7    = 128;

#define D1_LED         PN_1
#define RED_LED        PN_1
#define D2_LED         PN_0
#define GREEN_LED      PN_0
#define D3_LED         PF_4
#define D4_LED         PF_0

#define ACTIVITY_LED      GPIO_PF4_EN0LED1
#define ACTIVITY_LED_BASE GPIO_PORTF_BASE
#define ACTIVITY_LED_PIN  GPIO_PIN_4
#define LINK_LED          GPIO_PF0_EN0LED0
#define LINK_LED_BASE     GPIO_PORTF_BASE
#define LINK_LED_PIN      GPIO_PIN_0

// pushbuttons
#define PUSH1      PJ_0
#define PUSH2      PJ_1
#define TEMPSENSOR 0

#define USR_SW1    PJ_0
#define USR_SW2    PJ_1
// pushbuttons end

#define A0  PE_3   /* X8_12 */
#define A1  PE_2   /* X8_10 */
#define A2  PE_1   /* X8_08 */
#define A3  PE_0   /* X8_06 */
#define A4  PD_7   /* X8_14 */
#define A5  PD_6   /* AIN5 */
#define A6  PD_5   /* X6_11 */
#define A7  PD_4   /* X6_09 */
#define A8  PE_5   /* X8_11 */
#define A9  PE_4   /* X8_03 */
#define A10 PB_4   /* X6_06 */
#define A11 PB_5   /* X6_08 */
#define A12 PD_3   /* X8_13 */
#define A13 PD_2   /* X6_03 */
#define A14 PD_1   /* X9_12 */
#define A15 PD_0   /* X9_14 */
#define A16 PK_0   /* X6_10 */
#define A17 PK_1   /* X6_12 */
#define A18 PK_2   /* X6_14 */
#define A19 PK_3   /* X6_16 */

/* pins defines by connector
   Using defines instead of 'static const uint8_t' re-uses correct 
   energia pin declares. Also checks that all Px_x are declared.
*/

//      X6_01 3.3v
//      X6_02 5v
#define X6_03 PD_2
//      X6_04 GND
#define X6_05 PP_0
#define X6_5  PP_0
#define X6_06 PB_4
#define X6_6  PB_4
#define X6_07 PP_1
#define X6_7  PP_1
#define X6_08 PB_5
#define X6_8  PB_5
#define X6_09 PA_0
#define X6_9  PA_0
#define X6_10 PK_0
#define X6_11 PA_1
#define X6_12 PK_1
#define X6_13 PQ_0
#define X6_14 PK_2
#define X6_15 PP_4
#define X6_16 PK_3
#define X6_17 PN_5
#define X6_18 PA_4
#define X6_19 PN_4
#define X6_20 PA_5

#define X7_01 PG_1
//      X7_02 GND
#define X7_03 PK_4
#define X7_3  PK_4
#define X7_04 PM_7
#define X7_4  PM_7
#define X7_05 PK_5
#define X7_5  PK_5
#define X7_06 PP_5
#define X7_6  PP_5
#define X7_07 PM_0
#define X7_7  PM_0
#define X7_08 PA_7
#define X7_8  PA_7
#define X7_09 PM_1
#define X7_9  PM_1
//      X7_10 RESET
#define X7_11 PM_2
#define X7_12 PQ_2
#define X7_13 PH_0
#define X7_14 PQ_3
#define X7_15 PH_1
#define X7_16 PP_3
#define X7_17 PK_6
#define X7_18 PQ_1
#define X7_19 PK_7
#define X7_20 PM_6

//      X8_01 3.3v
//      X8_02 5v
#define X8_03 PE_4
//      X8_04 GND
#define X8_05 PC_4
#define X8_5  PC_4
#define X8_06 PE_0
#define X8_6  PE_0
#define X8_7  PC_5
#define X8_7  PC_5
#define X8_08 PE_1
#define X8_8  PE_1
#define X8_09 PC_6
#define X8_9  PC_6
#define X8_10 PE_2
#define X8_11 PE_5
#define X8_12 PE_3
#define X8_13 PD_3
#define X8_14 PD_7
#define X8_15 PC_7
#define X8_16 PA_6
#define X8_17 PB_2
#define X8_18 PM_4
#define X8_19 PB_3
#define X8_20 PM_5

#define X9_01 PF_1
//      X9_02 GND
#define X9_03 PF_2
#define X9_3  PF_2
#define X9_04 PM_3
#define X9_4  PM_3
#define X9_05 PF_3
#define X9_5  PF_3
#define X9_06 PH_2
#define X9_6  PH_2
#define X9_07 PG_0
#define X9_7  PG_0
#define X9_08 PH_3
#define X9_8  PH_3
#define X9_09 PL_4
#define X9_9  PL_4
//      X9_10 RST
#define X9_11 PL_5
#define X9_12 PD_1
#define X9_13 PL_0
#define X9_14 PD_0
#define X9_15 PL_1
#define X9_16 PN_2
#define X9_17 PL_2
#define X9_18 PN_3
#define X9_19 PL_3
#define X9_20 PP_2

//      X11_01 3.3V
//      X11_02 5.0V
//      X11_03 GND
//      X11_04 GND
#define X11_05 PB_4
#define X11_5  PB_4
#define X11_06 PA_2
#define X11_6  PA_2
#define X11_07 PB_5
#define X11_7  PB_5
#define X11_08 PA_3
#define X11_8  PA_3
#define X11_09 PH_0
#define X11_9  PH_0
#define X11_10 PA_4
#define X11_11 PH_1
#define X11_12 PA_5
#define X11_13 PH_2
#define X11_14 PE_0
#define X11_15 PH_3
#define X11_16 PE_1
#define X11_17 PC_7
#define X11_18 PE_2
#define X11_19 PC_6
#define X11_20 PE_3
#define X11_21 PC_5
#define X11_22 PE_4
#define X11_23 PC_4
#define X11_24 PE_5
#define X11_25 PA_6
#define X11_26 PK_0
#define X11_27 PA_7
#define X11_28 PK_1
#define X11_29 PG_1
#define X11_30 PK_2
#define X11_31 PG_0
#define X11_32 PK_3
#define X11_33 PM_3
//      X11_34 VREF
//      X11_35 GND
//      X11_36 GND
#define X11_37 PM_2
#define X11_38 PD_5
#define X11_39 PM_1
#define X11_40 PD_4
#define X11_41 PM_0
#define X11_42 PD_7
#define X11_43 PL_0
#define X11_44 PD_6
#define X11_45 PL_1
#define X11_46 PD_3
#define X11_47 PL_2
#define X11_48 PD_1
#define X11_49 PL_3
#define X11_50 PD_0
#define X11_51 PQ_0
#define X11_52 PD_2
#define X11_53 PQ_1
#define X11_54 PP_0
#define X11_55 PQ_2
#define X11_56 PP_1
#define X11_57 PQ_3
#define X11_58 PB_0
#define X11_59 PK_7
//      TARGET_VBUS
#define X11_61 GND
#define X11_62 GND
#define X11_63 PK_6
#define X11_64 PF_4
#define X11_65 PL_4
#define X11_66 PF_0
#define X11_67 PB_2
#define X11_68 PF_1
#define X11_69 PB_3
#define X11_70 PF_2
#define X11_71 PP_2
#define X11_72 PF_3
#define X11_73 PP_3
#define X11_74 PA_0
#define X11_75 PK_5
#define X11_76 PA_1
#define X11_77 PK_4
#define X11_78 PP_4
#define X11_79 PL_5
#define X11_80 PP_5
#define X11_81 PN_4
#define X11_82 PJ_0
#define X11_83 PN_5
#define X11_84 PJ_1
#define X11_85 PN_0
#define X11_86 PM_7
#define X11_87 PN_1
#define X11_88 PM_6
#define X11_89 PN_2
#define X11_90 PM_5
#define X11_91 PN_3
#define X11_92 PM_4
#define X11_93 PQ_4
#define X11_99 PQ_40
//      X11_94 TARGET_RESET
//      X11_95 WAKE
//      X11_96 GND
//      X11_97 5.0V
//      X11_98 3.3V

// end connector pin defines

#define portBASERegister(P)       ((volatile uint32_t *) port_to_base[P])
#define portLOCKRegister(P)       ((volatile uint32_t *)( port_to_base[P] + 0x520 ))
#define portCRRegister(P)         ((volatile uint32_t *)( port_to_base[P] + 0x524 ))

#define BV(x) (1 << (x))

#define GPIO_LOCK_KEY_DD        0x4C4F434B 

const uint32_t port_to_base[] = {
    NOT_A_PORT,
    (uint32_t) GPIO_PORTA_BASE, // 1
    (uint32_t) GPIO_PORTB_BASE, // 2
    (uint32_t) GPIO_PORTC_BASE, // 3
    (uint32_t) GPIO_PORTD_BASE, // 4
    (uint32_t) GPIO_PORTE_BASE, // 5
    (uint32_t) GPIO_PORTF_BASE, // 6
    (uint32_t) GPIO_PORTG_BASE, // 7
    (uint32_t) GPIO_PORTH_BASE, // 8
    (uint32_t) GPIO_PORTJ_BASE, // 9
    (uint32_t) GPIO_PORTK_BASE, // 10
    (uint32_t) GPIO_PORTL_BASE, // 11
    (uint32_t) GPIO_PORTM_BASE, // 12
    (uint32_t) GPIO_PORTN_BASE, // 13
    (uint32_t) GPIO_PORTP_BASE, // 14
    (uint32_t) GPIO_PORTQ_BASE, // 15
};

const uint8_t digital_pin_to_port[] = {
	NOT_A_PIN,		// dummy
	PD,				//   1 - PD_0
	PD,				//   2 - PD_1
	PD,				//   3 - PD_2
	PD,				//   4 - PD_3
	PQ,				//   5 - PQ_0
	PQ,				//   6 - PQ_1
	NOT_A_PIN,		//   7 - VDD
	NOT_A_PIN,		//   8 - VDDA
	NOT_A_PIN,		//   9 - VREFA+
	NOT_A_PIN,		//  10 - GND
	PQ,				//  11 - PQ_2
	PE,				//  12 - PE_3
	PE,				//  13 - PE_2
	PE,				//  14 - PE_1
	PE,				//  15 - PE_0
	NOT_A_PIN,		//  16 - VDD
	NOT_A_PIN,		//  17 - GND
	PK,				//  18 - PK_0
	PK,				//  19 - PK_1
	PK,				//  20 - PK_2
	PK,				//  21 - PK_3
	PC,				//  22 - PC_7
	PC,				//  23 - PC_6
	PC,				//  24 - PC_5
	PC,				//  25 - PC_4
	NOT_A_PIN,		//  26 - VDD
	PQ,				//  27 - PQ_3
	NOT_A_PIN,		//  28 - VDD
	PH,				//  29 - PH_0
	PH,				//  30 - PH_1
	PH,				//  31 - PH_2
	PH,				//  32 - PH_3
	PA,				//  33 - PA_0
	PA,				//  34 - PA_1
	PA,				//  35 - PA_2
	PA,				//  36 - PA_3
	PA,				//  37 - PA_4
	PA,				//  38 - PA_5
	NOT_A_PIN,		//  39 - VDD
	PA,				//  40 - PA_6
	PA,				//  41 - PA_7
	PF,				//  42 - PF_0
	PF,				//  43 - PF_1
	PF,				//  44 - PF_2
	PF,				//  45 - PF_3
	PF,				//  46 - PF_4
	NOT_A_PIN,		//  47 - VDD
	NOT_A_PIN,		//  48 - GND
	PG,				//  49 - PG_0
	PG,				//  50 - PG_1
	NOT_A_PIN,		//  51 - VDD
	NOT_A_PIN,		//  52 - VDD
	NOT_A_PIN,		//  53 - EN0RXIN
	NOT_A_PIN,		//  54 - EN0RXIP
	NOT_A_PIN,		//  55 - GND
	NOT_A_PIN,		//  56 - EN0TXON
	NOT_A_PIN,		//  57 - EN0TXOP
	NOT_A_PIN,		//  58 - GND
	NOT_A_PIN,		//  59 - RBIAS
	PK,				//  60 - PK_7
	PK,				//  61 - PK_6
	PK,				//  62 - PK_5
	PK,				//  63 - PK_4
	NOT_A_PIN,		//  64 - nWAKE
	NOT_A_PIN,		//  65 - nHIB
	NOT_A_PIN,		//  66 - XOSC0
	NOT_A_PIN,		//  67 - XOSC1
	NOT_A_PIN,		//  68 - VBAT
	NOT_A_PIN,		//  69 - VDD
	NOT_A_PIN,		//  70 - nRST
	PM,				//  71 - PM_7
	PM,				//  72 - PM_6
	PM,             //  73 - PM_5
	PM,				//  74 - PM_4
	PM,				//  75 - PM_3
	PM,				//  76 - PM_2
	PM,				//  77 - PM_1
	PM,				//  78 - PM_0
	NOT_A_PIN,		//  79 - VDD
	NOT_A_PIN,		//  80 - GND
	PL,				//  81 - PL_0
	PL,				//  82 - PL_1
	PL,				//  83 - PL_2
	PL,				//  84 - PL_3
	PL,				//  85 - PL_4
	PL,				//  86 - PL_5
	NOT_A_PIN,		//  87 - VDDC
	NOT_A_PIN,		//  88 - OSC0
	NOT_A_PIN,		//  89 - OSC1
	NOT_A_PIN,		//  90 - VDD
	PB,				//  91 - PB_2
	PB,				//  92 - PB_3
	PL,				//  93 - PL_7
	PL,				//  94 - PL_6
	PB,				//  95 - PB_0
	PB,				//  96 - PB_1
	PC,				//  97 - PC_3
	PC,				//  98 - PC_2
	PC,				//  99 - PC_1
	PC,				// 100 - PC_0
	NOT_A_PIN,		// 101 - VDD
	PQ,				// 102 - PQ_4
	PP,				// 103 - PP_2
	PP,				// 104 - PP_3
	PP,				// 105 - PP_4
	PP,				// 106 - PP_5
	PN,				// 107 - PN_0
	PN,				// 108 - PN_1
	PN,				// 109 - PN_2
	PN,				// 110 - PN_3
	PN,				// 111 - PN_4
	PN,				// 112 - PN_5
	NOT_A_PIN,		// 113 - VDD
	NOT_A_PIN,		// 114 - GND
	NOT_A_PIN,		// 115 - VDDC
	PJ,				// 116 - PJ_0
	PJ,				// 117 - PJ_1
	PP,				// 118 - PP_0
	PP,				// 119 - PP_1
	PB,				// 120 - PB_5
	PB,				// 121 - PB_4
	NOT_A_PIN,		// 122 - VDD
	PE,				// 123 - PE_4
	PE,				// 124 - PE_5
	PD,				// 125 - PD_4
	PD,				// 126 - PD_5
	PD,				// 127 - PD_6
	PD,				// 128 - PD_7
}

const uint8_t digital_pin_to_bit_mask[] = {
	NOT_A_PIN,		// dummy
	BV(0),			//   1 - PD_0
	BV(1),			//   2 - PD_1
	BV(2),			//   3 - PD_2
	BV(3),			//   4 - PD_3
	BV(0),			//   5 - PQ_0
	BV(1),			//   6 - PQ_1
	NOT_A_PIN,		//   7 - VDD
	NOT_A_PIN,		//   8 - VDDA
	NOT_A_PIN,		//   9 - VREFA+
	NOT_A_PIN,		//  10 - GND
	BV(2),			//  11 - PQ_2
	BV(3),			//  12 - PE_3
	BV(2),			//  13 - PE_2
	BV(1),			//  14 - PE_1
	BV(0),			//  15 - PE_0
	NOT_A_PIN,		//  16 - VDD
	NOT_A_PIN,		//  17 - GND
	BV(0),			//  18 - PK_0
	BV(1),			//  19 - PK_1
	BV(2),			//  20 - PK_2
	BV(3),			//  21 - PK_3
	BV(7),			//  22 - PC_7
	BV(6),			//  23 - PC_6
	BV(5),			//  24 - PC_5
	BV(4),			//  25 - PC_4
	NOT_A_PIN,		//  26 - VDD
	BV(3),			//  27 - PQ_3
	NOT_A_PIN,		//  28 - VDD
	BV(0),			//  29 - PH_0
	BV(1),			//  30 - PH_1
	BV(2),			//  31 - PH_2
	BV(3),			//  32 - PH_3
	BV(0),			//  33 - PA_0
	BV(1),			//  34 - PA_1
	BV(2),			//  35 - PA_2
	BV(3),			//  36 - PA_3
	BV(4),			//  37 - PA_4
	BV(5),			//  38 - PA_5
	NOT_A_PIN,		//  39 - VDD
	BV(6),			//  40 - PA_6
	BV(7),			//  41 - PA_7
	BV(0),			//  42 - PF_0
	BV(1),			//  43 - PF_1
	BV(2),			//  44 - PF_2
	BV(3),			//  45 - PF_3
	BV(4),			//  46 - PF_4
	NOT_A_PIN,		//  47 - VDD
	NOT_A_PIN,		//  48 - GND
	BV(0),			//  49 - PG_0
	BV(1),			//  50 - PG_1
	NOT_A_PIN,		//  51 - VDD
	NOT_A_PIN,		//  52 - VDD
	NOT_A_PIN,		//  53 - EN0RXIN
	NOT_A_PIN,		//  54 - EN0RXIP
	NOT_A_PIN,		//  55 - GND
	NOT_A_PIN,		//  56 - EN0TXON
	NOT_A_PIN,		//  57 - EN0TXOP
	NOT_A_PIN,		//  58 - GND
	NOT_A_PIN,		//  59 - RBIAS
	BV(7),			//  60 - PK_7
	BV(6),			//  61 - PK_6
	BV(5),			//  62 - PK_5
	BV(4),			//  63 - PK_4
	NOT_A_PIN,		//  64 - nWAKE
	NOT_A_PIN,		//  65 - nHIB
	NOT_A_PIN,		//  66 - XOSC0
	NOT_A_PIN,		//  67 - XOSC1
	NOT_A_PIN,		//  68 - VBAT
	NOT_A_PIN,		//  69 - VDD
	NOT_A_PIN,		//  70 - nRST
	BV(7),			//  71 - PM_7
	BV(6),			//  72 - PM_6
	BV(5),          //  73 - PM_5
	BV(4),			//  74 - PM_4
	BV(3),			//  75 - PM_3
	BV(2),			//  76 - PM_2
	BV(1),			//  77 - PM_1
	BV(0),			//  78 - PM_0
	NOT_A_PIN,		//  79 - VDD
	NOT_A_PIN,		//  80 - GND
	BV(0),			//  81 - PL_0
	BV(1),			//  82 - PL_1
	BV(2),			//  83 - PL_2
	BV(3),			//  84 - PL_3
	BV(4),			//  85 - PL_4
	BV(5),			//  86 - PL_5
	NOT_A_PIN,		//  87 - VDDC
	NOT_A_PIN,		//  88 - OSC0
	NOT_A_PIN,		//  89 - OSC1
	NOT_A_PIN,		//  90 - VDD
	BV(2),			//  91 - PB_2
	BV(3),			//  92 - PB_3
	BV(7),			//  93 - PL_7
	BV(6),			//  94 - PL_6
	BV(0),			//  95 - PB_0
	BV(1),			//  96 - PB_1
	BV(3),			//  97 - PC_3
	BV(2),			//  98 - PC_2
	BV(1),			//  99 - PC_1
	BV(0),			// 100 - PC_0
	NOT_A_PIN,		// 101 - VDD
	BV(4),			// 102 - PQ_4
	BV(2),			// 103 - PP_2
	BV(3),			// 104 - PP_3
	BV(4),			// 105 - PP_4
	BV(5),			// 106 - PP_5
	BV(0),			// 107 - PN_0
	BV(1),			// 108 - PN_1
	BV(2),			// 109 - PN_2
	BV(3),			// 110 - PN_3
	BV(4),			// 111 - PN_4
	BV(5),			// 112 - PN_5
	NOT_A_PIN,		// 113 - VDD
	NOT_A_PIN,		// 114 - GND
	NOT_A_PIN,		// 115 - VDDC
	BV(0),			// 116 - PJ_0
	BV(1),			// 117 - PJ_1
	BV(0),			// 118 - PP_0
	BV(1),			// 119 - PP_1
	BV(5),			// 120 - PB_5
	BV(4),			// 121 - PB_4
	NOT_A_PIN,		// 122 - VDD
	BV(4),			// 123 - PE_4
	BV(5),			// 124 - PE_5
	BV(4),			// 125 - PD_4
	BV(5),			// 126 - PD_5
	BV(6),			// 127 - PD_6
	BV(7),			// 128 - PD_7
}

/*
const uint32_t digital_pin_to_analog_in[] = {
    ADC_CTL_TS,     // 00 - Temperature Sensor 
    NOT_ON_ADC,     // 01 - 3.3v       X8_01
    ADC_CTL_CH9,    // 02 - PE_4       X8_03
    NOT_ON_ADC,     // 03 - PC_4       X8_05
    NOT_ON_ADC,     // 04 - PC_5       X8_07
    NOT_ON_ADC,     // 05 - PC_6       X8_09
    ADC_CTL_CH8,    // 06 - PE_5       X8_11
    ADC_CTL_CH12,   // 07 - PD_3       X8_13
    NOT_ON_ADC,     // 08 - PC_7       X8_15
    NOT_ON_ADC,     // 09 - PB_2       X8_17
    NOT_ON_ADC,     // 10 - PB_3       X8_19
    NOT_ON_ADC,     // 11 - PP_2       X9_20
    NOT_ON_ADC,     // 12 - PN_3       X9_18
    NOT_ON_ADC,     // 13 - PN_2       X9_16
    ADC_CTL_CH15,   // 14 - PD_0       X9_14
    ADC_CTL_CH14,   // 15 - PD_1       X9_12
    NOT_ON_ADC,     // 16 - RST        X9_10
    NOT_ON_ADC,     // 17 - PH_3       X9_08
    NOT_ON_ADC,     // 18 - PH_2       X9_06
    NOT_ON_ADC,     // 19 - PM_3       X9_04
    NOT_ON_ADC,     // 20 - GND        X9_02
    NOT_ON_ADC,     // 21 - 5v         X8_02
    NOT_ON_ADC,     // 22 - GND        X8_04
    ADC_CTL_CH3,    // 23 - PE_0       X8_06
    ADC_CTL_CH2,    // 24 - PE_1       X8_08
    ADC_CTL_CH1,    // 25 - PE_2       X8_10
    ADC_CTL_CH0,    // 26 - PE_3       X8_12
    ADC_CTL_CH4,    // 27 - PD_7       X8_14
    NOT_ON_ADC,     // 28 - PA_6       X8_16
    NOT_ON_ADC,     // 29 - PM_4       X8_18
    NOT_ON_ADC,     // 30 - PM_5       X8_20
    NOT_ON_ADC,     // 31 - PL_3       X9_19
    NOT_ON_ADC,     // 32 - PL_2       X9_17
    NOT_ON_ADC,     // 33 - PL_1       X9_15
    NOT_ON_ADC,     // 34 - PL_0       X9_13
    NOT_ON_ADC,     // 35 - PL_5       X9_11
    NOT_ON_ADC,     // 36 - PL_4       X9_09
    NOT_ON_ADC,     // 37 - PG_0       X9_07
    NOT_ON_ADC,     // 38 - PF_3       X9_05
    NOT_ON_ADC,     // 39 - PF_2       X9_03
    NOT_ON_ADC,     // 40 - PF_1       X9_01
    NOT_ON_ADC,     // 41 - 3.3v       X6_01
    ADC_CTL_CH13,   // 42 - PD_2       X6_03
    NOT_ON_ADC,     // 43 - PP_0       X6_05
    NOT_ON_ADC,     // 44 - PP_1       X6_07
    ADC_CTL_CH7,    // 45 - PD_4       X6_09
    ADC_CTL_CH6,    // 46 - PD_5       X6_11
    NOT_ON_ADC,     // 47 - PQ_0       X6_13
    NOT_ON_ADC,     // 48 - PP_4       X6_15
    NOT_ON_ADC,     // 49 - PN_5       X6_17
    NOT_ON_ADC,     // 50 - PN_4       X6_19
    NOT_ON_ADC,     // 51 - PM_6       X7_20
    NOT_ON_ADC,     // 52 - PQ_1       X7_18
    NOT_ON_ADC,     // 53 - PP_3       X7_16
    NOT_ON_ADC,     // 54 - PQ_3       X7_14
    NOT_ON_ADC,     // 55 - PQ_2       X7_12
    NOT_ON_ADC,     // 56 - RESET      X7_10
    NOT_ON_ADC,     // 57 - PA_7       X7_08
    NOT_ON_ADC,     // 58 - PP_5       X7_06
    NOT_ON_ADC,     // 59 - PM_7       X7_04
    NOT_ON_ADC,     // 60 - GND        X7_02
    NOT_ON_ADC,     // 61 - 5v         X6_02
    NOT_ON_ADC,     // 62 - GND        X6_04
    ADC_CTL_CH10,   // 63 - PB_4       X6_06
    ADC_CTL_CH11,   // 64 - PB_5       X6_08
    ADC_CTL_CH16,   // 65 - PK_0       X6_10
    ADC_CTL_CH17,   // 66 - PK_1       X6_12
    ADC_CTL_CH18,   // 67 - PK_2       X6_14
    ADC_CTL_CH19,   // 68 - PK_3       X6_16
    NOT_ON_ADC,     // 69 - PA_4       X6_18
    NOT_ON_ADC,     // 70 - PA_5       X6_20
    NOT_ON_ADC,     // 71 - PK_7       X7_19
    NOT_ON_ADC,     // 72 - PK_6       X7_17
    NOT_ON_ADC,     // 73 - PH_1       X7_15
    NOT_ON_ADC,     // 74 - PH_0       X7_13
    NOT_ON_ADC,     // 75 - PM_2       X7_11
    NOT_ON_ADC,     // 76 - PM_1       X7_09
    NOT_ON_ADC,     // 77 - PM_0       X7_07
    NOT_ON_ADC,     // 78 - PK_5       X7_05
    NOT_ON_ADC,     // 79 - PK_4       X7_03
    NOT_ON_ADC,     // 80 - PG_1       X7_01
    NOT_ON_ADC,     // 81 - PN_1       LED1
    NOT_ON_ADC,     // 82 - PN_0       LED2
    NOT_ON_ADC,     // 83 - PF_4       LED3
    NOT_ON_ADC,     // 84 - PF_0       LED4
    NOT_ON_ADC,     // 85 - PJ_0       USR_SW1
    NOT_ON_ADC,     // 86 - PJ_1       USR_SW2
    ADC_CTL_CH5,    // 87 - PD_6       AIN5
    NOT_ON_ADC,     // 88 - PA_0       JP4
    NOT_ON_ADC,     // 89 - PA_1       JP5
    NOT_ON_ADC,     // 90 - PA_2       X11_06
    NOT_ON_ADC,     // 91 - PA_3       X11_08
    NOT_ON_ADC,     // 92 - PL_6       unrouted
    NOT_ON_ADC,     // 93 - PL_7       unrouted
    NOT_ON_ADC,     // 94 - PB_0       X11_58
    NOT_ON_ADC,     // 95 - PB_1       unrouted
};
*/
