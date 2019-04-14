#include <stdio.h>



int main( void )
{
	int a = 6;
	char b[ ] = {'c', 'a', 'l', 'i', '\0' }; 
	
	printf( "First version\n" );
	printf( "a es %d\n", a );
	printf( "b es %s\n", b );
	
	return 0;
}
