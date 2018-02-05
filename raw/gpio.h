


#define BINTEN_ADDR 		0x02B00008
#define DIR_ADDR 			0x02B00010
#define OUT_DATA_ADDR 		0x02B00014
#define SET_DATA_ADDR 		0x02B00018
#define CLR_DATA_ADDR 		0x02B0001C
#define IN_DATA_ADDR  		0x02B00020
#define SET_RIS_TRIG_ADDR 	0x02B00024
#define CLR_RIS_TRIG_ADDR 	0x02B00028
#define SET_FAL_TRIG_ADDR 	0x02B0002C
#define CLR_FAL_TRIG_ADDR 	0x02B00030

#define BINTEN 				(*(volatile unsigned int*)BINTEN_ADDR)
#define DIR 				(*(volatile unsigned int*)DIR_ADDR)
#define OUT_DATA 			(*(volatile unsigned int*)OUT_DATA_ADDR)
#define SET_DATA 			(*(volatile unsigned int*)SET_DATA_ADDR)
#define CLR_DATA 			(*(volatile unsigned int*)CLR_DATA_ADDR)
#define IN_DATA 			(*(volatile unsigned int*)IN_DATA_ADDR)
#define SET_RIS_TRIG 		(*(volatile unsigned int*)SET_RIS_TRIG_ADDR)
#define CLR_RIS_TRIG 		(*(volatile unsigned int*)CLR_RIS_TRIG_ADDR)
#define SET_FAL_TRIG 		(*(volatile unsigned int*)SET_FAL_TRIG_ADDR)
#define CLR_FAL_TRIG 		(*(volatile unsigned int*)CLR_FAL_TRIG_ADDR)


#define GPIO4_INT_VAL    4
#define GPIO4_INT_FLAG   (1<<GPIO4_INT_VAL)

#define GPIO5_INT_VAL    5
#define GPIO5_INT_FLAG   (1<<GPIO5_INT_VAL)

#define GPIO6_INT_VAL    6
#define GPIO6_INT_FLAG   (1<<GPIO6_INT_VAL)

#define GPIO7_INT_VAL    7
#define GPIO7_INT_FLAG   (1<<GPIO7_INT_VAL)


#define C6455_EMIFA_BASE          			0xA0000000  // CE2
#define C6455_EMIFA_FIFO_RD_ADDR          	0xA03C0000

#define EMIFA_TEST    	(*(volatile Uint8*)(C6455_EMIFA_BASE + 0x01))
#define EMIFA_RESET    	(*(volatile Uint8*)(C6455_EMIFA_BASE + 0x3C))
#define EMIFA_FIFOCNT    	(*(volatile Uint8*)(C6455_EMIFA_BASE + 0x38))


void int_Init(void);
void GPIO_init(void);


