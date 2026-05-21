
#include "../src/isogram.h"
#include "vendor/unity.h"
#include <stdlib.h>

void setUp(){}

void tearDown(){}

// this is a unit test
void test_empty_string(void) { 
    TEST_ASSERT_TRUE(is_isogram("")); 
}

void test_upper_cased_isogram(void){
    TEST_ASSERT_TRUE(is_isogram("OTTO"))
}

void test_mixed_cased_isogram(void){
    TEST_ASSERT_TRUE(is_isogram("OTTo"))
    TEST_ASSERT_TRUE(is_isogram("OTto"))
}

int main(void) {
    UnityBegin("isIsogram");

    RUN_TEST(test_empty_string);
    RUN_TEST(test_upper_cased_isogram);
    RUN_TEST(test_mixed_cased_isogram);
    UnityEnd();
    return 0;
}
