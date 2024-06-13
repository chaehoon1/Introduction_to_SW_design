#include <stdio.h>

typedef struct {
	char code[8];
	int ID;
	char name[32];
} course_info;

int main(void) {

	char cmd;
	int loop, idx;
        course_info courses[5] = {{"", 0, ""}, };
	loop = 1;
	idx = 0;

	while (loop) {
		printf("r : Registrstion, q : Quit\n");
		scanf(" %c", &cmd);
		
		switch (cmd) {
			case 'r' : 
				printf("Enter your course code : ");
                                scanf("%s", courses[idx].code);
				printf("Enter your course ID : ");
                                scanf("%d", &courses[idx].ID);
				printf("Enter your course name : ");
                                scanf("%s", courses[idx].name);
				idx++;
				break;
			case 'q' :
				loop = 0;
				break;
		}
	}

	for (int i = 0; i < (sizeof(courses)/sizeof(courses[0])); i++) {
		if (courses[i].ID) {
			printf("course %d : course code is %s, course ID is %d, course name is %s\n", i+1, courses[i].code, courses[i].ID, courses[i].name);
		}
	}

	printf("Total size : %lu\n", sizeof(courses));

	return 0;
}
