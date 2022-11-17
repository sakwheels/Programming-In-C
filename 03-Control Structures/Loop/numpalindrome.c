

//C program to check if a number is 
#include <stdio.h>

int main() {
    // declare variables
    int n, m, revnum = 0, r;

    // take input of the number
    printf("Enter the number = ");
    scanf("%d", & n);

    // copy the number
    m = n;

    //find the reverse
    while (n != 0) {
        // extract the unit digit
        r = n % 10;
        // store the reverse number
        // give appropriate positional value
        // of each digit
        revnum = revnum * 10 + r;
        //divide the number by 10
        n = n / 10;
    }

    // check for palindrome
    if (m == revnum)
        printf("%d is a palindrome!", m);
    else
        printf("%d is not a palindrome!", m);

    return 0;
}








