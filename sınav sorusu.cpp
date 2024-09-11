#include<stdio.h>
void printArray(int arr[][4]);
main()
{   int i,j,toplam=0,ort,id[4],max,a;
	int dizi[4][4]={{67,76,55,0},
	               {34,79,76,0},
	               {56,68,57,0},
	               {66,89,65,0}};
	printArray(dizi);
	for(i=0;i<4;i++){
		toplam=0;
		for(j=0;j<3;j++){
			toplam+=dizi[i][j];
		}
		dizi[i][3]=toplam/3;
	}
	printf("\n\n");printArray(dizi);
	
	for(i=0;i<4;i++){
		id[i]=dizi[i][3];
		printf("%d " , id[i]);
		}
	
	for(i=0;i<4;i++){
		if(id[i]>max){
			max=id[i];
		}
		
		
	}printf("max ort:%d" ,max);
			
	for(i=0;i<4;i++){
		if(id[i]==max){
			printf("id:[%d]" , i+1);
		}
}
		
	
	
	
}
void printArray(int arr[][4])
{
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d " ,arr[i][j]);
		}
		printf("\n");
	}
}
