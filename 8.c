#include<stdio.h>
    int main(){
        int num;
        printf("Enter any number : ");
        scanf("%d",&num);
        if(num&1){
        printf("The number is odd");
        }
        else{
            printf("Tne number is even");
        }
        return 0;
    }
