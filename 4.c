#include<stdio.h>
    int main(){
        int a,b;
        printf("Enter any two values : ");
        scanf("%d %d",&a,&b);
        printf("values before swapping a = %d and b = %d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("values after swapping a = %d and b = %d",a,b);
        return 0;
    }
