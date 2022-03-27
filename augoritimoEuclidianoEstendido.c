#include <stdio.h>

int main(){
	int d,n,r,q,mdc;
	int x[100];
	int y[100];
	x[0] = 1;
	x[1] = 0;
	y[0] = 0;
	y[1] = 1;
	int i = 0;
	printf("Digte o D e o N do algoritimo euclidiano\n");
	scanf("%d %d",&d ,&n);
	printf("\n\n\nResto  Q   X   Y\n");
	printf(" %d   #   %d   %d\n",d,x[i],y[i]);
	printf(" %d   #   %d   %d",n,x[i+1],y[i+1]);
	do{	
	r = d%n;
	q = d / n;
	x[i+2] = x[i] - q*x[i+1];
	y[i+2] = y[i] - q*y[i+1];
	printf("\n %d   %d   %d   %d",r,q,x[i+2],y[i+2]);
	if(r == 0){
	 mdc = n;
	}
	d = n;
	n = r;
	i++;
	}while(r != 0);
	printf("\n\n\nO MDC = %d\nX = %d\nY = %d\n\n\n\n",mdc,x[i],y[i]);
	return 0;
}