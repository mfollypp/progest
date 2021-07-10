int main(){
	while(1){
		int x, z, sum = 0, count = 0;
		printf("Insira o valor de X e Z, separados por espaco:\n");
		scanf("%d %d", &x, &z);
		if (x>z){
			printf("Insira um novo valor pra Z:");
			scanf("%d", &z);
		}
		for(int i=x; sum<=z; i++){
			sum = sum + i;
			count = count + 1;
		}
		printf("%d\n", count);
	}
}