#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*int main(){
	int dizi[]={1,2,3};
	int boyut=sizeof(dizi)/sizeof(dizi[0]);
	int *ptr=dizi+boyut-1;
	for(int i=boyut-1;i>=0;i--){
		printf("%d",*ptr);
		ptr--;
	}	
	
	
}*/

/*int main(){
	int boyut;
	int maks;
	int *dizi;
	printf("boyut giriniz:");
	scanf("%d" ,&boyut);
	dizi=(int*)malloc(boyut*sizeof(int));
	for(int i=0;i<boyut;i++){
		scanf("%d",&dizi[i]);
	}
	maks=dizi[0];
	for(int i=1;i<boyut;i++){
		if(dizi[i]>maks)
			maks=dizi[i];
			
	}
	printf("maksimum:%d",maks);
}*/


/*main(){
	char str[100];
	int a;
	char *p;
	printf("bir string giriniz:");
	scanf("%s",&str);
	a=strlen(str);
	p=str;
	for(int i=a-1;i>=0;i--){
		printf("%c" ,p[i]);
	}
}*/
main(){
	int boyut,*dizi;
	int yeniBoyut;
	scanf("%d",&boyut);
	dizi=(int*)malloc(boyut*sizeof(int));
	for(int i=0;i<boyut;i++){
		scanf("%d",&dizi[i]);
	}
	printf("yeni boyut giriniz:");
	scanf("%d",&yeniBoyut);
	dizi=(int*)realloc(dizi,yeniBoyut*sizeof(int));
	for(int i=boyut;i<yeniBoyut;i++){
		scanf("%d",&dizi[i]);
	}
	for(int i=0;i<yeniBoyut;i++){
		printf("%d",dizi[i]);
	}
	
	
	
}





















