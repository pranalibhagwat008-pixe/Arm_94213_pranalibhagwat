#include <stdio.h>
void displayBinary (int num)
{
	 int binary [32];
	  int i=0;
	  int j;
	  while (num>0)
	  {
	  	binary [i]=num%2 ;
	  	num =num/2;
	  	i++;
	  }
	   printf (" Binary form :");
	    for(j= i-1 ;j>=0;j--)
	    {
	    	printf ("%d", binary[j]);
		}
}
int main ()
 {
 	int number ;
 	 printf (" Enter  a number :");
 	 scanf ("%d",&number);
 	 displayBinary(number);
 	 return 0;
 }
