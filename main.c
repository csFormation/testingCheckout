#include <stdio.h>
#include <string.h>

void copia( char *, const char *);
int copia2( char *str1, int len, const char *str2 );


int main( void )
{
	char source[ 9 ] = { 'c', 'a', 'l', 'i' }; 
	char *destination = "mero";
	
	printf( "source contains %s\n", source );
	printf( "destination contains %s\n", destination );
	
	copia( source, destination ); 
	printf( "After merging both strings, source contains %s\n", source );
	
	printf( "Using 'memcpy'\n" );
	copia2( source, strlen( source ), destination ); 
	printf( "After merging both strings, source contains %s\n", source );
	
	return 0;
}

void copia( char *str1, const char *str2 ) 
{
	int a;
	( void ) a;
	strcat( str1, str2 );
	
}


int copia2( char *str1, int len, const char *str2 ) 
{
	memcpy( str1, str2, len * sizeof( char ) );
	return 0;
}
