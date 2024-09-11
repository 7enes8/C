#include<stdio.h>
#include<stdlib.h>
//diziyi tersten yazdýrma (pointerla)
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

//Dinamik bellek ayýrma yöntemi kullanýlarak en büyük sayýyý bulan programý C dilinde yazýnýz.
//Dizinin boyutunu kullanýcýya sorunuz ve dizinin elemanlarýný kullanýcýdan alýnýz. 
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
//Bir kelimenin harflerini tersten ekrana basan programý pointer kullanarak C dilinde yazýnýz. 
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
		printf("%c",*p);//tek tek yazacaðý için char tipinde olmalý
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
	printf("ek elemanlarý giriniz:");
	for(i=boyut;i<yeniBoyut;i++){
		scanf("%d",&ptr[i]);
		
	}
	printf("dizinin son durumu:");
	for(i=0;i<yeniBoyut;i++){
		printf("%d. eleman:%d\n",i+1,*(ptr+i));
	}
}


















