#include<stdio.h>
    int main(){
        int rem,no=510,binary=0,i=1;
        while(no!=0){
            rem=no%2;
            no=no/2;
            binary=rem*i+binary;
            i=i*10;
        }
        printf("%d",binary);
        return 0;
    }
