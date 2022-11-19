#include<stdio.h>
#include<math.h>

int matmult(int n, int p, int q, double a[n][p], double b[p][q], double c[n][q]){
int i,j,k;
	for(i=0;i<n;i++)    
	{    
		for(j=0;j<q;j++)    
		{    
    		for(k=0;k<p;k++)    
			{    
				c[i][j]=c[i][j]+a[i][k]*b[k][j];    
			}    
		}    
	}
}
