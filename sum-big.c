#include <stdio.h>

int sum_big(int a, int b, int c)
{
    return (a*a + b*b + c*c
	    - (min((min(a, b)),c)*(min((min(a, b)),c))));
}

int min(int a, int b)
{
    return a > b ? b : a;
}

int main()
{
    printf("sum-big = %d\n", sum_big(1,2,3));
}
