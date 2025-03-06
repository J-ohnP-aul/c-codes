#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct deck{
    char type[10];
    char used;
    int value;
} eDeck;

void shuffle(eDeck *);
int main()
{

}

void shuffle(eDeck *thisDeck)
{
    int x,iRnd;
    int found = 0;
    system("clear");
    printf("\nFour five cards are: \n\n");
}