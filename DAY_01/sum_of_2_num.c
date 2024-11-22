#include <stdio.h>

int main(){
    int a,b,c;
    /*
    a and b take input and c for store sum and give output
    */
    printf("Enter 1 (Int) num : ");
    scanf("%d",&a); // this one for take a int value in a
    printf("\nEnter 2 (Int) num : ");
    scanf("%d",&b); // this one for take a int value in b
    /*
    NOTE:- & symbol represents the address of the 
    variable, so if you don't use & then it won't work.
    */

    c = a + b;
    printf("\n%d + %d = %d\n",a,b,c);
    return 0;
}
