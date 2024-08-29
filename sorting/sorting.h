#include <iostream>
#include <stdio.h>

#ifndef SORTING_H
#define SORTING_H

template <typename T>
bool compare(T firstObj, T secondObj, bool (*comp) (T, T)) {
	return comp(firstObj, secondObj);
}

template <typename T>
bool gt(T first, T second) {
	return first > second;
}

template <typename T>
bool lt(T first, T second) {
	return first < second;
}

template <typename T>
void print_vector(T* begin, T* end) {


	std::cout << "= ";

	T* itr = begin;

	while (itr < end) {
		std::cout << *itr << " ";	
		itr++;
	}
	std::cout << std::endl;	

	return;
}


#endif
