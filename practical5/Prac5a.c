#include<stdio.h>
void fib(int F1,int F2, int Fn)
{
	Fn=F1+F2;
}

int main()
{
	int n, s[50],s1=0,s2=1,sum=0,i;
	printf("Enter the sequence length :\n");
	scanf("%d",&n);
	printf("The Sequence is\n");
	printf("%d, %d",s1,s2);
	for (i=0;i<n-2;i++)
	{
		sum=s2+s1;
		s1=s2;
		s2=sum;
		s[i]=sum;
		printf(", %d",s[i]);
		
	}
}
