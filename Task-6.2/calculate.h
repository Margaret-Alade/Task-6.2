#pragma once

class Counter {
private:
	int num;

public:

	int get_current_num();
	void add_1();
	void substract_1();

	Counter(int num);
	Counter();
};
