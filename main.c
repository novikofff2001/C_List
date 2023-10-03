#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int main(int argc, char* argv[]) {
	int list_size = argc > 1 ? atoi(argv[1]) : 10;
	List* l = _List_new();
	for (int i = 0; i < list_size; ++i) {
		l->add(l, i * 2);
		printf("List[%d] = %d\n", i, l->get(l, i));
	}
	l->_delete(l);
	getchar();
	return 0;
}