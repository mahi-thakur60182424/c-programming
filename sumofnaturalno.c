#include<stdio.h>
 int sum (int a, int b);
int main()
{

   int a,b;
   printf("enter a 1st no");
   scanf("%d",&a);
      printf("enter a 2nd no");
      scanf("%d",&b);
      int s =  sum(a,b);
      printf("sum is %d:",s);

      
    return 0;
}
    int sum(int x , int y){
        return x + y;
    }  //  

