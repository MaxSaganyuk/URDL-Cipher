#include <stdio.h>
#include <ctype.h>

void cipher(char *key, int a) {

	int state_val = 0;
	char text[1000] = "";
	char* text_p = text;
	char* key_p = key;
	int n = 0;
	int k = 0;
	char ch = ' ';

	printf("Enter Text (Max 1000 Characters, use latin characters and digits)\n");
	scanf("\n");
	fgets(text, 1000, stdin);

	for (n = 0; n < 1000; n++) {
		*(text_p + n) = tolower(*(text_p + n));
	}

	if (a == 2) {
		state_val = 2;
	}

	for (n = 0; n < 1000; n++) {
		if (*(text_p + n) == ' ') {
			continue;
		}
		for (k = 0; k < 40; k++) {
			if (*(text_p + n) == *(key_p + k)) {
				if (state_val == 0) {
					if (k < 10) {
						*(text_p + n) = *(key_p + k + 30);
					}
					else {
						*(text_p + n) = *(key_p + k - 10);
					}
				}
				else if (state_val == 1) {
					if (k % 10 == 9) {
						*(text_p + n) = *(key_p + k - 9);
					}
					else {
						*(text_p + n) = *(key_p + k + 1);
					}
				}
				else if (state_val == 2) {
					if (k > 29) {
						*(text_p + n) = *(key_p + k - 30);
					}
					else {
						*(text_p + n) = *(key_p + k + 10);
					}
				}
				else {
					if (k % 10 == 0) {
						*(text_p + n) = *(key_p + k + 9);
					}
					else {
						*(text_p + n) = *(key_p + k - 1);
					}
				}
				break;
			}
		}
		state_val++;
		if (state_val == 4) {
			state_val = 0;
		}
	}

	printf("%s\n", text);
	getch();

}