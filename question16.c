#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("The number is negative.");
    }else if (n==0)
    {
        printf("The number is zero.");
    }else{
        printf("The number is positive.");
    }
    return 0;