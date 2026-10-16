#include <stdio.h>
int main(){
    int n,rem,q,rem2;
    scanf("%d",&n);
    q=n;
    rem=q%10;
    q=q/10;
    rem2=q%10;
    if(rem2 <=  rem)
    printf("Success");
    else
    printf("Failure");
}