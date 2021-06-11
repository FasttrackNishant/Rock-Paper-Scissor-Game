#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int logic(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if (number <= 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 's';
    }
    else
    {
        comp = 'p';
    }
    printf("Hey! Hello! Welcome to my GAMING World !\n");
    printf("Enter 'r' for 'Rock' , 'p' for 'Paper' , 'S' for 'Seasor' \n");
    scanf("%c", &you);
  
   int  result = logic(you, comp);
    printf("You have chose %c and comp has chose %c \n", you, comp);

    if (result == 0)
    {
        printf("The game is Draw!!");
    }
    else if (result == 1)
    {
        printf("Congratulations ! You won the match!!");
    }
    else if(result == -1)
    {
        printf("You lost the match!!");
    }

    return 0;
}