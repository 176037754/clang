#include <stdio.h>

double fun ( int n , double old )
{
    return ( old + ( n / old ) ) / 2;
}

double abs ( double x )
{
    if ( x < 0 )
    {
	return -x;
    }

    return x;
}

double sqrt ( int n )
{
    double old = 1;
    double new = fun( n, old );

    while( abs ( new - old ) > 0.000001 )
    { 
	old = new ;
	new = fun ( n, old );
    }

    return new; 
}

int main()
{
    printf("sqrt = %f\n", sqrt(13));
    return 0;
}
