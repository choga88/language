#include <stdio.h>
#include <string.h>

main()
{
char str[]="Hello Linux C Programming";
char *ptr;
char delim[]="";
ptr = strtok(str,delim);
printf("%s\n",ptr);
while (ptr=strtok(NULL,delim))
printf("%s\n", ptr);

}

