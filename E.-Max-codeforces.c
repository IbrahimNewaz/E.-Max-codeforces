/*
E. Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
*/




#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int maxiValue = 0;

    while (T--)
    {
        int x;
        scanf("%d", &x);
        if (x > maxiValue)
        {
            maxiValue = x;
        }
    }

    printf("%d", maxiValue);
    return 0;
}