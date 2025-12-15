#include <stdio.h>

int countSetBits(int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)   // check last bit
        {
            count++;
        }
        num = num / 2;     // remove last bit
    }

    return count;
}

int main()
{
    int num;
  	int count =0;
  	printf(" Enter a number :");
  	scanf ("%d",&num);

    printf("Number: %d\n", num);
    printf("Number of 1 bits: %d\n", countSetBits(num));

    return 0;
}

