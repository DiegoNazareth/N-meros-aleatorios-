//llenar una matriz con numeros aleatorios 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int numero[4][4],i,j;
	srand(time(NULL));
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
		numero[i][j]=1+rand()%((10+1)-1);
	}
	}		
	
    for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		
	printf("%4d " , numero[i][j]);
    }
     printf("\n");
    }
	return(0);
}
