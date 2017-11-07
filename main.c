//llenar un vector con numeros aleatorios 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int numero[4],i;
	srand(time(NULL));
	for(i=0;i<4;i++){
		numero[i]=1+rand()%((10+1)-1);
	}		
	
for(i=0;i<4;i++){
	
	printf("%d " , numero[i]);

}
	return(0);
}
