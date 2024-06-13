#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char code[8];
	int ID;
	char name[32];
} course_info;

int main(void) {

	char cmd;
	int loop, idx;
        course_info* courses[5] = {NULL, };
	size_t allocated = 0;
	loop = 1;
	idx = 0;

	while (loop) {
		printf("r : Registrstion, q : Quit\n");
		scanf(" %c", &cmd);
		
		switch (cmd) {
			case 'r' :
			        courses[idx] = (course_info*) malloc(sizeof(course_info));	
				printf("Enter your course code : ");
                                scanf("%s", courses[idx]->code);
				printf("Enter your course ID : ");
                                scanf("%d", &courses[idx]->ID);
				printf("Enter your course name : ");
                                scanf("%s", courses[idx]->name);
				idx++;
				break;
			case 'q' :
				loop = 0;
				break;
		}
	}


	for (int i = 0; i < (sizeof(courses)/sizeof(courses[0])); i++) {
		if (courses[i] != NULL) {
			printf("course %d : course code is %s, course ID is %d, course name is %s\n", i+1, courses[i]->code, courses[i]->ID, courses[i]->name);
			allocated += sizeof(*courses[i]);
		}
	}

	printf("Total size : %lu\n", sizeof(courses)+allocated);

	return 0;
}
