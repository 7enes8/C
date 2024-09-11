#include<stdio.h>
#include<stdlib.h>
/*void printArray(int arr[][4]);
main()
{
	int dizi[5][4]={{1,2,3,1},
					{1,2,4,2},
					{1,2,5,3},
					{1,2,6,4},
					{0,0,0,0}};
	printArray(dizi);
	int i,j,toplam;
	for(i=0;i<4;i++){
		toplam=0;
		for(j=0;j<4;j++){
			toplam+=dizi[j][i];
		}
		dizi[4][i]=toplam;
	}
	printf("\n\n");printArray(dizi);
}
void printArray(int arr[][4])
{
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d" ,arr[i][j]);
		}
		printf("\n");
	}
}*/
/*int main()
{
	char metin[100];
	int i=0,sayac=0;
	printf("lutfen bir metin giriniz");
	gets(metin);
	while(metin[i]!='\0')
	{
		if(metin[i]==' ')
		{
			printf("(%d letters)" ,sayac);
			sayac=0;
		}
		else
		{
			printf("%c" ,metin[i]);
			sayac++;
		}
		i++;
	}
	
	return 0;
	
}*/

/*main()
{
	int i=1,toplam=0;
	while(toplam+i<100)
	{
		toplam+=i;
		printf("%d " ,toplam);
		i++;
	}
}*/
/*void printCevirme(char byk[]);
main()
{   
	char metin[246];
	printf("lutfen kucuk harfle bir seyler giriniz");
	gets(metin);
	printCevirme(metin);
	
}
void printCevirme(char byk[246])
{
	int i=0;
	while(byk[i]!='\0')
	{
		if(byk[i]>='a' && byk[i]<='z'){
			byk[i]-=32;
		 	i++;
		}
		 	
	}
	puts(byk);
}*/






















