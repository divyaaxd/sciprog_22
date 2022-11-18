#include<stdio.h>
#include<math.h>

float deg_rad(float theta){
	return M_PI* theta/180.0;
}

float trap(float x, float y, int N, float fn[N+1]){
	float sum= fn[0]+ fn[N];
	int i=0;
	for (i=1; i< N; i++){
		sum = sum + 2*fn[i];
	}
	return (x-y)*(sum)/(2*N);
}

int main(void) {
	float a=0.0;
	float b=60.0;
	int N=12;
	float stepsize = (b-a)/N;
	float tan_arr[N + 1];
	int i=0;

	for(i=0;i<=N;i++){
		tan_arr[i]=tan(deg_rad(stepsize*i));
	}

	float ans = trap(deg_rad(a), deg_rad(b), N , tan_arr);
	printf(" Area of the term is : %f\n", ans);	
}

	

