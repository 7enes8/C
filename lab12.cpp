#include<stdio.h>
float ort(float,float);

 main()
{
	float vize;
	float final;
	printf("vize giriniz:");
	scanf("%d" , &vize);
	printf("final giriniz:");
	scanf("%d" , &final);
	if(ort(vize,final)<60)
		printf("kald�");
    else
    	printf("ge�ti");
    	
		
	
}
float ort(float vize,float final)
{
	return (vize/40*100+final/60*100);
}
