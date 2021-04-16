#include "unity.h"
#include <Step_into_DLC.h>

/* Modify these two lines according to the project */
#include <Step_into_DLC.h>
#define PROJECT_NAME    "Step_into_DLC"

/* Prototypes for all the test functions */
void test_and();
void test_or();
void test_nand();
void test_nor();
void test_not();
void test_exor();
void test_exnor();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_and);
  RUN_TEST(test_or);
  RUN_TEST(test_nand);
  RUN_TEST(test_nor);
  RUN_TEST(test_not);
  RUN_TEST(test_exor);
  RUN_TEST(test_exnor);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_and() {
  TEST_ASSERT_EQUAL(0, and(0, 0));
  TEST_ASSERT_EQUAL(0, and(0, 1));
  TEST_ASSERT_EQUAL(0, and(1, 0));
  TEST_ASSERT_EQUAL(1, and(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, and(0,0));
}

void test_or() {
  TEST_ASSERT_EQUAL(0, or(0, 0));
  TEST_ASSERT_EQUAL(1, or(0, 1));
  TEST_ASSERT_EQUAL(1, or(1, 0));
  TEST_ASSERT_EQUAL(1, or(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, or(1,0));
}

void test_nand() {
  TEST_ASSERT_EQUAL(1, nand(0, 0));
  TEST_ASSERT_EQUAL(1, nand(0, 1));
  TEST_ASSERT_EQUAL(1, nand(1, 0));
  TEST_ASSERT_EQUAL(0, nand(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, nand(0, 0));
}

void test_nor() {
  TEST_ASSERT_EQUAL(1, nor(0, 0));
  TEST_ASSERT_EQUAL(0, nor(0, 1));
  TEST_ASSERT_EQUAL(0, nor(1, 0));
  TEST_ASSERT_EQUAL(0, nor(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, nor(1, 1));
}

void test_not() {
  TEST_ASSERT_EQUAL(1, not(0));
  TEST_ASSERT_EQUAL(0, not(1));
    
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, not(1));
}


void test_exor() {
  TEST_ASSERT_EQUAL(0, exor(0, 0));
  TEST_ASSERT_EQUAL(1, or(0, 1));
  TEST_ASSERT_EQUAL(1, or(1, 0));
  TEST_ASSERT_EQUAL(0, or(1, 1));
  
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, exor(1, 1));
}

void test_exnor() {
  TEST_ASSERT_EQUAL(1, exnor(1, 0));
  TEST_ASSERT_EQUAL(0, exnor(0, 1));
  TEST_ASSERT_EQUAL(0, exnor(0, 0));
  TEST_ASSERT_EQUAL(1, exnor(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, exnor(0, 1));
}


