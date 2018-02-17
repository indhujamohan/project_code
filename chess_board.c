#include <stdio.h>
int main()
{
char board [8][8];
char pawn = 'p';
char rook = 'f';
char knight = 'k';
char bishop = 'b';
char queen = 'q';
char king = 'd';
char block = 'e';
char black [16];
char white [16];
int i,j;


{
    for(i=0;i<8;i++)
    {
        for(i=0;i<8;i++)
        {
            if(i==1||i==6)
            {
               printf("%c",pawn);
            }
            else if (i!=7||i!=0||i!=1||i!=6)
            {
               printf("%c",block);
            }
        }
    }
}
    switch 
    {
    case board [7][0];
            printf("%c",rook);
            break;
    case board [7][1]:
            printf("%c",knight);
            break;
    case board [7][2]:
            printf("%c",bishop);
            break;
    case board [7][3]:
            printf("%c",queen);
            break;
    case board [7][4]: 
            printf("%c",king);
            break;
    case board [7][5]: 
            printf("%c",bishop);
            break;
    case board [7][6]:
            printf("%c",knight);
            break;
    case board [7][7]:
            printf("%c",rook);
            break;
    case board [0][0]:
            printf("%c",rook);
            break;
    case board [0][1]: 
            printf("%c",knight);
            break;
    case board [0][2]:
            printf("%c",bishop);
            break;
    case board [0][3]: 
            printf("%c",king);
            break;
    case board [0][4]:
            printf("%c",queen);
            break;
    case board [0][5]:
           printf("%c",bishop);
            break;
    case board [0][6]:
            printf("%c",knight);
            break;
    case board [0][7]: 
            printf("%c",rook);
            break;
    }

}
void board()
int r,c;


{
    for(r=0;r<8;r++)
    {
        for(c=0;c<8;c++)
        {
            printf("%c");
        }
        printf("\n");
    }
}

