#include<stdio.h>
int main (void)
{
 int k=0,a;
 char s[a];
 
 printf("bir karakter dizisi giriniz;");
 gets(s);
 while(s[k]!='\0' )
 	k++;
printf("karakter sayisi: %d" ,k );
  for(a=k;a!=0;a--)
  	printf("tersi:%s" ,s[a]);
 
}
