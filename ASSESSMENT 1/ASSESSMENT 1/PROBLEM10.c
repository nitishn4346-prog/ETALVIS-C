#include<stdio.h>
int main(){ // c lvl 1 problem 11
    int a,b=0;
    scanf("%d",&a);
    b=b+a%10;
    a=a/10;
    b=b+a%10+a/10;
    printf("%d",b);
    
    return 0;
}