#include <stdio.h>

int main() {
    float w , h;
    printf("YOUR WEIGHT(KG) : ");
    scanf("%f",&w);
    printf("YOUR HEIGHT(M) : ");
    scanf("%f",&h);
    float BMI = w/(h*h);
    printf("BMI : %f\n",BMI);

    if (BMI < 18.5)
    {
        printf("UNDERWEIGHT");
    }
    else if (18.5 <= BMI && BMI <= 24.9)
    {
        printf("NORMAL");
    }
    else if (25.0 <= BMI && BMI <= 29.9 )
    {
        printf("OVERWEIGHT");
    }
    else
    {
        printf("OBESE");
    }
}