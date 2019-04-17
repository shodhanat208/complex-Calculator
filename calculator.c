/******************************************************************************
Implementation :
This program is to create a calculator to perform the arithmetic operations of addition, subtraction,
multiplication and division, on complex numbers.
Formula:
𝑋 = 𝑧1 + 𝑧2 = (𝑎 + 𝑏𝑖) + (𝑐 + 𝑑𝑖) = (𝑎 + 𝑐) + (𝑏 + 𝑑)
𝑧1 − 𝑧2 = (𝑎 + 𝑏𝑖) − (𝑐 + 𝑑𝑖) = (𝑎 − 𝑐) + (𝑏 − 𝑑)𝑖
𝑧1 ∗ 𝑧2 = (𝑎 + 𝑏𝑖) ∗ (𝑐 + 𝑑𝑖) = (𝑎𝑐 − 𝑏𝑑) + (𝑏𝑐 + 𝑎𝑑)𝑖
𝑧1

*******************************************************************************/

#include <stdio.h>

void complex_addition(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag);
void complex_substraction(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag);
void complex_multiplication(float in1_real, float in1_imag,float in2_real, float in2_imag, float* out3_real, float* out3_imag);
void complex_division(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag);

int main()
{
   float z1_real, z1_imag, z2_real, z2_imag, z3_real, z3_imag;
   char operation; 
printf("enter the real part of z1: ");
scanf("%.1f", &z1_real);
printf("enter the imaginary part of z1: ");
scanf("%.1f", &z1_imag);
printf("enter the real part of z2: ");
scanf("%.1f", &z2_real);
printf("enter the imaginary part of z2: ");
scanf("%.1f", &z2_imag);
printf("Enter the operation you would like to perform (+, -, *, /): ");
operation = getchar();
scanf("%c\n", &operation);
        if(operation == '+')
            {
                complex_addition(z1_real, z1_imag, z2_real, z2_imag, &z3_real, &z3_imag);
                printf("Result: %.3f+%.3fi\n", z3_real, z3_imag);
            }
        else if(operation == '-')
            {
                complex_substraction(z1_real, z1_imag, z2_real, z2_imag, &z3_real, &z3_imag); 
                printf("Result: %.3f+%.3fi\n", z3_real, z3_imag);
            }
        else if(operation == '*')
            {
                complex_multiplication(z1_real, z1_imag, z2_real, z2_imag, &z3_real, &z3_imag); 
                printf("Result: %.3f+%.3fi\n", z3_real, z3_imag);
            }
        else if(operation == '/')
            {
                complex_division(z1_real, z1_imag, z2_real, z2_imag, &z3_real, &z3_imag); 
                printf("Result: %.3f+%.3fi\n", z3_real, z3_imag);
            }
        else
            {
            printf("invalid input ");
            }  
        
    return 0;
}
 void complex_multiplication(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag)
{
    *out3_real = in1_real*in2_real - in1_imag*in2_imag;
    *out3_imag = in1_imag*in2_real + in1_real*in2_imag;
}
void complex_addition(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag)
{
    *out3_real = in1_real+in2_real;
    *out3_imag = in1_imag+in2_imag;
}
void complex_substraction(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag)
{
    *out3_real = in1_real-in2_real;
    *out3_imag = in1_imag-in2_imag;
}
void complex_division(float in1_real, float in1_imag, float in2_real, float in2_imag, float* out3_real, float* out3_imag)
{
    *out3_real = (in1_real*in2_real + in1_imag*in2_imag)/((in1_imag*in1_img)+(in2_imag*in2_img));
    *out3_imag = (in1_imag*in2_real - in1_real*in2_imag)/((in1_imag*in1_img)+(in2_imag*in2_img));
}
