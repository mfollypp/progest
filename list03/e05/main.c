float max_vet (int n, float *vet){
	float maior = *(vet);
	for(int i = 0; i<n; i++){
		if((*(vet+i))>maior){
			maior = *(vet+i);
		}
	}
	return(maior);
}
int main(){
	float vet[4] = {100.0,10.0,150.0,40.0};
	printf("%f", max_vet(4, vet));
	while(1){}
}