#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int spr (char you, char computer)
{
    if (you == computer)
    return -1;
    if( you =='r' && computer == 'p')
    return 0;
    else if (you == 'p' && computer =='r')
    return 1;
    if (you == 's' && computer == 'r' )
    return 0;
    else if (you == 'r' && computer == 's')
    return 1;
    if (you == 'p' && computer == 's')
    return 0;
    else if (you == 's' && computer == 'p')
    return 1;
}

int main ()
{
    int n;
    char you, computer;
    int result;
    srand (time(NULL));
    n = rand() % 100;
    if (n < 33)
    computer = 'r';
    else if (n > 33 && n < 66)
    computer = 'p';
    else
    computer = 's';
    printf("\n Enter s for scissor\n Enter r for rock\n Enter p for paper\n");
    scanf("%c",&you);
    result = spr(you, computer);
    printf("You choosed %c and Computer choosed %c.", you, computer);
    if(result == -1)
    printf("\n\nDRAW!\n\n");
    else if (result == 0)
    printf("\n\n Oh No!!! Computer won the game!\n\n");
    else if(result)
    printf("\n\nYahoo!!! You won\n\n");
}