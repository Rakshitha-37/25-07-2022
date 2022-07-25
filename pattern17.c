/*pattern8
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/

#include <stdio.h>

int main()
{
    int num, num1 = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", num1);
            num1 = num1 + 1;
        }
        printf("\n");
    }

    return 0;
}
