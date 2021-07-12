int main(){
	while(1){
		int x, y;
		printf("Insira os dois inteiros\n");
		scanf("%d %d", &x, &y);
		int maior = 1;
		for(int i = 1; i <= x; i++){
			if(x%i==0 && y%i==0){
				maior = i;
			}
		}
		printf("%d\n", maior);
	}
}