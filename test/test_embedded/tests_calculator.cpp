#include <Arduino.h>
#include <unity.h>

void setUp(void) { /* set stuff up here */ }
void tearDown(void) { /* clean stuff up here */}

int test_library_func_A(int a, int b) { return a + b; }
int test_library_func_B(int a, int b) { return a - b; }

void test_calculator_addition(void) {
    TEST_ASSERT_EQUAL(32, test_library_func_A(25, 7));
}

void test_calculator_subtraction(void) {
    TEST_ASSERT_EQUAL(18, test_library_func_B(25, 7));
}
void setup() {
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_calculator_addition);
    RUN_TEST(test_calculator_subtraction);
    UNITY_END();
}

void loop() { digitalWrite(LED_BUILTIN, HIGH); delay(100);  digitalWrite(LED_BUILTIN, LOW); delay(500); }