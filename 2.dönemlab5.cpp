#include<stdio.h>
#include<stdlib.h>
//diziyi tersten yazd�rma (pointerla)
/*int main(){
	int n;
	int *p;
	int s[]={1,2,3};
	n=sizeof(s)/sizeof(s[0]);
	p=s+n-1;
	for(int i=n-1;i>=0;i--){
		printf("%d",*p);
		p--;
	}
	
	return 0;
}*/

/*int main(){
	int n;
	int *p;
	int s[]={1,2,3};
	n=sizeof(s)/sizeof(s[0]);
	p=s;
	for(int i=n-1;i>=0;i--){
		printf("%d",*(p+i));
		
	}
	
	return 0;}*/

//Dinamik bellek ay�rma y�ntemi kullan�larak en b�y�k say�y� bulan program� C dilinde yaz�n�z.
//Dizinin boyutunu kullan�c�ya sorunuz ve dizinin elemanlar�n� kullan�c�dan al�n�z. 
/*	int i;
	int *p;
	printf("eleman giriniz:");scanf("%d",&e);
	p=(int*)malloc(e*sizeof(int));
	for(i=0;i<e;i++){
		printf("%d. indis giriniz:",i);
		scanf("%d",&p[i]);
	}
	maks=*p;
	for(int i=1;i<e;i++){
		if(*(p+i)>maks)
			maks=*(p+i);
	}
	printf("maksimum sayi:%d",maks);
	free(p);
}*/
//Bir kelimenin harflerini tersten ekrana basan program� pointer kullanarak C dilinde yaz�n�z. 
/*int main(){
	char *p;
	char str[100];
	printf("kelime giriniz:");
	scanf("%s",&str);
	p=str;
	while(*p != '\0'){
		p++; 
	}
	p--;
	while(p>=str){
		printf("%c",*p);//tek tek yazaca�� i�in char tipinde olmal�
		p--;
		
	}
	return 0;
	
	
	
}*/

int main (){
	int *ptr;
	int i;
	int boyut;
	int yeniBoyut;
	printf("boyut giriniz:");
	scanf("%d",&boyut);
	ptr=(int*)malloc(boyut*sizeof(int));
	printf("eleman giriniz:");
	for(i=0;i<boyut;i++){
		scanf("%d",&ptr[i]);
		
	}

	printf("yeni boyut:");
	scanf("%d",&yeniBoyut);
	ptr=(int*)realloc(ptr,yeniBoyut*sizeof(int));
	printf("ek elemanlar� giriniz:");
	for(i=boyut;i<yeniBoyut;i++){
		scanf("%d",&ptr[i]);
		
	}
	printf("dizinin son durumu:");
	for(i=0;i<yeniBoyut;i++){
		printf("%d. eleman:%d\n",i+1,*(ptr+i));
	}
}


















