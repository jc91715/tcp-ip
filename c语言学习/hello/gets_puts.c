#include <stdio.h>
 
int main( )
{
   char str[100];
 
   printf( "Enter a value :");
  //gets( str );
 fgets(str, (sizeof str / sizeof str[0]), stdin);
   printf( "\nYou entered: ");
   puts( str );
   return 0;
}
