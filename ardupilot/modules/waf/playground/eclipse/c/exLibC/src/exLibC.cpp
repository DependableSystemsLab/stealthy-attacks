#include <stdio.h>
#include <stdlib.h>

#include <pkg1/exLibC/exLibC.hpp>

int check_smaller(int value) {
	if (value < HELLO_LIMIT) {
		return 0;
	} else {
		return -1;
	}
}

