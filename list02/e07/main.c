int main(){
	while(1){
		int horas;
		float valor;
		float salario;
		printf("Insira a quantidade de horas seguida pelo valor de cada hora\n");
		scanf("%d %f", &horas, &valor);
		if(horas<=40){
			salario = horas*valor;
		}else if(horas>40 && horas <=60){
			salario = 40 * valor + (horas - 40)*(valor*1.5);
		}else{
			salario = 40 * valor + (20)*(valor*1.5) + (horas-60)*(valor*2);
		}
		printf("Salario: %f\n", salario);
	}
}