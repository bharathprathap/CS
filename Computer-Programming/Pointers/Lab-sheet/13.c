#include <stdio.h>
#include <stdlib.h>

int main() {

	int *ptr;
	ptr = (int *) malloc(1 * sizeof(int) );
	*ptr = 10;
	printf("%d\n", *ptr);
	free(ptr);
}