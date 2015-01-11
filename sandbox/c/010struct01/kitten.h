typedef union {
	short years;
	const char* overflow;
} kitten_age;

struct kitten {
	const char* name;
	const char* breed;
	kitten_age age;
};

void purr(struct kitten *k, char *msg);
void get_age(struct kitten *k, char *age_msg);
