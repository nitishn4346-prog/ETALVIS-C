#include<stdio.h>
int main(){ // c lvl 1 problem 13
    int a,b=0,c,d;
    scanf("%d",&a);
    b=b*10+a%10;
    a=a/10;
    b=b*10+a%10;
    a=a/10;
    b=b*10+a;
    printf("%d",b);
}