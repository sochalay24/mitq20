#include <stdio.h>
#include<string.h>
int main()
{
  char name[20], name2[30];
  int len;
  int cmp;
  
  printf("enter string 1: ");
  scanf("%s",name);
  printf("enter string 2:");
  scanf("%s", name2);
  

  len= strlen(name);
  
  printf("\nstring length is: %d", len);
  strcpy(name,name2);
  
  printf("\nstring 1 is : %s", name);
  printf("\nstring 2 is: %s ", name2);

  strcat(name2,name);
  printf("string 2: %s", name2);

  strcmp(name, name2);
  printf("\nstring 3: %s", name2);

  cmp= strcmp(name,name2);
  printf("%d", cmp);

  
  return 0;
}