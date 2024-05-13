#include <stdio.h>

int main(void) {

	char cmd;
	int loop, idx;
        int courses[5] = {0, };
	loop = 1;
	idx = 0;

	while (loop) {
		printf("r : Registrstion, q : Quit\n");
		scanf(" %c", &cmd);
		
		switch (cmd) {
			case 'r' : 
				printf("Enter your course code : ");
                                scanf("%d", &courses[idx++]);
				break;
			case 'q' :
				loop = 0;
				break;
		}
	}

	for (int i = 0; i < (sizeof(courses)/sizeof(courses[0])); i++) {
		if (courses[i]) {
			printf("course code %d : %d\n", i+1, courses[i]);
		}
	}

	return 0;
}
