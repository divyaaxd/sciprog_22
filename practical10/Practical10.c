#include<stdio.h>

void hannoi(int n, int a, int c, int b)
{
	if(n==1)
	{
		printf("Move disk from %d to %d\n",a,c);
	}
	else{
		hannoi(n-1,a,b,c);
		printf("Move disk from %d to %d\n",a,c);
		hannoi(n-1,b,c,a);
	}
}

void main()
{
	int x=3;
	printf("Solution for %d disks\n",x);
	hannoi(x,1,3,2);
	
}
