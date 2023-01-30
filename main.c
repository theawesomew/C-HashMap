#include <stdio.h>
#include <stdlib.h>
#include "HashMap.h"

int main (void) {
	HashMap h = create_hashmap();

	for (int i = 0; i < 256; ++i) {
		printf("%s\n", h->values[i]);
	}

	return 0;
}
