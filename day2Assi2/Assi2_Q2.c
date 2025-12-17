#include <stdio.h>
#include <stdint.h>
#define BV(n)(1<<(n))
 int main (){
 
  uint8_t reg = 0x08;

	if (reg| BV(3))
	{
		printf("\nbit is set.\n");
		 
	}
	else 
	printf ("bit is not set");
}
