#include <stdio.h>

int fib(int n)
{
  if(n<2)
    return n;
  else
    return fib(n-1)+fib(n-2);
}

int fib_iter (int n)
{
    int a = 1, b = 0, i; 

    for(i = n; i > 0; i--)
    {	
	a = a + b;
	b = a - b;
    }

    return b;
}

main()
{
  printf("fib = %d\n",fib(35));
  printf("fib_iter = %d\n", fib_iter(35));
}





