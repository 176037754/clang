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

int main()
{
    printf("rec = %d\n", rec(20));
}
