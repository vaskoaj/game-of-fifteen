#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];
int d = 3;

int main(void)
{
    int board_size = d * d;

    for (int k = 0; k < d; k++)
    {
        for (int m = 0; m < d; m++)
        {
            board[k][m] = board_size - (k + 1) * (m + 1) + (m * d);
        }
    }

    if (d % 2 == 0)
    {
        board[d - 1][d - 2] = 2;
        board[d - 1][d - 3] = 1;
    }

    for (int n = 0; n < d; n++)
    {
        for (int p = 0; p < d; p++)
        {
            printf (" %2i", board[n][p]);
        }
        printf ("\n");
    }
    printf ("\n");
}