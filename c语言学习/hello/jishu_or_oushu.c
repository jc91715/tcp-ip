#include<stdio.h>
 
int main()
{
    int num;
    while(1)
    {
    
    printf("输入一个数字 : ");
    scanf("%d",&num);
 
    (num%2==0)?printf("偶数\n"):printf("奇数\n");
   }
}
