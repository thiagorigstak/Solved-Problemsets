#include <stdio.h>

int main(){
	int a;
	int i=0,k=0,l=0,m=0;
	for(int j=0 ; j<5 ; j++){
		scanf("%d",&a);
		if(a%2==0){
			i++;
		}else{
			k++;
		}
		if(a>0){
			l++;
		}else if(a<0){
			m++;
		}
	}
	printf("%d valor(es) par(es)\n",i);
	printf("%d valor(es) impar(es)\n",k);
	printf("%d valor(es) positivo(s)\n",l);
	printf("%d valor(es) negativo(s)\n",m);
	return 0;
}