#include <stdio.h>

int main(){
	int d,n,r,q,mdc;

	printf("Digte o D e o N do algoritimo euclidiano\n");
	scanf("%d %d",&d ,&n);
	printf("\n\n\nResto  Q\n");
	do{	
	r = d%n;
	q = d / n;
	printf("\n %d   %d",r,q);
	if(r == 0){
	 mdc = n;
	}
	d = n;
	n = r;
	}while(r != 0);
	printf("\n\n\nO MDC = %d\n\n\n\n",mdc);
	
	return 0;
}