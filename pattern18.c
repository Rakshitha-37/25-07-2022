/* pattern16
e 
e d 
e d c 
e d c b 
e d c b a 
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%c ", num + 96 - col);
        }
        printf("\n");
    }

    return 0;
}

