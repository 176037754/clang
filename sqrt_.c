#include <stdio.h>

float fun ( int n, float x )
{
    return ( (x + (n/x))/2 );
}

float abs ( float x )
{
    if ( x < 0 )
	return -x;

    return x;
}

float sqrt ( int n )
{
    float old = 1;
    float new = fun ( n, old );

    while( abs( new - old ) > 0.00001 )
    {
	old = new;
	new = fun ( n, old);	
    }

    return new;
}

int main()
{
    printf("sqrt = %f\n", sqrt(3));
}
