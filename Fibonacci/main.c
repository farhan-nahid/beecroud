#include <stdio.h>

int main ()

{
    int result = 0;

    for(int num = 10; num>=1; num--)
    {   
        result += num;
    }

    printf("%d\n",result);

    return 0;
}

// Fibonacci Series using Recursion

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
  
int main()
{
    int n = 9;
    printf("%d", fib(n));
    getchar();
    return 0;
}