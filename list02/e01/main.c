#include <stdio.h>

int verifica_primo(int valor){
	for(int i=1;i<valor;i++){
		if(valor%i == 0 && i!=1) {
			return(0);
		}
	}
	return(1);
}
int main(){
	while(1){
		int valor;
		printf("Insira o valor a ser testado\n");
		scanf("%d", &valor);
		if(verifica_primo(valor) == 0){
			printf("NUMERO NAO PRIMO\n");
		}else{
			printf("NUMERO PRIMO\n");
		}
	}
}
