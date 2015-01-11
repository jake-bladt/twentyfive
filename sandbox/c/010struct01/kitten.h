typedef union {
	short years;
	const char* overflow;
}

struct kitten {
	const char* name;
	const char* breed;
	int age;
};

void purr(struct kitten *k, char *msg);
void get_age(struct kitten *k, char *age_msg);
