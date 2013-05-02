#include <stdio.h>

int rec (int n)
{
    /* f(n)=f(n-1)+2f(n-2)+3f(n-3) */
    if( n < 3 )
    {
	return n;
    }
    else
    {
	return rec(n-1) + 2*rec(n-2) + 3*rec(n-3);
    }
}

int iter (int n)
{
    int a = 2, b = 1, c = 0, i;

    for(i=0; i<n; i++)
    {
	a = a + 2*b + 3*c;
	b = a - 2*b - 3*c;
	c = (a - b - 3*c)/2;
    }

    return c;
}

int main()
{
    printf("rec = %d\n", rec(20));
    printf("rec = %d\n", iter(20));    
}
