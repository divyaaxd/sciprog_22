#include<stdio.h>
#include<math.h>

int gcd_ite(int x, int y);
int gcd_rec(int x, int y);

int main()
{
	int x,y;
	printf("Enter 2 positive numbers:\n");
	scanf("%d %d",&x,&y);
	
	if(x<=0 || y<=0)
	{
		printf("The numbers are negative");
	}
	
	printf("Iterative Gcd of %d and %d is %d\n",x,y,gcd_ite(x,y));
	printf("Recursive Gcd of %d and %d is %d\n",x,y,gcd_rec(x,y));
	
}

//iterative function

int gcd_ite(int x, int y)
{
	int temp;
	while(y!=0)
	{
		temp=y;
		y=x%y;
		x=temp;
	}
	return x;
}

// Recursive function

int gcd_rec(int x, int y)
{
	if(y==0){
	return x;
	}
	else{
		return gcd_rec(y,x%y);
	}
}
