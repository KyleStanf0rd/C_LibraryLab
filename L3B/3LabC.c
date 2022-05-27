#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double fact(int num);
//A
void sphere(float radius, float *surface, float *volume){
    *surface = 4* PI * pow(radius, 2);
    float num = (float)4 / (float)3;
    *volume = (float)num*PI*pow(radius, 3);

}

//B
float volCylinder(float radius, float height){
    float volume;
    volume = PI * (float)pow(radius,2) *(float)height;
    return (float)volume;


}

//C
float sumFloats(float x[], int numFloats){
    //Lexicographic Order
    printf("\n\n");
    float sum = 0.0;
    for( int j = 0; j < numFloats - 1; j++ ){     // Reduces list length by 1 each pass.
		for( int k = j + 1; k < numFloats; k++ ){ // Moves smallest grade to top each pass.
			if( x[ j ] > x[ k ] ){    //Swap if out of order with current top of list.
				float temp = x[ j ];
				x[ j ] = x[ k ];
				x[ k ] = (float)temp;
			}
		}
	}

    printf("[");
    for(int i = 0; i <= numFloats - 1; i++){
        printf("%f", x[i]);
        sum += x[i];
        if(i != numFloats - 1){
        printf(" , ");
        }
    }
    printf("]");
    printf("\nThe sum of sorted array : %f", (float)sum);
    return(0);
}

//WORK IN PROGRESS//////////////////////////////	
//double sine(float angle){
    //int i = 1, s = 1, count= 1;
    //double ans = 0.0;
    //float radians = angle / 180.0 * PI;
    //double guess;
    //for(guess = radians; !(fabs(guess * guess - radians) < 0.000001); guess = (guess + s * (pow(radians,count) / fact(count)))){
        //count = count + 2;
        //s *= -1;
        //ans = guess;

    //}
    //return (double)guess;

//}
/////////////////////////////////////////////////

//D
double sine(float angle){
    int i = 1, s = 1 , count= 1;
    float ans = 0.0;
    float radians = angle / 180.0 * PI;
    for(count = 1; i <= 25; count += 2){
        ans += s * (pow(radians, count) / (double)fact(count));
        i += 1;
        s *= -1;
    }
    return (double)ans;
}

double fact(int num){
    int count;
    double s = 1;
    for(count = 1; count <= num; count++){
        s = s * count;
    }
    return (s);
}

