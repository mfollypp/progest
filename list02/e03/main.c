int get_fib(int valor){
	 if(valor == 1){
		 return(1);
	 }else if(valor == 2){
		 return (1);
	 }else{
		 return(get_fib(valor-1) + get_fib(valor-2));
	 }
}
int main(){
	while(1){
		int valor;
		printf("\nImprima quantos numeros da sequencia devem ser impressos\n");
		scanf("%d",&valor);
		for(int i=1; i<=valor; i++){
			printf("%d ", get_fib(i));
		}
	}
}