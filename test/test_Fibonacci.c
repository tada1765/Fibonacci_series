#include "unity.h"
#include "Fibonacci.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Fibonacci_NeedToImplement(void)
{
	TEST_IGNORE_MESSAGE("Need to Implement Fibonacci");
}

void test_Fibonacci_read_only_3rd_line_from_file_expect_true(void)
  { 
	char* data_str[] ={"0","1","1","2","3","5","8"};
    char* Fibonacci;
	int num = 4;
	
    Fibonacci = Fibonacci_main(num);
    
    TEST_ASSERT_EQUAL_STRING(data_str[1], Fibonacci);//the 3rd line from file
  } 