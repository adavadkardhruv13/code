#include <stdio.h>
#include <conio.h>

int main() {
    int a [2][2] = {{1,2}, {4,5}};
    int b [2][2] = {{10,11}, {12,13}};
    int result [2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j] = a[i][j]+b[i][j] );
        }
        printf("\n");
    }
    
}