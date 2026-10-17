#include<conio.h>
 void main() 
{
  int dno;
  printf("n enter day no:");
  scanf("%d",&dno);
  switch(dno)
  {
     case 1:
       printf("\n Monday");
       break;
     case 2:
        printf("\n Tuesday");
     break;
     case 3:
        printf("\n Wednesday");
     break;
     case 4:
        printf("\n Thursday");
     break;
     case 5:
        printf("\n Friday");
     break;
     case 6:
          printf("\n Saturday");
     break;
     case 7:
         printf("\n Sunday");
     break;
     default:
     printf("\n wrong day no:");   
  }
}