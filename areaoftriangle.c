#include<stdio.h>
int main (){

    float base,width,area;

    printf("enter the base of triangle");
    scanf("%f",&base);

    printf("enter the width of triangle");
    scanf("%f",&width);
    area = base*width;

    printf("area of triangle %f",area);
}
