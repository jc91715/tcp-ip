#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   char buff[255];
 
   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);//读到空格
   printf("1: %s\n", buff );
 
   fgets(buff, 255, (FILE*)fp);//读取255个字节
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);//读取255个字节
   printf("3: %s\n", buff );
   fclose(fp);
 
}
