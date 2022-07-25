/*pattern27
1 
2 3 
5 8 13 
21 34 55 89 
144 233 377 610 987 
*/

#include<stdio.h>

int main()
{
    int num, num1 = 0, num2 = 1, sum = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", sum);
            num1 = num2;
            num2 = sum;
            sum = num1 + num2;
        }
        printf("\n");
    }
}