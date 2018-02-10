#include <stdio.h>
#include <string.h>
int sum( int n);

main()
{
int n;
int result; 
printf("input n:  \t");
scanf("%d", &n);
result= sum(n);
printf("1-%d sum %d \n", n,result );
} 

int sum (int n)
{ if (n==1)
  return 1;
 else 
  return n*(n+1)/2;
}

