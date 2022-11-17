//Practical 3
#include<stdio.h>
#include<math.h>

int main(void){

    int N=12, i;
    float area, b_rad, mult_rad;
    float a=0.0, b_deg=60.0;

    b_rad= ((M_PI * b_deg)/180.0);

    printf("pi/3 in radians is %f \n", b_rad);

    //Sum of tan a and tan  b

    area=tan(a)+tan(b_rad);

    //Calculating at equidistant interval from 5 upto 60
    for(i=5;i<60; i+=5){
        area=area+2*tan((M_PI*i)/180.0);
    }
    mult_rad=(M_PI* (b_deg/(2*N)))/180.0;
    area=area * mult_rad;

    printf( "Approximate value is %f and actual value is %f", area, log(2.0));
    return 0;
}