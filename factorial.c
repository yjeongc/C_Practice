#include <stdio.h>

int Factorial_Recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n *Factorial_Recursion(n-1);
}

int main()
{
    int result = Factorial_Recursion(5);
    printf("%d", result);
    
    return 0;
}