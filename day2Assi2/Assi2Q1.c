#include <stdio.h>
#include <stdint.h>
#define BV(n)(1<<(n))
int binary(int num);

int main ()
{
 uint8_t reg = 0x2A;
 uint8_t p = 0x2A;
 printf("binary no of 0x2A:");
 binary(reg);
  printf("\nhexnumber no  :%x\n",reg);

	if (reg| BV(4))
	{
		printf("\nbit is set :%d\n",reg|BV(4));
		 printf("\nhexnumber no  :%X\n",reg|BV(4));
	}
	else 
	printf ("bit is not set");

	printf("binary no of set bit :");
       binary(reg);
       
printf("\nbefore clear :%d",reg);
 printf("\nhexnumber no  :%x\n",reg);
if (reg&=~BV(1))
	{
		printf("\nbit is clear :%d\n",reg&=~BV(1));
	}
	else 
	printf ("bit is not clear");

	printf("binary no of clear bit :");
       binary(reg);
       printf("\nhexnumber no  :%x\n",reg&=~BV(1));
       
       
printf("\nbefore toggle :%d",p);
 printf("\nhexnumber no  :%x\n",p);
if (p^=BV(5))
	{
		printf("\nbit is toggle :%d\n",p^=BV(5));
	}
	else 
	printf ("bit is not toggle");

	printf("binary no of toggle bit :");
       binary(p);
        printf("\nhexnumber no  :%X\n",p^=BV(5));



}

int binary(int num)
{
	int i,bin;
	for (i=7;i>=0;i--)
	{
		bin =(num>>i)&1;
		printf("%d",bin);
	}

}


