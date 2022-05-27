#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3LabC.h"


int main(){

    float radius;
	float surface = 0;
	float volume = 0;

    printf("Please enter the radius of the sphere in Centimeters : ");
    scanf("%f", &radius);
    sphere(radius, &surface, &volume);
    printf("The surface area computed is : %f\nThe volume computed is : %f\n\n", surface, volume);
    //End of Sphere Function

    //Volume of Cylinder Function
    float height;
    printf("Enter the radius for the cylinder : ");
    scanf("%f", &radius);
    printf("\nEnter the height for the cylinder : ");
    scanf("%f", &height);
    float result = volCylinder(radius, height);
    printf("\n\nThe volume of the cylinder is : %f cm.", result);

    int arrsize;
    printf("\nPlease enter the size of your array : ");
    scanf("%i", &arrsize);

    float x[7];
    float input;
    float sum = 0.0;

    for(int i = 0; i <= arrsize-1; i++){
        printf("Enter your number : ");
        scanf("%f", &input);
        x[i] = (float)input;
    }
    printf("[");
    for(int i = 0; i <= arrsize - 1; i++){
        printf("%f", x[i]);
        sum += x[i];
        if(i != arrsize - 1){
        printf(" , ");
        }
    }
    printf("]");
    printf("\nThe sum of the unsorted array : ");
    printf("%f\n", (float)sum);

    sumFloats(x, arrsize);
    float angle;
    int calc;
    printf("\n\nHow many angles would you like to compute using the 'sin' function : \n");
    scanf("%i", &calc);
    for(int i = 1; i <=calc; i++){
        printf("\n\nEnter the degree you would like to compute : ");
        scanf("%f", &angle);
        printf("\nSin(%f) = %lf", angle, sine(angle));
    }
    
    
printf("\n\n");
return 0;
}
