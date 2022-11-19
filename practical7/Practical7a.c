#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fact(int n);
int main()
{
	int i,n;
	double e=1.0,*a;
	
	printf("Enter the order\n");
	scanf("%d",&n);
	

a=malloc(n*sizeof(double));

for(i=0;i<n;i++)
{
	a[i]=	1.0/((double)fact(i+1));
	printf("The term for order %d is %0.4f  \n",i,a[i]);
	e=e+a[i];
}

free(a);
printf("Estimated value of e: %0.4f with difference %0.4f",e,e-exp(1.0));
}

int fact(int n)
{
	if(n<0){
		printf("Enter positive value:");
	}
	else if(n==0){
		return 1;
	}
	else{
		return (n*fact(n-1));
	}
}

