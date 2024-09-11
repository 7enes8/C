#include<stdio.h>
#include<stdlib.h>
#include<time.h>
# define PI 3.14 
/*main()
/*{
	printf("merhaba dunya");
	return 0;

}*/
/*{
	int sayi;
	printf("bir sayi giriniz");
	scanf("%d",&sayi);
	printf("girilen sayi; %d" , sayi);
}*/

	/*int taban;
	int yukseklik;
	int alan;
	printf("bir taban uzunlugu giriniz");
	scanf("%d", &taban);
	printf("bir yukseklik giriniz");
	scanf("%d", &yukseklik);
	alan=(taban*yukseklik)/2;
	printf("ücgenin alaný=%d", alan);*/
	
	/*int sayi;
	printf("bir sayý giriniz:");
	scanf("%d" , &sayi);
	if(sayi>2 && sayi<5)
		printf("evet");
	else
		printf("hayýr");*/
		
	/*int vize;
	int final;
	int gecme_notu;
	int numara;
	printf("öðrenci numarýnýzý giriniz");
	scanf("%d" , &numara);
	printf("vize notunuzu giriniz");
	scanf("%d" , &vize);
	printf("final notunuzu giriniz");
	scanf("%d" , &final);
	gecme_notu=(vize*40/100)+(final*60/100);
	printf("geçme notunuz: %d" , gecme_notu);
	printf("öðrenci numaranýz=%d" , numara);*/
	
/*	int islem;
	int alan;
	int cevre;
	int yar;
	printf("1 ve ya 2 giriniz");
	scanf("%d" , &islem);
	printf("yarýcap giriniz");
	scanf("%d" , &yar);
	if(islem==1)
	{
		cevre=2*PI*yar;
		printf("cevre=%d" , cevre);
	}
		
		
	if(islem==2)
	{
		alan=PI*yar*yar;
		printf("alan=%d" , alan);
	}
	
	else
		printf("yarýcap giriniz");*/
	/*int para;
	int yuz;
	int elli;
	int yirmi;
	int on;	
	printf("para miktarý giriniz");
	scanf("%d" , &para);
	yuz=para/100;
	para=para%100;
	elli=para/50;
	para=para%50;
	yirmi=para/20;
	para=para%20;
	on=para/10;
	printf("%d,%d,%d,%d" , yuz,elli,yirmi,on);*/
	
	/*char c='a';
	printf("karakter= %c" , c);*/
/*	int sayi1;
	int sayi2;
	int toplam=0;	
	printf("sayý giriniz1");
	scanf("%d" , &sayi1);
	printf("sayý giriniz2");
	scanf("%d" , &sayi2);
	toplam=sayi1 + sayi2;
	printf("toplam=%d" , toplam);*/
	
	/*int alan;
	int yaricap=5;
	alan=PI*yaricap*yaricap;
	printf("alan=%d" , alan);*/
	
/*	int sayi;
	printf("sayý giriniz");
	scanf("%d" , &sayi);
	if(sayi%2==0)
		printf("çift");
	else
		printf("tek");*/
		
		
	/*int derece;
	printf("derece giriniz");
	scanf("%d" , &derece);
	if(derece<0)
		printf("donduk");
	else
		printf("hava iyi");*/
		
		
/*	int derece;
	float fahr;
	printf("fahr giriniz");
	scanf("%d" , &fahr);
	derece=(fahr-32)*5/9;
	printf("derece=%d", derece);*/
	
	
/*	int i;
	for(i=1;i<=10;i++)
		{
			printf("%5d",i*i);
		}*/
		
 /*int i;
 for(i=1;i<=10;i++)
 {
   printf("%5d" ,i);	
 }		*/
 
/* int N;
 int i;
 int faktoriyel=1;
 printf("bir N sayýsý giriniz");
 scanf("%d" , &N);
 for(i=1;i<=N;i++)
 {
 	faktoriyel*=i;
 }
  printf("%d" , faktoriyel);*/
  
 /* int i=1000;
  for(i=1000;i<=2000;i++)
  {
  	if(i%2==0)
  	 printf("%5d",i);
  }*/
  
  /*int a;
  int toplam=0;
  int numara;
  int b;
  b=numara;
  printf("bir sayý giriniz");
  scanf("%d" , &numara);
  while(numara>0)
  {
  	a=numara%10;
  	numara=numara/10;
  	toplam=toplam*10+a;
  }
  if(numara==b)
	printf("polindrom");
  else
	printf("polindrom deðil");*/
	
	
 /*int sayilar[]={1,2,3,4,5,6,7};
 int i;
 int faktoriyel=1;
 for(i=1;i<7;i++)
 {
 	faktoriyel*=sayilar[i];
 }
  printf("%d",faktoriyel);*/
  
  
/* int sayilar[2][3]={10,20,30,40,50,60};
 int i,j;
 for(i=0;i<2;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("%d ",sayilar[i][j]);
	}
	printf("\n");
 }*/
 
