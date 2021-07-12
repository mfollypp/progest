int main(){
	while(1){
		char cadeia[1000], inverte[1000];
		int i, j, count = 0;
		printf("Escreva o numero:\n");
		scanf("%s", &cadeia);
		while(cadeia[count] != '\0'){
			count++;
		}
		j = count -1;
		for(i=0; i< count;i++){
			inverte[i] = cadeia[j];
			j--;
		}
		printf("%s\n", inverte);
	}
}