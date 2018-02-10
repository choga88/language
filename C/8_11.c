#include <stdio.h>
#include <string.h>
#define MAX 20 

main()
{
char *str="ABCDEFGH";
char *ptr;

ptr = strchr(str,'E');
printf("%s\n", ptr);

}

