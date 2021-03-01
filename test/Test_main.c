#include "unity.h"
#include "addlast.h"
#include "display.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void addlast(void)
{
    long result = 1;
    TEST_ASSERT_(addlast(&result));
}
void display(void)
{
    long result = 1;
    TEST_ASSERT_EQUAL());
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test);
  addlast();
  display();
  /* Close the Unity Test Framework */
  return UNITY_END();
}