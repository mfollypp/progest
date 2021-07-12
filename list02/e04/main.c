int main(){
	char letra = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
	while(1){
		char input;
		printf("Qual a letra (maiuscula)?\n");
		scanf("%c\n", &input);
		if(input > letra){
		printf("Maior\n");
		}else if(input<letra){
			printf("Menor\n");
		}else{
			printf("Acertou!\n");
		}
	}
}