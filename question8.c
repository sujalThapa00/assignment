#include <stdio.h>
int main() {
    int p, t;
    float r, CI, i, base;
    printf("Enter the Principal Amount: ");
    scanf("%f", &p); 
    printf("Enter the number of years: ");
    scanf("%f", &t); 
    printf("Enter the rate: ");
    scanf("%f", &r); 
    base = (1 + r / 100.0); 
    i = pow(base, t);       
    CI = p * i - p;         
    printf("The compound interest is: %.2f\n", CI);
    return 0;
}