#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*int us_alma(int,int);
main()
{
	int a;
	int b;
	printf("taban sayýsý giriniz");
	scanf("%d",&a);
	printf("us sayýsý giriniz");
	scanf("%d",&b);
	printf("sonuc:%d" ,us_alma(a,b));
}
int us_alma(int x,int y)
{
	int i;
	int sonuc=1;
	for(i=0;i<y;i++)
	 sonuc*=x;
	return sonuc;
}*/

/*int gecme(int,int);
main()
{
	int vize;
	int final;
	printf("vize notu giriniz");
	scanf("%d",&vize);
	printf("final notu giriniz");
	scanf("%d",&final);
	printf("gecme notu:%d",gecme(vize,final));
}
int gecme(int x,int y)
{
	int sonuc;
	sonuc=(x*0.4)+(y*0.6);
	return sonuc;
}*/

/*int asal(int);
main()
{
	
	int a;
	printf(" sayý giriniz");
	scanf("%d",&a);
	printf("%d" ,asal(a));
}
int asal(int x)
{   
    int sonuc;
	if(x%2==0 && x%3==0 && x%5==0 && x%7==0);
	   sonuc=0;
	else
	 sonuc=1
	return sonuc;
}*/

/*int hesapla(int,int);
main()
{
	int a;
	int b;
	printf("a?");
	scanf("%d" ,&a);
	printf("b?");
	scanf("%d");
	printf("rastgele sayý:%d" , hesapla(a,b));
	
}
int hesapla(int x,int y)
{
	int sonuc;
	int kucuk;
	int fark;
	srand(time(NULL));
	if(x>y)
	{
		fark=x-y;
		kucuk=y;
	}
	else
	{
	  fark=y-x,
	  kucuk=x;
	}
	sonuc=rand()%fark+kucuk;
	return sonuc;
	  
	
}*/

/*int hesapla(int,int);
main()
{
	int a;
	int b;
	printf("a?");
	scanf("%d" ,&a);
	printf("b?");
	scanf("%d" ,&b);
	printf("%d" ,hesapla(a,b));
}
int hesapla(int x,int y)
{
	int kucuk;
	int fark;
	int sonuc;
	srand(time(NULL));
	if(x>y)
	{
		fark=x-y;
		kucuk=y;
	}
	else
	{
		fark=y-x,
		kucuk=x;
	}
	sonuc=rand()%fark+kucuk;
	return sonuc;
}*/










