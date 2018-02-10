#include <stdio.h>
#include <string.h>
int pibo( int n);

main()
{
int n;
int result; 
printf("input n:  \t");
scanf("%d", &n);
result= pibo(n);
printf("pibo %d value %d \n", n,result );
} 

int pibo (int n)
{ if (n==1 || n==2)
  return 1;
 else 
  return pibo(n-1)+ pibo(n-2);
}

