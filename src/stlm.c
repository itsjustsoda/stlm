#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Usage: stlm username password\n");
		return 0;
	}

	printf("%s %s\n", argv[1], argv[2]);
}
