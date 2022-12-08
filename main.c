#include <stdio.h>
#include<string.h>
int main()
{
  char name[20];
  char surname[30];
  int len , ch;
  int cmp;
  do
  {

  
  printf("Enter your choice.\n 1. Length\n 2. Copy\n 3. compare\n 4. concatenate\n press 5 to exit ");
  scanf("%d",&ch);
    switch(ch)
      {
        case 1:
      printf("enter string 1:");
      scanf("%s", name);
      printf("enter string 2:");
      scanf("%s", surname);
      len= strlen(name);
      printf("length is: %s", len);
      break;

    case 2:
      printf("enter string 1:");
      scanf("%s", name);
      printf("enter string 2:");
      scanf("%s", surname);
      strcpy(name,surname);
      printf("\nstring after copying is: %s ",name);
      break;

    case 3:
      printf("enter string 1:");
      scanf("%s", name);
      printf("enter string 2:");
      scanf("%s", surname);
      cmp=strcmp(name,surname);
      printf("%d", cmp);
      break;

    case 4:
      printf("enter string 1:");
      scanf("%s", name);
      printf("enter string 2:");
      scanf("%s", surname);
      strcat(surname,name);
      printf("string 2: %s", surname);
      break;

    case 5:
      exit(0);
      break;
      default : printf("wrong choice. Enter between 1 and 4.");
        

      
    }
    }
while (ch!=0);
    
  
  return 0;
  }
