#include<stdio.h>
    int main(){
        int new,n,d;
        printf("Enter any number : ");
        scanf("%d",&n);
        printf("Enter any digit : ");
        scanf("%d",&d);
        new=n*10+d;
        printf("the given number was %d and the new number after appending with the digit %d is %d",n,d,new);
        return 0;
    }
