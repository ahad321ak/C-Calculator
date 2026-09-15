#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265358979323846

int main(){
    // Calculator
    printf("Welcome to Calculator V 0.1\n");
    int trig_ratio = 0;
    float a = 0.0;
    float b = 0.0;
    float angle = 0.0;
    float answer = 0.0;
    char operator = '\0';


    printf("Choose an operator(+ - * / S(quare) R(oot) P(ower) L(og) or T(rigonometry)): ");
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
    
    case 'L':
        printf("Choose a Number: ");
        scanf("%f", &a);

        if (a >= 0){
            answer = log(a);
            printf("The log of %.2f is %f",a ,answer);
            break;
        }
        else{
            printf("You can not take log of a negative number.");
            break;
        }
    case 'T':
        printf("Enter an Angle: ");
        scanf("%f", &angle);
        getchar();
        angle = angle * PI/180;
        printf("Select the number of the trigonometic ratio you want!\n");
        printf("1. Sin\n");
        printf("2. Cos\n");
        printf("3. Tan\n");
        printf("4. Cot\n");
        printf("5. Sec\n");
        printf("6. Cosec\n");
        scanf("%d", &trig_ratio);
        getchar();
        switch (trig_ratio)
        {
        case 1:
            answer = sin(angle);
            printf("The answer is %.2f", answer);
            break;
        case 2:
            answer = cos(angle);
            printf("The answer is %.2f", answer);
            break;
        case 3:
            answer = tan(angle);
            printf("The answer is %.2f", answer);
            break;
        case 4:
            answer = 1 / tan(angle);
            printf("The answer is %.2f", answer);
            break;
        case 5:
            answer = 1 / cos(angle);
            printf("The answer is %.2f", answer);
            break;
        case 6:
            answer = 1 / sin(angle);
            printf("The answer is %.2f", answer);
            break;
        default:
            printf("Enter a Valid operation");
            break;
        }
        break;
    default:
        printf("Enter a valid operator!(+ - * / T)");
    }

}