#include <stdio.h>
int main(){
    int n,rem,q,rem2;
    scanf("%d",&n);
    q=n;
    rem=q%100;
    rem2=q/100;
    if(rem == rem2)
    printf("Success");
    else
    printf("Failure");
}