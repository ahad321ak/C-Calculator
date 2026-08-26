#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(){
    // Calculator
    printf("Welcome to Calculator V 0.1\n");
    float a = 0.0;
    float b = 0.0;
    float angle = 0.0;
    float answer = 0.0;
    char operator = '\0';
    char trig_ratio = '\0';

    printf("Choose an operator(+ - * / S(quare) R(oot) P(ower) or T(rigonometry)): ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        printf("Choose a number: ");
        scanf("%f", &a);
        
        printf("Choose another number: ");
        scanf("%f", &b);

        answer = a + b;
        printf("The answer is: %.2f", answer);
        break;
    case '-':
        printf("Choose a number: ");
        scanf("%f", &a);

        printf("Choose another number: ");
        scanf("%f", &b);
        
        answer = a - b;
        printf("The answer is: %.2f", answer);
        break;
    case '*':
        printf("Choose a number: ");
        scanf("%f", &a);

        printf("Choose another number: ");
        scanf("%f", &b);
        
        answer = a * b;
        printf("The answer is: %.2f", answer);
        break;
    case '/':
        printf("Choose a number: ");
        scanf("%f", &a);

        printf("Choose another number: ");
        scanf("%f", &b);
        if (b == 0){
            printf("You can't divide by zero");
            break;
        }
        else
        {
            answer = a / b;
            printf("The answer is: %.2f", answer);
            break;
        }
    case 'S':
        printf("Choose a Number: ");
        scanf("%f", &a);

        answer = a*a;
        printf("The square of %.2f is: %.2f",a ,answer);
        break;

    case 'R':
        printf("Choose a Number: ");
        scanf("%f", &a);
    
        answer = sqrt(a);
        printf("The square root of %f is: %.2f",a ,answer);
        break;

    case 'P':
        printf("Choose a Number: ");
        scanf("%f", &a);

        printf("Choose another Number: ");
        scanf("%f", &b);

        answer = pow(a, b);
        printf("The power of %.2f raised to %.2f is: %.2f",a ,b ,answer);
        break;

    case 'T':
        printf("Enter an Angle: ");
        scanf("%f", &angle);
        getchar();
        angle = angle * PI/180;
        printf("Select a trigonometic ratio!\n");
        printf("S(ine), C(osine), T(angent): ");
        scanf("%c", &trig_ratio);
        if (trig_ratio == 'S'){
            answer = sin(angle);
            printf("The answer is: %.2f", answer);
            break;
        }   
        else if (trig_ratio == 'C')
        {
            answer = cos(angle);
            printf("The answer is: %.2f", answer);
            break;
        }
        else if (trig_ratio == 'T')
        {
            answer = tan(angle);
            printf("The answer is: %.2f", answer);
            break;
        }
        else{
            printf("Enter a Valid Ratio");
        }
        break;
    default:
        printf("Enter a valid operator!(+ - * / T)");
    }

}