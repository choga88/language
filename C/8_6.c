#include <stdio.h>
#include <string.h>

main()
{
char buf[20];
int line = 1;
while (1) {
printf("input string==> ");
scanf("%s", buf);
if (! strcmp(buf,"quit"))
break;
printf("%2d: %s\n", line++, buf);
}




}

