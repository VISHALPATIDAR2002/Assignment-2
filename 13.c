#include<stdio.h>
    int main(){
        int n,d,r;
        printf("Enter any number : ");
        scanf("%d",&n);
        d=n/10;
        r=n%10;
        d=r*100+d;
        printf("the given number is %d and after rotating its digit by one position towards right is %d",n,d);
        return 0;
    }
