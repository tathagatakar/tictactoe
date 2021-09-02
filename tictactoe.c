#include <stdio.h>

char s[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int check()
{
    if (s[1] == s[2] && s[2] == s[3])
        return 1;
        
    else if (s[4] == s[5] && s[5] == s[6])
        return 1;
        
    else if (s[7] == s[8] && s[8] == s[9])
        return 1;
        
    else if (s[1] == s[4] && s[4] == s[7])
        return 1;
        
    else if (s[2] == s[5] && s[5] == s[8])
        return 1;
        
    else if (s[3] == s[6] && s[6] == s[9])
        return 1;
        
    else if (s[1] == s[5] && s[5] == s[9])
        return 1;
        
    else if (s[3] == s[5] && s[5] == s[7])
        return 1;
        
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3' &&
        s[4] != '4' && s[5] != '5' && s[6] != '6' && s[7] 
        != '7' && s[8] != '8' && s[9] != '9')

        return 0;
    else
        return  - 1;
}

void board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", s[1], s[2], s[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", s[4], s[5], s[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", s[7], s[8], s[9]);

    printf("     |     |     \n\n");
}

int main()
{
    int plr = 1, i, ch;

    char mark;
    do
    {
        board();
        plr = (plr % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", plr);
        scanf("%d", &ch);

        mark = (plr == 1) ? 'X' : 'O';

        if (ch == 1 && s[1] == '1')
            s[1] = mark;
            
        else if (ch == 2 && s[2] == '2')
            s[2] = mark;
            
        else if (ch == 3 && s[3] == '3')
            s[3] = mark;
            
        else if (ch == 4 && s[4] == '4')
            s[4] = mark;
            
        else if (ch == 5 && s[5] == '5')
            s[5] = mark;
            
        else if (ch == 6 && s[6] == '6')
            s[6] = mark;
            
        else if (ch == 7 && s[7] == '7')
            s[7] = mark;
            
        else if (ch == 8 && s[8] == '8')
            s[8] = mark;
            
        else if (ch == 9 && s[9] == '9')
            s[9] = mark;
            
        else
        {
            printf("Invalid move ");

            plr--;

        }
        i = check();
        plr++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --plr);
    else
        printf("==>\aGame draw");
    return 0;
}