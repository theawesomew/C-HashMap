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

unsigned char hash (char *key) {
	char c = key[0];

	for (int i = 1; i < strlen(key); ++i) {
		c ^= key[i];
	}

	return (unsigned char)c;
}

char * get_value (HashMap h, char *key) {
	return h->values[hash(key)];
}

void add_value (HashMap h, char *key, char *value) {
	strcpy(h->values[hash(key)], value);
}

void remove_key (HashMap h, char *key) {
	strcpy(h->values[hash(key)], "\0");
}

void remove_value (HashMap h, char *value) {
	for (int i = 0; i < 256; ++i) {
		if (strcmp(h->values[i], value) == 0) {
			strcpy(h->values[i], "\0");
			return;
		}
	}
}

KeyValuePair enumerate (HashMap h) {}


