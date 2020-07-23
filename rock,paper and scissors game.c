#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Rock=1;
    int Paper=2;
    int Scissor=3;
    int i;
    int score=0;
    int score2=0;
    int choice;
    srand(time(0));
    printf("Rock=1,Paper=2,and Scissors=3\n");
    for(i=0;i<5;i++)
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        int computer=rand()%3+1;
        if(choice==1)
        {
            if(computer==1)
            {
                printf("Draw\n");
            }
            if(computer==2)
            {
                printf("Computer Wins!\n");
                score2=score2+1;
            }
            if(computer==3)
            {
                printf("Player Wins\n");
                score=score+1;
            }
        }
    else  if(choice==2)
    {
        if(computer==2)
        {
            printf("Draw\n");
        }
        if(computer==3)
        {
            printf("Player Wins!\n");
            score=score+1;
        }
        if(computer==1)
        {
            printf("Computer Wins!\n");
            score2=score2+1;
        }
    }
    else if(choice==3)
    {
        if(computer==3)
        {
            printf("Draw\n");
        }
        if(computer==2)
        {
            printf("Computer Wins!\n");
            score2=score2+1;
        }
        if(computer==1)
        {
            printf("Player Wins!\n");
            score=score+1;
        }
    }
    else
    {
        printf("Wrong Answer\n");
    }
    }
    if(score2>score)
    {
    printf("Computer wins %d to %d\n",score2,score);
    }
    else if(score2<score)
    {
    printf("Player wins %d to %d\n",score,score2);
    }
    else if(score2=score)
    {
    printf("No winner it is a draw!\n");
    }
    return 0;
}

