/* 
* App name: Concentration
* Desc: Concentration
* Date Modified: 03/07/2018
* Author: Matthew Thompson
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int iRandNum1 = 0;
    int iRandNum2 = 0;
    int iRandNum3 = 0;
    int iResponse1 = 0;
    int iResponse2 = 0;
    int iResponse3 = 0;
    int iCurrentTime = 0;
    int iTimePast = 0;
    char cMenuSelection = '\0';
    bool bUserInterface = true;
    bool Correct = false;

    do {
        printf("Would you like to play a game of random numbers?\nY or N: ");
        scanf("%c", &cMenuSelection);

        if (cMenuSelection == 'Y' || cMenuSelection == 'y') {
            iRandNum1 = rand() % 100;
            iRandNum2 = rand() % 100;
            iRandNum3 = rand() % 100;

            do {
                printf("\nHere are your numbers to remember:\n\n%d\t%d\t%d\n", iRandNum1, iRandNum2, iRandNum3);
                iCurrentTime = time(NULL);
                do {
                    iTimePast = time(NULL);
                } 
                while ((iTimePast - iCurrentTime) < 3);

                system("clear");
                printf("What were the 3 numbers?\n");
                scanf("%d%d%d", &iResponse1, &iResponse2, &iResponse3);

                if(iRandNum1 == iResponse1 && iRandNum2 == iResponse2 && iRandNum3 == iResponse3) {
                    printf("\nThat's correct! You remembered the 3 numbers!\n");
                    Correct = true;
                }
                else {
                    printf("\nSorry, that doesn't seem to be right, try again!\n");
                }
            } while(Correct == false);
        }
        else if (cMenuSelection == 'N' || cMenuSelection == 'n') {
            printf("Thank you for playing");
            bUserInterface = false;
            continue;
        }
    } while (bUserInterface);
    
}