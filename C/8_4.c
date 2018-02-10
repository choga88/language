#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
int ch;
while ((ch=getchar()) !=EOF) {
if(islower(ch))
ch=toupper(ch);
else if (isupper(ch))
ch=tolower(ch);
putchar(ch);
}
putchar('\n');
}

