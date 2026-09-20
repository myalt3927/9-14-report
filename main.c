#include <stdio.h>

void printLine(int spaces, int stars)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < stars; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n < 3 || n % 2 == 0)
    {
        printf("3 이상의 홀수를 입력해야 합니다. \n");
        return 1;
    }

    int half = n / 2;

    for (int i = 0; i <= half; i++)
    {
        printLine(i, n - (2 * i));
    }

    for (int i = half - 1; i >= 0; i--)
    {
        printLine(i, n - (2 * i));
    }

    return 0;
}
