#include <stdio.h>
#include <string.h>

void copia( char *, const char *);
int copia2( char *str1, int len, const char *str2 );
int readArray( char *str );


int main( void )
{
	char source[ 9 ] = { 'c', 'a', 'l', 'i' }; 
	char *destination = "mero";
	
	printf( "source contains %s\n", source );
	printf( "destination contains %s\n", destination );
	
	copia( source, destination ); 
	printf( "After merging both strings, source contains %s\n", source );
	
	printf( "Using 'memcpy'\n" );
	destination = source;
	copia2( source, strlen( source ), destination ); 
	printf( "After merging both strings, source contains %s\n", source );
	
	printf( "Reading source ... \n" );
	readArray( source );
	
	return 0;
}

void copia( char *str1, const char *str2 ) 
{
	strcat( str1, str2 );
}


int copia2( char *str1, int len, const char *str2 ) 
{
	memcpy( str1, str2, len * sizeof( char ) );
	return 0;
}

int readArray( char *str )
{
	int i = 0;
	
	while( '\0' != str[i] ) 
	{
		printf( "%c ", str[i] );
		i++;
	}
	printf( "\n" );
	return 0;
}
