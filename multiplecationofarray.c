#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][2];
    int b[2][3];
    int result [3][3];

// scanning element for array a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the element of array");
            scanf("%d, & a[i][j]");
        }
        
    }
//scanning element for array b
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the element of array");
            scanf("%d", & b[i][j]); 
        }
    
    }
//printing the element or multipling the element and printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d" , result[i][j] = result[i][j] + a[i][j]+b[i][j]);
            }
            
        }
        
    }
}