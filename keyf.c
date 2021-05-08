#include <stdio.h>
#include <stdlib.h>

void keyf(char* arr) {

	int n = 0;
	int rand_val;
	int rand_val_2;
	char* arr_p = arr;
	char ch_point;
	char ch_point_2;

	for (n = 0; n != 40; n++) {

		rand_val = rand() % 40;
		rand_val_2 = rand() % 40;

		ch_point = *(arr_p + rand_val);
		ch_point_2 = *(arr_p + rand_val_2);

		*(arr_p + rand_val) = ch_point_2;
		*(arr_p + rand_val_2) = ch_point;
	}
}