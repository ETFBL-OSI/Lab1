#include <stdio.h>
#include <stdlib.h>

int oduzimnje(int a ,int b){

 int c=0;
 c=a-b;

 return c;

}



int main()
{
     int x,y;
     printf("Unesite broj :\n");
     scanf("%d",&x);
     printf("Unesite broj :\n");
     scanf("%d",&y);

     printf("Razlika je %d",oduzimnje(x,y));
     return 0;
}
