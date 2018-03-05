#include<stdio.h> 
int main()
{
 int num,rem,odd=0,digit,input;
 printf("  Enter an integer number: ");
 scanf("%d",&num);
 input = num;
//num = abs(num);
while(num>0)
{
digit = num % 10;
  num = num / 10;
 rem = digit % 2;
  if(rem != 0)
  
odd=odd+digit;
}
printf("\n  The sum of Odd digits present in %d is %d.",input,odd);
if(odd%2==0)
{
	printf("E");
}
else
{
	printf("O");
}

  return 0; 
} 
