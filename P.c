//wap to print a factorials  of a number by using recursion
#include<stdio.h>
int factorial(int n){ // call
if(n==0 || n==1){
    return 1;
}
 return n * factorial(n - 1); // recursion

}
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
     if(num<0){
        printf("negative number");
     }
     else{
     printf("Factorial of %d is %d\n", num, factorial(num));
     }
     return 0;
}