#include <stdio.h>

#include "test_harness.h"

#include "capsicum.h"

TEST(cap_new_basic) {
	int x = cap_new(1, 0);

	write(x, "OK\n", 3);
}

TEST(cap_enter_basic) {
	cap_enter();
}


TEST_HARNESS_MAIN


