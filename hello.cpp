/*
Import libs
The "Include" statement is a directive from the compiler and not a language
command
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
// constant
#define FIVE 5
#define MAX 32
#define N_STUDENTS 4
#define N_CHARACTERS 30

struct Store_Notebook_Record {
    char manufacturer[20];
    int sheets_number;
    char cover_type[15];
    char size[15];
    float price;
};

int main() {
    int x;
    float y;
    char z;
    x = 1;
    y = 2.3;
    z = 'A';

    setlocale(LC_ALL, "");
    printf("Hello, World!");

    ///////////////////////////////////////////////////////////////////////////
    // Formatting
    ///////////////////////////////////////////////////////////////////////////
    printf("\nx value is: %d", x);
    printf("\ny value is: %f", y);
    printf("\nz value is: %c", z);

    y = 8.5421;
    printf("\nx plus 1 = %d and z still = %c", x + 1, z);

    ///////////////////////////////////////////////////////////////////////////
    // User input
    ///////////////////////////////////////////////////////////////////////////
    int input1;
    char input2;
    char input3;

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

    ///////////////////////////////////////////////////////////////////////////
    // if
    ///////////////////////////////////////////////////////////////////////////
    int N;

    printf("\nType an integer number: ");
    scanf("%d", &N);

    if(N%2 > 0) {
        printf("\nNumber is odd");
    } else {
        printf("\nNumber is even");
    }
    fflush(stdin);

    ///////////////////////////////////////////////////////////////////////////
    // switch
    ///////////////////////////////////////////////////////////////////////////
    int option;

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

    ///////////////////////////////////////////////////////////////////////////
    // do while
    ///////////////////////////////////////////////////////////////////////////
    double number, sum;

    do {
        printf("\nInsert a number > 1 to continue, or 0 to stop: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);
    printf("\nThe sum is equals to %.2lf", sum);

    // While
    while( sum < 100) {
        printf("\nprogress: %2lf/100.00", sum);
        sum++;
    }

    ///////////////////////////////////////////////////////////////////////////
    // For
    ///////////////////////////////////////////////////////////////////////////
    int counter;

    for (counter = 0; counter <= 10; counter++) {
        printf("\ncounting to 10... %d ", counter);
    }

    ///////////////////////////////////////////////////////////////////////////
    // vector
    // user_ids[5]
    ///////////////////////////////////////////////////////////////////////////
    int user_ids[5];
    int index;

    for (index = 0; index < 5; index++) {
        printf("\nType user id %d: ", index+1);
        scanf("%d", &user_ids[index]);
    }

    for (index = 0; index < 5; index++) {
        printf("\nuser id %d is %d", index, user_ids[index]);
    }

    ///////////////////////////////////////////////////////////////////////////
    // matrix
    ///////////////////////////////////////////////////////////////////////////
    int tbl_user[5][2];
    index=0;

    for (index = 0; index < 5; index++) {
        printf("\nType user id %d: ", index+1);
        scanf("%d", &tbl_user[index][0]);
        fflush(stdin);
        printf("\nType user category (a, b, c)");
        scanf("%c", &tbl_user[index][1]);
    }

    for (index = 0; index < 5; index++) {
        printf("\nuser id %d is %d with category %c ", index, tbl_user[index][0], tbl_user[index][1]);
    }

    index=0;

    ///////////////////////////////////////////////////////////////////////////
    // String
    ///////////////////////////////////////////////////////////////////////////
    char name[N_STUDENTS][N_CHARACTERS];

    for (index = 0; index < N_STUDENTS; index++) {
        printf("\nType students name: ");
        fflush(stdin);
        fgets(name[index], N_CHARACTERS, stdin);
    }

    ///////////////////////////////////////////////////////////////////////////
    // Struct
    ///////////////////////////////////////////////////////////////////////////
    struct Store_Notebook_Record notebook_registration, notebook_sell;
    printf("\nRegister a notebook:");
    printf("\nType the manufacturer: ");
    fflush(stdin);
    scanf("%s", notebook_registration.manufacturer);
    printf("\nType the number of sheets: ");
    fflush(stdin);
    scanf("%d", &notebook_registration.sheets_number);
    printf("\nType the cover type: (hard/brochure) ");
    fflush(stdin);
    scanf("%s", notebook_registration.cover_type);
    printf("\nType the notebook size: ");
    fflush(stdin);
    scanf("%s", notebook_registration.size);
    printf("\nType notebook price");
    fflush(stdin);
    scanf("%f", &notebook_registration.price);

    notebook_sell = notebook_registration;

    printf("\nSold notebook: ");
    printf("\nManufacturer: %s", notebook_sell.manufacturer);
    printf("\nSheets number: %d", notebook_sell.sheets_number);
    printf("\nCover type: %s", notebook_sell.cover_type);
    printf("\nNotebook size: %s", notebook_sell.size);
    printf("\nNotebook price: %f", notebook_sell.price);
}