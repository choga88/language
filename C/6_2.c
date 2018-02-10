#include <stdio.h>
#include <string.h>
int pibo( int n);

main()
{
struct list {
int data;
struct list *next;
};


struct list first,second,third;
first.data=1;
second.data=2;
third.data=3;

first.next=&second;
second.next=&third;

printf("%d %d %d \n", first.data, first.next->data, first.next->next->data);

}

