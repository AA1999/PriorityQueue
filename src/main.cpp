//
// Created by arshia on 1/10/24.
//

#include <iostream>

#include "priority_queue.h"

int main() {
	priority_queue<int> queue{};
	queue.insert(2, 200);
	std::cout << queue.pop();
	return 0;
}