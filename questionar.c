#include<stdio.h>
#include<ctype.h>

int main()
{
    char questions[][100] = {"1. what year did the C language debut?: ",
                             "2. who is credited with developing C?; ",
                             "3. what is the predeceser of C?: "};

    char options[][100] = {"A. 1969","B. 1972", "C. 1975", "D. 1999",
                            "A. Dennnis Ritchie", "B. Nikola tesla", "C. Guido vonrusom", "D. Doc Brown",
                            "A. Objective C", "B. Clang", "C. C++", "D. C#"};
                    
    char answer[3] = {'B', 'A', 'B'};
    int numberOfQuestioons = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score=0;

    printf(">>>>^^^^^^^QUIZ GAME^^^^^^^^<<<<\n");

    for(int i=0; i<numberOfQuestioons; i++){
        printf("********************\n");
        printf("%s\n",questions[i]);
        printf("********************\n");

        for(int j = (i * 4); j < (i*4) + 4; j++){
            printf("%s \n", options[j]);
        }
        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c"); //clear new line char from input buffer

        guess = toupper(guess);

        if(guess == answer[i])
        {
            printf("CORRECT!!\n");
            score++;
        }else
        {
            printf("INCORECT!!!!\n");
        }
    }
    printf("********************\n");
    printf("FINAL SCORE: %d/%d\n",score, numberOfQuestioons);
    printf("********************\n");

    return 0;
}