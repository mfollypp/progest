int main(){
	int n;
	printf("Quantas pessoas?\n");
	scanf("%d", &n);
	float alturas[n];
	int idades[n];
	char sexos[n];
	int contadorMulheres = 0;
	int contadorHomens = 0;
	for(int i =0; i<n; i++){
		printf("Qual o sexo (M ou F)?\n");
		getchar();
		*(sexos+i) = getchar();
		printf("Qual a altura?\n");
		scanf("%f", alturas+i);
		printf("Qual a idade?\n");
		scanf("%d", (idades+i));
		if((*(idades+i)>=20 && *(idades+i) <=35) && (*(sexos+i) == 'F')){
			contadorMulheres++;
		}
		if((*(alturas+i)>1.80) && (*(sexos+i) == 'M')){
			contadorHomens++;
		}
	}printf("%d homens com altura maior que 1,80m\n", contadorHomens);
	printf("%d mulheres com idade entre 20 e 35 anos\n", contadorMulheres);
	while(1){}
}