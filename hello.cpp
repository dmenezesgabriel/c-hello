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

    int option;

    double number, sum;

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

    printf("\nType another character: ");
    input3 = getchar();
    printf("\nThe inputted value is %c", input3);

    // if
    printf("\nType an integer number: ");
    scanf("%d", &N);

    if(N%2 > 0) {
        printf("\nNumber is odd");
    } else {
        printf("\nNumber is even");
    }
    fflush(stdin);

    // switch
    printf("\nChoose an option: \n1)\n2)\n3)\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("\nSelected option %d", option);
        break;

    case 2:
        printf("\nSelected option %d", option);
        break;

    case 3:
        printf("\nSelected option %d", option);
        break;

    default:
        printf("\nYou selected an option different from the ones given --> %d", option);
    }

    // do while
    do {
        printf("\nInsert a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);
    printf("\nThe sum is equals to %.2lf", sum);

    while( sum < 100) {
        printf("\nprogress: %2lf/100.00", sum);
        sum++;
    }
}