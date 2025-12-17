#include <stdio.h>
#include <stdint.h>

int main ()
{
	int p,q;
	uint16_t reg = 0xABCD;
 p=	reg &0x000f;
	printf(" mask bit : %X",p);
 reg = reg>>4;
	q=reg &0x000f;
		printf(" mask bit : %X",q);

}
