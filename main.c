#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "HashMap.h"

int main (void) {
	FILE *fp = fopen("wordlist10000.txt", "r");

	char word[100];
	int dist[256] = { 0 };
	int total;

	while ( fgets(word, sizeof(word), fp) != NULL) {
		char _word[strlen(word)-1];
		strncpy(_word, word, strlen(word)-2);
		int x = hash(_word);
		printf("%s, %i\n", _word, x);
		dist[x]++;
		total++;
	}

	for (int i = 0; i < 256; ++i) {
		printf("%.3f ", ((float)dist[i]/(float)total));
	}

	printf("\n");

	fclose(fp);	
	return 0;
}
