/**
 * @file complex.h
 * @author your name (Himanshu)
 * @brief 
 * @version 0.1
 * @date 2021-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __COMPLEX_H__
#define __COMPLEX_H__

/**
 * @brief Error values
 * 
 */
typedef enum error_t {
    SUCCESS = 1,             // Successful operation
    ERROR = 0,              // Error in operation
    ERROR_DIV_BY_0 = -1       // Division By zero error
}error_t;

/**
 * @brief Structure for complex number
 * 
 */
typedef struct complex_t{
    float real;
    float imaginary;

} complex_t;
/**
 * @brief Addition
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int add(complex_t* c_num1,complex_t* c_num2);
/**
 * @brief Subtraction
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int sub(complex_t* c_num1,complex_t* c_num2);
/**
 * @brief Multiplication
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int multiply(complex_t* c_num1,complex_t* c_num2);
/**
 * @brief Division
 * 
 * @param c_num1 
 * @param c_num2 
 * @return int 
 */
int div(complex_t* c_num1,complex_t* c_num2);

#endif