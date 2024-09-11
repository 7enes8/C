#include<stdio.h>
/*int carpma( int x , int y){
	int sonuc;
	if(y==0)
		return 0;
	else
		return (x+carpma(x,y-1));
	 	 
	 	
	
		

	
	
}

int main(){
	int sayi1;
	int sayi2;
	printf("iki sayi giriniz:");
	scanf("%d %d", &sayi1,&sayi2);
	printf("çarpma=%d",carpma(sayi1,sayi2));
	return 0;
	
}*/
/*int us( int x , int y){
	int sonuc;
	if(y==0)
		return 1;
	else if(y<0)
	 	return 1 ;
	else
		return (x*us(x,y-1));
	 	 
	 	
	
		

	
	
}

int main(){
	int sayi1;
	int sayi2;
	printf("taban sayi giriniz:");
	scanf("%d", &sayi1);
	printf("üs sayi giriniz:");
	scanf("%d", &sayi2);
	printf("çarpma=%d",us(sayi1,sayi2));
	return 0;
}*/

/*int bolum( int x , int y){
	int i;
	if(x<y || y==0)
		return 0;
	
		
	else
		return 1+bolum(x-y,y);
	    
		
	}

int main(){
	int sayi1;
	int sayi2;
	printf("bolunen  sayi giriniz:");
	scanf("%d", &sayi1);
	printf("bolen sayi giriniz:");
	scanf("%d", &sayi2);
	printf("bolum=%d",bolum(sayi1,sayi2));
	return 0;}*/


int sekil(int x,int y){
	if(x<0)
		return 0;
	else
		printf("*\n" ,2*sekil(x-1,y));
	
}







	
int main(){
	int a=8;
	int b=3;
	sekil(a,b);
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	


