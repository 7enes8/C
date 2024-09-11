#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int toplama(int,int);
int main(){
	int a=1;
	int b=2;
	printf("sonuc=%d",toplama(a,b));
}
int toplama(int c,int d){
	return c+d;
}*/

/*#include <stdio.h>
int sum (int num){
if (num != 0){
return (num % 10 + sum (num / 10));
}
else{
return 0;
}
}
int main(){
int num, result;
printf("Enter the number: ");
scanf("%d", &num);
result = sum(num);
printf("Sum of digits in %d is %d\n", num, result);
return 0;}*/
/*void fun(int n, int a, int b){
if (n <= 0)
return;
fun(n - 2, a, b + n);
printf("%d %d %d\n", n, a, b);
}
int main(){
	int a=5;
	int b=7;
	int n=10;
	fun(n,a,b);
	return 0;
}*/

/*int binary(int x){
	if(x==0)
		return 0;
	else
		return(x%2+10*binary(x/2));
}



int main(){
	int sayi;
	printf("bir sayi giriniz=");scanf("%d",&sayi);
	printf("binary=%d",binary(sayi));
}*/




/*#include <stdio.h>

float ortalama(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    return ((n - 1) * ortalama(arr, n - 1) + arr[n - 1]) / n;
}

int main() {
    int n, i;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);
    int arr[n];
    printf("Dizinin elemanlarýný girin:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Ortalama: %.2f\n", ortalama(arr, n));
    return 0;
}*/
/*double ortHesap(int b[],int i,int n){
	if(i==n-1)
		return b[i];
	if(i==0)
	 	return (b[i]+ortHesap(b,i+1,n))/n;
	return b[i]+ortHesap(b,i+1,n);
}





int main(){
	int dizi[]={1,2,3};
	int n=sizeof(dizi)/sizeof(dizi[0]);
	printf("sonuc:%lf",ortHesap(dizi,0,n));
}*/
int p(char str){
	if(n==NULL)
		return 
}

int main(){
	
	char str[50];
	gets(str);
	int n=strlen(const char *str);
	int sonuc=p(str,n);
	if(sonuc==0)
		printf("polindrom deðil");
	if(sonuc==1)
		printf("polindrom");
}










