#include <stdio.h>
int main(){
    int x,y,temp;
    printf("enter the first  elemnet= \n");
    scanf("%d",&x);
    printf("enter the seconde  elemnet=\n ");
    scanf("%d",&y);
    temp= x;
    x=y;
    y=temp;
    printf("the swap is = %d\n", x);
    printf("the swap is = %d", y);
    return 0;
    

}