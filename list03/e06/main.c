int maiores(int n, int * vet, int x){
	int counter = 0;
	for(int i =0; i<n; i++){
		if(*(vet+i)>x){
			counter++;
		}
	}return(counter);
}