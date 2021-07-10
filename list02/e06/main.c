int main(){
	int sorteado = rand() % 100;
	int tentativas = 0;
	while(1){
		int input;
		printf("Qual o numero?\n");
		scanf("%d\n", &input);
		if(input >  sorteado){
			printf("Maior\n");
			tentativas++;
		}else if(input<sorteado){
			printf("Menor\n");
			tentativas++;
		}else{
			printf("Acertou! %d tentativas\n", tentativas);
		}
	}
}