/* int satir,sutun;
 int i,j,k,n;
 
printf("satýr");
scanf("%d" ,&satir);
printf("sutun");
scanf("%d" ,&sutun);

int matris[satir][sutun];
for(i=0;i<satir;i++)
{
	for(j=0;j<sutun;j++)
	{
		printf("[%d] [%d]" ,i+1,j+1);
		scanf("%d" ,&matris[i][j]);
	}
}

for(k=0;k<satir;k++)
{
	for(n=0;n<sutun;n++)
	{
		printf("%d " ,matris[k][n]);
	}
	printf("\n");
}*/

/*int mat1[2][2]={1,2,3,4};
int mat2[2][2]={5,6,7,8};
int toplam[2][2];
int i,j,k,l;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		toplam[i][j]=mat1[i][j]+mat2[i][j];
	}
}
for(k=0;k<2;k++)
{
	for(l=0;l<2;l++)
	{
		printf("%d " ,toplam[k][l]);
	}
	printf("\n");
}*/

/*int a,b;
srand(time(NULL));
for(a=1;a<=10;a++)
{
	b=rand() %100 +1;
	printf("%d\n" ,b); 
}*/

/*int m[2][2]={{1,2},
             {3,4}};

printf("%d" ,m[0][1]);*/

/*int i;
float ort;
float toplam=0.0;
float dizi[8];
for(i=0;i<8;i++)
{
	printf("%d . deðer",i+1);
	scanf("%f" , &dizi[i]);
	toplam+=dizi[i];
}ort=toplam/8;
printf("ortalama: %f" , ort);*/

/*int d[10];
int i;
for(i=0;i<10;i++)
{
	printf("%d . degeri:" , i+1);
	scanf("%d" ,&d[i]);
	if(d[i]==-1)
		break;
	else
		printf("%d . terimin karesi: %d" ,i+1,d[i]*d[i]);
		
	printf("\n");
}*/



/*int d[10];
int i;
for(i=0;i<10;i++)
{
	printf("%d . terim :", i+1);
	scanf("%d" ,&d[i]);
}
// tersten yazdýrma
for(i=9;i>=0;i--)
{
	printf("%d" ,d[i]);
}*/

/*int i;
int j;
int dizi[5];
printf("bir sayý giriniz");
scanf("%d" , &i);
if(i<=99999)
{
	while(i>0)
	{
		dizi[j]=i%10;
		printf("%d-" , dizi[j]);
		i=i/10;
		
	}
}
else
printf("lutfen max bes basamaklý bir sayý giriniz");*/

/*char s[40];
int k=0;
printf("bir þeyler yazýn");
gets(s);

//karakter sayýsý uzunluk
while(s[k]!='\0')
{
	k++;
}
printf("uzunluk: %d" ,k);*/

/*int i=0;
char str[246];
printf("küçük harfle birþeyler giriniz");
gets(str);
while(str[i]!=NULL)
{
	if(str[i]>'a' && str[i]<'z')
	{
		str[i]-=32;
		i++;
	}

}
puts(str);*/
/*int i;
int j;
int mat1[2][2];
int mat2[2][2];
int mat3[2][2];
// mat1
printf("mat 1 deðerler");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("[%d][%d] deger:" , i+1,j+1);
		scanf("%d" ,&mat1[i][j]);
	}
}
 //mat2
 printf("mat 2 deðerler");

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("[%d][%d] deger:" , i+1,j+1);
		scanf("%d" ,&mat2[i][j]);
	}
}

//toplam
printf("mat 3 deðerler");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		mat3[i][j]=mat2[i][j]+mat1[i][j];
		printf("%d" , mat3[i][j]);
		
	}
}*/

/*int dizi[10][2];
int i;
int j;
int toplam1=0;
int ort_boy;
int toplam2=0;
int ort_kilo;
//deðer verme
for(i=0;i<10;i++)
{
	for(j=0;j<2;j++)
	{
		printf("[%d][%d] deger" , i+1,j+1);
		scanf("%d" ,&dizi[i][j]);
		
	}
}

for(i=0;i<10;i++)
{
	for(j=0;j=0;j++)
	{
		
		toplam1+=dizi[i][0];
		
	}
	
}
ort_boy=toplam1/10;
//kilo
for(i=0;i<10;i++)
{
	for(j=1;j=1;j++)
	{
		
		toplam2+=dizi[i][1];
		
	}
	
}
ort_kilo=toplam2/10;

printf("ortboy:%d" ,ort_boy);
printf("ortkilo:%d" ,ort_kilo);*/

/*void foo();
int main()
{
	foo();
	return 0;
}
void foo()
{
	printf("2");
}*/
/*int sum(int a,int b)
{
	return a+b;
}
	
int main()
{
	printf("%d\n" ,sum(2,2));
	return 0;
}*/




#include <stdio.h>
int tablo(int a) {
int i;
if (a<=10) {
for (i = 1; i<11; i++) 
printf("%-3d", a*i);
printf("\n");
return tablo(a + 1);
}
else return 1;
}
int main(void){
int x = 1;
tablo(x);
return 0;
}





	
	

