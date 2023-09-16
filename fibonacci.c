#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int fib(int n, int dp[])
{
    if (dp[n] != 0)
    {
        printf("%d\n", dp[n]);
        return dp[n];
    }

    if (n == 1 || n == 2)
    {
        dp[n] = 1;
        return 1;
    }
    else
    {
        dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
        return dp[n];
    }
}
int main()
{
    int myArray[200];
    int theAnswer = 0;
    int theNumber = 0;

    // initialize myArray to 0
    memset(myArray, 0, 200 * sizeof(myArray[0]));

    scanf("%d", &theNumber);

    theAnswer = fib(theNumber, myArray);

    printf("%d", theAnswer);
    return 0;
}