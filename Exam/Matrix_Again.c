#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = row - 1; i > row - 2; i--)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j > col - 2; j--)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}
