#include<stdio.h>
    int main(){
        int a,b,t;
        printf("Enter any two values : ");
        scanf("%d %d",&a,&b);
        printf("value before swapping a is %d and b is %d\n",a,b);
        t=a;
        a=b;
        b=t;
        printf("value of after swapping a = %d and b = %d",a,b);
        return 0;
    }
