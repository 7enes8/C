#include<stdio.h>
 int main()
 {
 	int no;
	int vize;
	int final;
	int gecme_notu;
 	printf("��renci numaras� giriniz:");
 	scanf("%d" , &no);
 	printf("vize notu giriniz:");
 	scanf("%d" , &vize);
 	printf("final notu giriniz:" );
 	scanf("%d" , &final);
 	vize=(vize * 40) / 100;
 	final=(final * 60) / 100;
 	gecme_notu=vize + final;
 	printf("��renci no: %d" , no);
 	printf("ge�me notu: %d" , gecme_notu);
 	
 	return 0;
 }
