#include <stdio.h>
#include <string.h>
main()
{
float arr[3];
int i;

for (i=0; i<3 ; i++){
  printf("arr[%d]: %u \t", i, &arr[i]);
}
printf("\n");

}
