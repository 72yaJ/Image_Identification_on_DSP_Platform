/****************************************************************************/
/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *  ============================================================================
 */
 
/*  ============================================================================
 *  lnk.cmd   v5.00                                                         
 *         
 *    Usage:  lnk6x <obj files...>    -o <out file> -m <map file> lnk.cmd   
 *            cl6x  <src files...> -z -o <out file> -m <map file> lnk.cmd   
 *                                                                          
 *    Description: This file is a sample linker command file that can be    
 *                 used for linking programs built with the C compiler and  
 *                 running the resulting .out file on a C620x/C670x         
 *                 simulator.  Use it as a guideline.  You will want to     
 *                 change the memory layout to match your specific C6xxx    
 *                 target system.  You may want to change the allocation    
 *                 scheme according to the size of your program.            
 *                                                                          
 *    Notes: (1)   You must specivy a directory in which rts6x00.lib is     
 *                 located.  either add a -i"<directory>" line to this      
 *                 file or use the system environment variable C_DIR to     
 *                 specify a search path for the libraries.                 
 *                                                                          
 *           (2)   If the run-time library you are using is not named       
 *                 rts6200[e].lib, rts6400[e].lib, or rts6700[e].lib, be    
 *                 sure to use the correct name here.                       
 *                                                                          
 *  ============================================================================
 */


-c
-heap  0x00008000
-stack 0x00008000


/* Memory Map 1 - the default */
MEMORY
{
        VECS:      o = 0x00f00000   l = 0x00008000 
        BOOT:      o = 0x00e00000   l = 0x00008000  
		IRAM:      o = 0x00800000   l = 0x00500000   /* Æ¬ÄÚ¼Ä´æÆ÷ */
		DDR2:      o = 0xe0100000   l = 0x00500000   /* Æ¬Íâ¼Ä´æÆ÷ */

} 

SECTIONS
{
    .csl_vect   >       IRAM/* IRAM */
    .text       >       IRAM/* IRAM */
    .stack      >       IRAM/* IRAM */
    .bss        >       IRAM/* IRAM */
    .cinit      >       IRAM/* IRAM */
    .cio        >       IRAM/* IRAM */
    .const      >       IRAM/* IRAM */
    .data       >       IRAM/* IRAM */

    .switch     >       IRAM/* IRAM */
    .sysmem     >       IRAM/* IRAM */
    .far        >       DDR2/* DDR2 */
    .testMem    >       IRAM/* IRAM */ 
    .ISRAM	    >   	IRAM/* IRAM */
}
