#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        n=n%10;
        printf("the unit digit is %d",n);
        return 0;
    }
