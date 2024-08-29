
#include "sorting.h"

// insertion sort with generics implementation
template <typename T>
T* sort(T* begin, T* end, bool (*compare) (T, T)) {

	size_t size = end - begin;
	int i = 1, j;
	T tmp;

	while (i < size) {
		tmp = begin[i];
		j = i - 1;
		while (j >= 0 && compare(begin[j], tmp)) {
			begin[j+1] = begin[j];
			--j;
		}
		begin[j+1] = tmp;
		++i;
	}

	return end;
}


int main() {

	int v[10] = {3, 4, 5, 10, 1, 6, 8, 9, 7, 2};
	int size = sizeof(v)/sizeof(int);

	print_vector(v, v + 10);

	sort(v, v + size, gt);
	print_vector(v, v + 10);

	return 0;
}
