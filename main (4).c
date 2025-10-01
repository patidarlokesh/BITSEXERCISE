

#include <stdio.h>

int fact(int n);

int fact(int n)
{
    int temp = 1;
    
    while (n>0)
    { 
        temp = temp*n;
        n--;
    }
    
    return temp;
    
}

int main()
{
    printf("Please enter the value of n:");
    int n;
    scanf("%d", &n);
    int factorial = fact(n);
    printf("the factorial of n is %d\n", factorial);
    

    return 0;
}