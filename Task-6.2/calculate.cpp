#include "calculate.h"

int Counter::get_current_num() {
	return num;
}

void Counter::add_1() {
	++num;
}

void Counter::substract_1() {
	--num;
}

Counter::Counter(int num) {
	this->num = num;
}

Counter::Counter() {
	num = 1;
}