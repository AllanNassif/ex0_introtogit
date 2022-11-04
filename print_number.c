#include <stdio.h>
#define SIZE_OF_COURSE_NUMBER 6

int main() {
	int course_number[SIZE_OF_COURSE_NUMBER] = {4, 2, 1, 4, 3, 2};
	for(int i = SIZE_OF_COURSE_NUMBER-1 ; i >= 0; i--) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
