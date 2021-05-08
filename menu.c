#include <stdio.h>


int menu() {

	int a;

	printf("Enter 1 to Encrypt Text\n");
	printf("Enter 2 to Decrypt Text\n");
	printf("Enter 3 to Generate other key\n");
	printf("Enter 4 to Exit\n\n");
	while (1) {
		scanf("%i", &a);
		if (a > 4 && a < 0) {
			printf("\nError. This option does not exist. Choose another\n");
			continue;
		}
		break;
	}

	return a;
}