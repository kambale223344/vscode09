#include <stdio.h>
int main()
{
    float principal, rate, time, si;
    printf("enter the principal : ");
    scanf("%f", &principal);
    printf("enter the rate: ");
    scanf("%f",&rate);
    printf("enter the time: ");
    scanf("%f", &time);
    si= (principal*rate*time)/100;
    printf ("your SI is : " "%f", si);
    return 0;


}