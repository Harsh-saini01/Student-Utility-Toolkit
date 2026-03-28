//Student Utility Toolkit
#include <stdio.h>


//find sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

//check palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0;
    while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

//check prime
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

//calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

//check even or odd
int checkEvenOrOdd(int n){
    if((n%2)!=0){return 0;}
    else {return 1;}
}

int main() {
    int choice, num;

    do {
        printf("\n===== Student Utility Toolkit =====\n");
        printf("1. Sum of Digits\n");
        printf("2. Palindrome Check\n");
        printf("3. Prime Check\n");
        printf("4. Factorial\n");
        printf("5. Odd/Even Check\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting program...\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &num);

        switch(choice) {
            case 1:
                printf("Sum of digits = %d\n", sumOfDigits(num));
                break;

            case 2:
                if(isPalindrome(num))
                    printf("Palindrome Number\n");
                else
                    printf("Not a Palindrome\n");
                break;

            case 3:
                if(isPrime(num))
                    printf("Prime Number\n");
                else
                    printf("Not a Prime Number\n");
                break;

            case 4:
                printf("Factorial = %lld\n", factorial(num));
                break;

            case 5:
               if(checkEvenOrOdd(num))
                    printf("Even Number");
               else
                    printf("Odd Number");

                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}