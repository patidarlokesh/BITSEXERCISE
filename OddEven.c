//Q.....Take positive integer input and tell if it is even or odd.


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    if(n%2 == 0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    
    return 0;
}
