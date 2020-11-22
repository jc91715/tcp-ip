#include <stdio.h>
 
int main( )
{
   int c;
 
   printf( "Enter a value :");
   c = getchar( );
   while(c!=EOF){
	
   printf( "\nYou entered: ");
   putchar( c );
   printf( "\n");
c = getchar( );
   } 
   return 0;
}
