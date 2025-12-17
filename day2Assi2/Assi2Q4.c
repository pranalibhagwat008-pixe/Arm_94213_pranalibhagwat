#include <stdio.h>
#include <stdint.h>
int binary(int num);
int main ()
{
	uint8_t value = 5;
	binary(value);
	 uint8_t right;
	   uint8_t left;
	 right =value >> 1;
	 printf("\nRight shift the original value by 1 position\n");
	 binary(right);
	 left  =value << 2;
	 printf("\nleft shift the original value by 2 position\n");
	 binary(left );
	 
	 
	
	
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
