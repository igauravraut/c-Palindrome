#include<stdio.h>
int main(){

    int number,originalNumber,reverserdNumber = 0,remainder;

    printf("Enter a number: ");
    scanf("%d",&number);

    originalNumber = number;

    while(number != 0){
        remainder = number % 10;
        reverserdNumber = reverserdNumber * 10 + remainder;
        number /= 10;
    }

    if(originalNumber == reverserdNumber){
        printf("%d is a Palindrome number\n",originalNumber);
    }else{
        printf("%d is not a palindrome number\n",originalNumber);
    }

    return 0;
}