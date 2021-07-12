float media(int n, float *v){
	float media = 0;
	for(int i = 0; i<n; i++){
			media = media + *(v+i);
	}
	media = media/n;
	return(media);
}
int main(){
	float v[4] = {1.0,3.0,4.5,8.0};
	float mediaV = media(4, v);
	printf("%f", mediaV);
	while(1){}
}