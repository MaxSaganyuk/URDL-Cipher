#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "cipher.h"
#include "keyf.h"

int main() {

	srand(time(NULL));

	int a = 0;
	int n;
	char key[41] = "hn1!rj4i9da27gpzyolexcfk0bs3tw$58~6q@umv";
	char* key_p = key;
	printf("Do you wish to use default key, or custom one?\nEnter 1 for custom key\nEnter 0 for default key\n");
	scanf("%i", &n);
	if (n == 1) {
		printf("Enter your key \n(Must be 40 characters long and every character must be used once)\n");
		for (n = 0; n < 40;) {
			scanf("%s", key);
			for (n = 0; *(key_p + n) != '\0'; n++);
		}
	}

	printf("URDL Cipher\n\n");
	printf("Key that is used %s\n\n", key);

	while (1) {
		a = menu();
		if (a == 3) {
			keyf(key);
			printf("Copy this string of characters.\n\n");
			printf("%s\n\n", key);
			printf("Next, restart the program, and use it as custom key\n\n");
			getch();
		}
		else if (a == 4) {
			break;
		}
		else {
			cipher(key, a);
		}
	}
    return 0;
}

