// if cost price and selling price of an item is input through the keyboard,write a program to 
// determine wheather the seller has made profit or incurred loss,
// Also determine how much profit he made or loss he incurred.

// int cp;
// int sp;



#include<stdio.h>

int main() {
    int cp;
    printf("Enter cost price :");
    scanf("%d", &cp);
    
    int sp;
    printf("Enter selling price :");
    scanf("%d",&sp);
    
    if(sp>cp){
        printf("Profit");
    }
    
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No Profit,No Loss");
    }
    
    return 0;
    
}