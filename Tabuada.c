#include <stdio.h>

int main(){
	
	int num;
	char ok;
	int result;
	int i;
	
	do{
		
	printf("Digite a tabuada q deseja: ");
	scanf("%d", &num);
	
	for (i = 0; i < 11; i++){
		
		result = num * i;
		
		printf("%d * %d = %d \n", num, i, result);
		
	}
	
	
	printf("Desejar saber outra tabuada? [S/N] ");
	scanf(" %c", &ok);
 	
 	if(ok == 'N'){
 		
 		printf("Encerrando execuçao...");
 		
 		return 1;
	 }
	 
	} while (ok == 'S');
	
	return 0;
}
