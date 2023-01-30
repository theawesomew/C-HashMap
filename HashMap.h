#ifndef HASHMAP
#define HASHMAP

struct hashmap {
	char *values[256];
};

typedef struct {
	char *key;
	char *value;
} KeyValuePair;

typedef struct hashmap *HashMap;

HashMap create_hashmap ();
unsigned char hash (char *key);
char * get_value (HashMap h, char *key);
void add_value (HashMap h, char *key, char *value);
void remove_key (HashMap h, char *key);
void remove_value (HashMap h, char *value);
KeyValuePair enumerate (HashMap h);

#endif
