#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Kac kelime girilecek: ");
    scanf("%d",&n);
 
    char **kelimeler = (char**)malloc(n*sizeof(char*));
 
    for(int i=0; i<n; i++){
        kelimeler[i]=(char*)malloc(30*sizeof(char));
        printf("Kelime %d: ",i+1);
        scanf("%s",kelimeler[i]);
    }
 
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(kelimeler[j],kelimeler[j+1])>0){
                char *temp=(char*)malloc(30*sizeof(char));
                strcpy(temp,kelimeler[j]);
                strcpy(kelimeler[j],kelimeler[j+1]);
                strcpy(kelimeler[j+1],temp);
                free(temp);
            }
        }
    }
    printf("***************************\n");
    for(int i=0; i<n; i++){
        printf("Kelime %d : %s\n",i+1,kelimeler[i]);
        free(kelimeler[i]);
    }
 
    return 0;
}
