#include <stdio.h>
#include <string.h>
void swap_val(int x, int y);
void swap_addr(int *x, int *y);

main()
{
int a=7;
int b=11;
swap_val(a,b);
printf("%d %d \n", a,b);


swap_addr(&a,&b);
printf("%d %d \n", a,b);
} 

void swap_val(int x, int y) 
{ int temp;
  temp=x;
  x=y;
  y=temp;
}

void swap_addr(int *x, int *y)
{ int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

