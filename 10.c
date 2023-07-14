#include<stdio.h>
    int main(){
        int n;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("the original digit is %d and after making the last digit of the number 0 is %d",n,(n/10)*10);
        return 0;
    }
