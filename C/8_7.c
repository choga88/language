#include <stdio.h>
#include <string.h>
#define MAX 20 

main()
{
char buf1[20];
char buf2[20];
strcpy(buf1, "Linux");
printf("%s:\n", buf1);


strcpy(buf2, "Programming");
printf("%s:\n", buf2);

strcpy(buf2, buf1);
printf("%s:\n", buf2);

}

