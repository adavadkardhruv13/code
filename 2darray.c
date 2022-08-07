#include <stdio.h>
#include <conio.h>

int main()
{
    int a[2][3];
    // int i, j; // i for rows and j for columns

    for (int i = 0; i < 2; i++) // for printing the elements of row and columns
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the element for [%d] [%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // displaying the array element
    printf("displaying the elements of arrays :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        };printf("\n");
    };
    
};