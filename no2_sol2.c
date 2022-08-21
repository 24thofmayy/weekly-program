#include <stdio.h>

int main() {
    float w , h;
    printf("YOUR WEIGHT(KG) : ");
    scanf("%f",&w);
    printf("YOUR HEIGHT(M) : ");
    scanf("%f",&h);
    float BMI = w/(h*h);
    printf("BMI : %f\n",BMI);

    switch (BMI)
    {
        case BMI < 18.5:
            printf("UNDERWEIGHT");
            break;
        case 18.5 <= BMI && BMI <= 24.9:
            printf("NORMAL");
            break;
        case 25.0 <= BMI && BMI <= 29.9:
            printf("OVERWEIGHT");
            break;
        default:
            printf("OBESE");
            break;
    }
    return 0;
}