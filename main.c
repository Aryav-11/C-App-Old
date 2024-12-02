#include <stdio.h>
#include <stdlib.h>

 void Opencal()
{
    printf("\n Open calculator called\n\n");
}
void loadgame()
{
    printf("\n Load game called\n");
}
void playmultiplayer()
{
    printf("\n Play multiplayer game called\n");
}

int main()
{
    int secretNumber = 5;
    int guess;
    int input;
    int guessCount = 0;
    int gueesLimit = 3;
    int outOfGuess= 0;
     double num1;
    double num2;
    char operator;
    printf("List Of Things To Do: \n");
    printf( "1. Open Calculator\n" );
    printf( "2. Load game\n" );
    printf( "3. Play multiplayer\n" );
    printf( "4. Exit\n" );
    printf( "\nSelection: " );
    scanf( "%d", &input );
    switch ( input ) {
        case 1:            
            Opencal();

    printf("Enter A Number: ");
    scanf("%lf", &num1);
    printf("Enter A Operator: ");
    scanf(" %c", &operator);
    printf("Enter A Number: ");
    scanf("%lf", &num2);

    if(operator == '+') {
            printf("%f", num1 + num2);
    } else if(operator == '-') {
            printf("%f", num1 - num2);
    } else if(operator == '*') {
            printf("%f", num1 * num2);
    } else if(operator == '/') {
            printf("%f", num1 / num2);
    } else {

            printf("\n INVALID OPERATOR - TRY AGAIN \n");

    }
            break;
        case 2:

            loadgame();

            while(guess != secretNumber && outOfGuess == 0) {
                if(guessCount < gueesLimit) {
                    printf("\nEnter A Number: ");
                    scanf("%d", &guess);
                    guessCount++;
                } else {
                     outOfGuess = 1;
                }
            }
            if(outOfGuess == 1) {
                printf("\n\nOut Of Guesses");
                printf("\n\nHa Ha You Lose! Better Luck Next Time.???\n\n");
            } else {
                printf("\n\nYou Win!!!!!!!!\n\n");
            }
            break;
        case 3:
            playmultiplayer();
            break;
        case 4:
            printf( "\n Thanks for playing!\n" );
            break;
        default:
            printf( "\n Bad input, quitting! Please Try Again With Right Input\n" );
            break;
    }
    getchar();








    return 0;
}
