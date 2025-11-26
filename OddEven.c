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



// Q Number is divisible by 5.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    if(n%5 == 0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }
    
    return 0;
}
