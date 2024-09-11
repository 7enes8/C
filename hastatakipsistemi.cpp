//hasta takip sistemi
#include<stdio.h>
#define n  3


struct hasta {
	int hastaNo;
    char ad[50];
	int yas;
	char hastalik_bilgisi[50];          
};
main(){
	
	FILE *mfPtr;
	struct hasta hasta_data[n];
	if((mfPtr=fopen("hasta.dat","r+")) == NULL)
		printf("Dosya acýlamadi");
	else{
	int i=0;
	printf("****************************\n");
	for(i=0;i<n;i++){
		
		printf("Hastano:");
		scanf("%d ",hasta_data[i].hastaNo);
		printf("Ad giriniz:");
		scanf("%s",hasta_data[i].ad );
		printf("Yas giriniz:");
		scanf("%d",hasta_data[i].yas );
		printf("Hastalýk bilgisi giriniz:");
		scanf("%s",hasta_data[i].hastalik_bilgisi );
		fread(&hasta_data,sizeof(struct hasta),1,mfPtr);
		fwrite(&hasta_data,sizeof(struct hasta),1,mfPtr);
	
	}
		
	}
		
	
	
}
