#include <stdio.h>
#include <string.h>

main()
{
char buf1[20]="Linux";
char buf2[20]="Linux";

strcat(buf1,"Programminig");
strncat(buf2,"Programminig",5);

printf("%s\n%s\n", buf1, buf2);





}

