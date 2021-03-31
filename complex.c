/**
 * @file complex.c
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include"unity.h"
#include"unity_internals.h"
#include"complex.h"

/**
 * @brief Addition Of Complex Number
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int add(complex_t *c_num1,complex_t *c_num2){
    if(c_num1==NULL || c_num2==NULL){                             //Check Null Value
        printf("Error\n");
        return ERROR;
    }
    complex_t sum;
    sum.real=c_num1->real + c_num2->real;
    sum.imaginary=c_num1->imaginary + c_num2->imaginary;
    printf("Sum = %f + (%.0f)i\n",sum.real,sum.imaginary);            // Dispaly Output
    return SUCCESS;
}

/**
 * @brief Subtraction of Complex Number
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int sub(complex_t *c_num1,complex_t *c_num2){
    if(c_num1==NULL || c_num2==NULL){                   //checking for null value
        printf("Error\n");
        return ERROR;
    }
    complex_t diff;
    diff.real=c_num1->real - c_num2->real;
    diff.imaginary=c_num1->imaginary - c_num2->imaginary;
    printf("Difference = %f + (%.0f)i\n",diff.real,diff.imaginary);        //output
    return SUCCESS;
}

/**
 * @brief Multipilcation Of Complex Number
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int multiply(complex_t *c_num1,complex_t *c_num2){
    if(c_num1==NULL || c_num2==NULL){                   //checking for null value
        printf("Error\n");
        return ERROR;
    }
    complex_t mul;
    mul.real=(c_num1->real*c_num2->real)-(c_num1->imaginary * c_num2->imaginary);
    mul.imaginary=(c_num1->real * c_num2->imaginary)+(c_num1->imaginary * c_num2->real);
    printf("multiplication= %f+ (%.0f)i\n",mul.real,mul.imaginary);    //output
    return SUCCESS;
}

/**
 * @brief Division Of complex Number
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int div(complex_t *c_num1,complex_t *c_num2){
    if(c_num1==NULL || c_num2==NULL){                    //checking for null value
        printf("Error\n");
        return ERROR;
    }
    int a,b,c;
    if(c_num2->real == 0 && c_num2->imaginary == 0){             //check if there are any zero value
      printf("Division by 0 + 0i isn't allowed.\n");
      return ERROR_DIV_BY_0;
    }
    else                                               //checking different scenario of divided values
    {
        a = c_num1->real * c_num2->real + c_num1->imaginary * c_num2->imaginary;
        b = c_num1->imaginary * c_num2->real - c_num1->real * c_num2->imaginary;
        c = c_num2->real * c_num2->real + c_num2->imaginary * c_num2->imaginary;

        if (a%c == 0 && b%c == 0)                
        {
          if (b/c >= 0)
            printf("Division of the complex numbers = %d + %di\n", a/c, b/c);
          else
            printf("Division of the complex numbers = %d %di\n", a/c, b/c);
        }
        else if (a%c == 0 && b%c != 0)
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d + %d/%di\n", a/c, b, c);
          else
            printf("Division of two complex numbers = %d %d/%di\n", a/c, b, c);
        }
        else if (a%c != 0 && b%c == 0)
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d/%d + %di\n", a, c, b/c);
          else
            printf("Division of two complex numbers = %d %d/%di\n", a, c, b/c);
        }
        else
        {
          if (b/c >= 0)
            printf("Division of two complex numbers = %d/%d + %d/%di\n",a, c, b, c);
          else
            printf("Division of two complex numbers = %d/%d %d/%di\n", a, c, b, c);
        }
    }
    return SUCCESS;
}