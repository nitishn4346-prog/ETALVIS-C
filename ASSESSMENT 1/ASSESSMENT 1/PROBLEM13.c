#include<stdio.h>
int main(){ // c lvl 1 problem 14
    int a,b=0,c,d,e;
    scanf("%d",&a);
    c=a/100;
    d=a%10;
    a=a/10;
    e=a%10;
    b=c*100+d*10+e;
    printf("%d",b);
}