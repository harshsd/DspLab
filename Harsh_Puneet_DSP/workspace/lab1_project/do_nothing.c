/*
 *  A "Do nothing file"
 */
#include "stdio.h"
#include "usbstk5515.h"
#include "usbstk5515_gpio.h"
#include "usbstk5515_i2c.h"

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  main( )                                                                 *
 *                                                                          *
 * ------------------------------------------------------------------------ */
main( void )
{   
	int i,j,k;
	USBSTK5515_init( );
	j=0;
    while(1)
    {    
    	j=0;
    	for(j=0;j<100;j++)
    	{	
			k = j+1;
    	}
    	i=0;
    	j=0;k=0;
    }
}
