#include<stdio.h>
    int main(){
        int num,sum,r;
        printf("Enter any three digit number : ");
        scanf("%d",&num);
        r=num%10;
        sum=sum+r;
        num=num/10;
        r=num%10;
        sum=sum+r;
        num=num/10;
        r=num%10;
        sum=sum+r;
        printf("%d",sum);
        return 0;
    }
