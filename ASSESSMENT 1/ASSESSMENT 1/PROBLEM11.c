#include<stdio.h>
int main(){ // c lvl 1 problem 12
    int a,b=0,c;
    scanf("%d",&a);
    c=a%10;
    b=b*10+c;
    a=a/10;
    b=b*10+a;
    printf("%d",b);
    return 0;
}