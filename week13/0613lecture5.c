#include <stdio.h>
#include <stdlib.h>

typedef struct course_info {
	char code[8];
	char name[32];
	struct course_info* next;
	int ID;
} course_info;

int main(void) {

	char cmd;
	int loop = 1;
        course_info* courses = NULL;
	course_info *c, *new, *last = NULL;
	size_t allocated = 0;

	while (loop) {
		printf("r : Registrstion, q : Quit\n");
		scanf(" %c", &cmd);
		
		switch (cmd) {
			case 'r' :
				new = (course_info*) malloc(sizeof(course_info));
				printf("Enter your course code : ");
                                scanf("%s", new->code);
				printf("Enter your course ID : ");
                                scanf("%d", &new->ID);
				printf("Enter your course name : ");
                                scanf("%s", new->name);
				new->next = NULL;
				if(courses == NULL) {
					courses = new;
				}
				else {
					last->next = new;
				}
				last = new;
				break;
			case 'q' :
				loop = 0;
				break;
		}
	}

	int i = 0;
	c = courses;
	do {
		if(c == NULL) {
			break;
		}
		allocated += sizeof(course_info);
		printf("course %d : course code is %s, course ID is %d, course name is %s\n", i+1, c->code, c->ID, c->name);
		c = c->next;
		i++;
	}while(1);

	printf("Total size : %lu\n", sizeof(courses) + allocated);

	return 0;
}
