 #include <stdio.h>
  int main ()
  {
  	int num;
  	int count =0;
  	printf(" Enter a number :");
  	scanf ("%d",&num);
  	while (num>0)
  	{
  		if (num%2==1)
  		{
  			count++;
		  }
		  	  num =num/2;

	  }
   	
  
  printf("number of 1 bits = %d \n",count );
  return 0;
}
