int divs(int n, int *max, int *min){
	*max = n, *min =1;
	int j = n;
	for(int i = 2; i<n; i++){
		if(n%i == 0){
			*max = i;
		}
		if (n%j == 0){
			*min = j;
		}
		j--;
	}
	if(*min == 1 && *max == n){
		return(0);
	}else{
		return(1);
	}