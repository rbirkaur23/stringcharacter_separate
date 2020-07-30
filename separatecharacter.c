#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  char a[80];
  clrscr();
  printf("Enter string: ");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    printf("%c\n",a[i]);
  }
  getch();
}
