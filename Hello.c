#include<stdio.h>
#include<string.h>

void main()
{
  char name[100];
  printf("What's your name? ");
  gets(name);
  printf("Hello %s\n", name);
}
