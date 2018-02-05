#include <stdio.h>
#include "tistdtypes.h"


#define PLL1_BASE_ADDR (0x029A0000)

#define PLL1_PLLCTL    (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000100))
#define PLL1_PLLM      (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000110)) 
#define PLL1_PREDIV    (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000114))
#define PLL1_PLLDIV3   (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000120))
#define PLL1_PLLCMD    (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000138))
#define PLL1_PLLSTAT   (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x0000013C))
#define PLL1_ALNCTL    (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000140))
#define PLL1_DCHANGE   (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000144))
#define PLL1_SYSTAT    (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000150))
#define PLL1_PLLDIV4   (*(volatile Uint32*)(PLL1_BASE_ADDR + 0x00000160))

#define PLL2_BASE_ADDR (0x029C0000)

#define PLL2_PLLCTL    (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000100)) // PLL2 control register
#define PLL2_PLLM      (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000110)) // PLL2 multiplier control register 
#define PLL2_PREDIV    (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000114)) // PLL2 pre-divider control register
#define PLL2_PLLDIV1   (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000118)) // PLL2 controller divider 1 register
#define PLL2_PLLCMD    (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000138)) // PLL2 controller command register
#define PLL2_PLLSTAT   (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x0000013C)) // PLL2 controller status register
#define PLL2_DCHANGE   (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000144)) // PLL2 PLLDIV ratio change status register
#define PLL2_SYSTAT    (*(volatile Uint32*)(PLL2_BASE_ADDR + 0x00000150)) // PLL2 SYSCLK status register


#define EMIFA_BASE_ADDR (0x70000000)

#define EMIFA_MIDR     (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000000))
#define EMIFA_STAT     (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000004))
#define EMIFA_BPRIO    (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000020))
#define EMIFA_CE2CFG   (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000080))
#define EMIFA_CE3CFG   (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000084))
#define EMIFA_CE4CFG   (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x00000088))
#define EMIFA_CE5CFG   (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x0000008C))
#define EMIFA_AWCC     (*(volatile Uint32*)(EMIFA_BASE_ADDR + 0x000000A0))

#define DDR_BASE_ADDR (0x78000000)

#define DDR_MIDR     (*(volatile Uint32*)(DDR_BASE_ADDR + 0x00000000))
#define DDR_SDCFG    (*(volatile Uint32*)(DDR_BASE_ADDR + 0x00000008))
#define DDR_SDRFC    (*(volatile Uint32*)(DDR_BASE_ADDR + 0x0000000C))
#define DDR_SDTIM1   (*(volatile Uint32*)(DDR_BASE_ADDR + 0x00000010))
#define DDR_SDRIM2   (*(volatile Uint32*)(DDR_BASE_ADDR + 0x00000014))
#define DDR_DDRPHYC  (*(volatile Uint32*)(DDR_BASE_ADDR + 0x000000E4))

/* Initialize the board */
void C6455_init();


Uint32 PLL1_Init (Uint32 multi_val);
/*--------------------------------------------------------------*/
/* Himalaya_PLL2_Init()                                             */
/* Clock setup for the RGMII interface                          */
/*--------------------------------------------------------------*/

Uint32 PLL2_Init ();

/* Spin in a delay loop for delay iterations */
void C6455_wait(Uint32 delay);

/* Spin in a delay loop for delay microseconds */
void C6455_waitusec(Uint32 delay);


