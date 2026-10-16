#include<stdio.h>
int main(){ // problem 18
    int a,b,c=0;
    scanf("%d",&a);
    b=(a/10)*10+(a%10)-(a%2!=0) * 5;
    printf("%d",b);
}