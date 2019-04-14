#include <stdio.h>
#include <string.h>

void copia( char *, const char *);

int main( void )
{
	char source[ 9 ] = { 'c', 'a', 'l', 'i' }; 
	char *destination = "mero";
	
	printf( "source contains %s\n", source );
	printf( "destination contains %s\n", destination );
	
	copia( source, destination ); 
	printf( "After merging both strings, source contains %s\n", source );
	
	return 0;
}

void copia(char *str1, const char *str2) 
{
	strcat( str1, str2 );
	
}
