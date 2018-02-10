#include <stdio.h>
main()
{
printf("a: %d\n", 'a');
printf("A: %d\n", 'A');
printf("c: %d\n", 'c');
printf("C: %d\n", 'C');
printf("C: %c\n", 'C'-'A'+'a');
printf("C: %d\n", 'C'-'A'+'a');
}

