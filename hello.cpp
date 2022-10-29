/*
Import libs
The "Include" statement is a directive from the compiler and not a language
command
*/
#include <stdio.h>
#include <locale.h>

int main() {
    int x;
    float y;
    char z;

    int input1;
    char input2;
    char input3;

    int N;

    x = 1;
    y = 2.3;
    z = 'A';

    setlocale(LC_ALL, "");
    printf("Hello, World!");

    // Formatting
    printf("\nx value is: %d", x);
    printf("\ny value is: %f", y);
    printf("\nz value is: %c", z);

    y = 8.5421;
    printf("\nx plus 1 = %d and z still = %c", x + 1, z);

   // User input
    printf("\nType an integer value: ");
    scanf("%d", &input1);
    printf("\ninputted value is %d", input1);
    fflush(stdin);

    printf("\nType a character: ");
    scanf("%c", &input2);
    printf("\ninputted value is %c", input2);
    fflush(stdin);

    printf("\nType another character");
    input3 = getchar();
    printf("\nThe inputted value is %c", input3);

    // if
    printf("\nType an integer number: ");
    scanf("%d", &N);

    if(N%2 > 0) {
        printf("Number is odd");
    } else {
        printf("Number is even");
    }
}