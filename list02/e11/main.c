int main(){
	while(1){
		int x,y;
		printf("Insira dois numeros inteiros\n");
		scanf("%d %d", &x, &y);
		int power = pow(x,y);
		printf("%d\n", power);
	}
}