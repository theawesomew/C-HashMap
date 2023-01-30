#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "HashMap.h"

HashMap create_hashmap () {
	HashMap h = (struct hashmap *)malloc(sizeof(struct hashmap));
	
	for (int i = 0; i < 256; ++i) {
		h->values[i] = malloc(sizeof(char *));
		strcpy(h->values[i], "\0");	
	}

	return h;
}

unsigned char hash (char *key) {}

char * get_value (HashMap h, char *key) {}

void add_value (HashMap h, char *key, char *value) {}

void remove_key (HashMap h, char *key) {}

void remove_value (HashMap h, char *value) {}

KeyValuePair enumerate (HashMap h) {}


