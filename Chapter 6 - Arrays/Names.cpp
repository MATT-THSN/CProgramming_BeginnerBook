/* 
* Programming Practise File
* Desc: Store 5 names
* Date Modified: 06/09/2018
* Author: Matthew Thompson
*/

/*
    - 2 dimentional array, stores up to five names. 
    - Asks for the user to input a new name, also asks to view added names
*/

#include <stdio.h>
#include <stdlib.h>

//VARIABLES
char aNames[50][5];

//FUNCTION PROTOTYPES
void stringRead(int val);

int main(void) {
    int tmp = 0;
    while(true) {
        switch (tmp) {
            case 0: 
                printf("\n\tAdd a name1: ");
                scanf(" %s", &aNames[tmp++][0]);
                stringRead(0);
            break;

            case 1: 
                printf("\n\tAdd a name2: ");
                scanf(" %s", &aNames[tmp++][1]);
                stringRead(1);
            break;

            case 2:
                printf("\n\tAdd a name3: ");
                scanf(" %s", &aNames[tmp++][2]);
                stringRead(2);
            break;

            case 3:
                printf("\n\tAdd a name4: ");
                scanf(" %s", &aNames[tmp++][3]);
                stringRead(3);
            break;

            case 4:
                printf("\n\tAdd a name5: ");
                scanf(" %s", &aNames[tmp++][4]);
                stringRead(4);
            break;

            default:
                printf("\n\tERROR Cannot add anymore names!");
            break;
        }
    }
}

/*
* FUNCTION DECLARATION
* Loops through at prints ever character in name
* Returns VOID
*/
void stringRead(int val) {
    for(int x = 0; x < 50; x++) {
        printf("Before");
        printf("%c", aNames[x][val]);
        printf("After");
    }
}



