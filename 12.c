#include<stdio.h>
    int main(){
        float R,C;
        printf("Enter the amount in Rupees : ");
        scanf("%f",&R);
        C=R/76.23;
        printf("the amount in indian rupee is %f and after converting in to US$ the amount is %f",R,C);
        return 0;
    }
