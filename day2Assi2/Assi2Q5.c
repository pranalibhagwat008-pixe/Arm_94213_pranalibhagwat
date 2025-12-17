#include <stdio.h>
#include <stdint.h>
#define BV(n)(1<<(n))
int binary (int num);
int main ()
{
	uint8_t reg = 0xAA; 
	uint8_t p = 0xAA;
	printf("binary no :");
	binary(reg);
  uint8_t value = (reg >> 2) & 0x02;
	printf("\nRead the value of bits from bit 2 to bit 4 ") ;
	binary(value);
	 uint8_t value1= p & (BV(2)|BV(3)| ~BV(4));
	 value1|=BV(2);
	 printf("\nWrite the value 0b011 into bits 2 to 4 without changing other bits ") ;
	binary(value1);
	
}
int binary (int num)
{
	int i,bin;
	for (i=7;i>=0 ;i--)
	{
		bin = (num>>i)&1;
		printf("%d",bin);
	}
	
}
