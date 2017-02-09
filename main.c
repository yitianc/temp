typedef enum {
	MIMC,
	MOMC
} TYPE_A;

int foo(TYPE_A a) {
	if (a == MIMC)
		return 1;
	else
		return 0;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("%s\n", argv[1]);
	return foo(MIMC);
}

