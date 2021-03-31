/**
 * @file test_complex_calculator.c
 * @author Himanshu
 * @brief 
 * @version 0.1
 * @date 2021-03-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"unity/unity.h"
#include "unity/unity_internals.h"
#include "complex.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/**
 * @brief We can add more numbers for test case.
 * 
 */
complex_t c_num1={34,78};
complex_t c_num2={-45,21};
complex_t c_num3={76,-29};
complex_t c_num4={-32,-90};
complex_t zerovalue={0,0};

/**
 * @brief Test function for Addition
 * 
 */
void test_sum(void){
    TEST_ASSERT_EQUAL(SUCCESS,add(&c_num1,&c_num2));
    TEST_ASSERT_EQUAL(SUCCESS,add(&c_num2,&c_num3));
    TEST_ASSERT_EQUAL(SUCCESS,add(&c_num3,&c_num4));
    TEST_ASSERT_EQUAL(SUCCESS,add(&c_num4,&zerovalue));
    TEST_ASSERT_EQUAL(ERROR,add(NULL,NULL));
    
}

/**
 * @brief Test Function for Subtraction
 * 
 */
void test_diff(void){
    TEST_ASSERT_EQUAL(SUCCESS,sub(&c_num1,&c_num2));
    TEST_ASSERT_EQUAL(SUCCESS,sub(&c_num2,&c_num3));
    TEST_ASSERT_EQUAL(SUCCESS,sub(&c_num3,&c_num4));
    TEST_ASSERT_EQUAL(SUCCESS,sub(&c_num4,&zerovalue));
    TEST_ASSERT_EQUAL(ERROR,sub(NULL,NULL));
    
}

/**
 * @brief Test Function for Multipilcation
 * 
 */
void test_mul(void){
    TEST_ASSERT_EQUAL(SUCCESS,multiply(&c_num1,&c_num2));
    TEST_ASSERT_EQUAL(SUCCESS,multiply(&c_num2,&c_num3));
    TEST_ASSERT_EQUAL(SUCCESS,multiply(&c_num3,&c_num4));
    TEST_ASSERT_EQUAL(SUCCESS,multiply(&c_num4,&zerovalue));
    TEST_ASSERT_EQUAL(ERROR,multiply(NULL,NULL));
    
}

/**
 * @brief Test Function for Division
 * 
 */
void test_div(void){
    TEST_ASSERT_EQUAL(SUCCESS,div(&c_num1,&c_num2));
    TEST_ASSERT_EQUAL(SUCCESS,div(&c_num2,&c_num3));
    TEST_ASSERT_EQUAL(SUCCESS,div(&c_num3,&c_num4));
    TEST_ASSERT_EQUAL(ERROR_DIV_BY_0,div(&c_num4,&zerovalue));
    
    
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  
  RUN_TEST(test_sum);
  RUN_TEST(test_diff);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

int main()
{  
    test_main();

    return 0;
}