#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T const &elem)
{
	std::cout << elem << std::endl;
	return;
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	float arr1[5] = {1.1, 2.75, 3.0, 4.5, 5};
	iter(arr, 5, &print);
	std::cout << std::endl;
	iter(arr1, 2, &print);
	return 0;
}
