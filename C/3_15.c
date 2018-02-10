#include <stdio.h>
#include <string.h>
main()
{
char ch;
printf("input character ==>");
/* ch=getchar(); */
scanf("%c", &ch);
printf("%c\n", ch);

if ((ch>='a'&&ch<='z') || (ch >='A'&& ch <='Z'))
   printf("alpabet\n");
else if (ch >='0' && ch <='9')
   printf("nuber\n");
else 
   printf("others\n");


}
