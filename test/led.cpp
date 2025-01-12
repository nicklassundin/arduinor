#include <Arduino.h>
#include <unity.h>

void test_led_builtin_pin_number() {
	TEST_ASSERT_EQUAL(13, LED_BUILTIN);

}

void setup() {
	UNITY_BEGIN();
	RUN_TEST(test_led_builtin_pin_number);
	UNITY_END();

}

void loop() {
	// Empty loop for testing
	// 
}
