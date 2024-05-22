#include <stdio.h>
#include <string.h>

int char_at (char* txt, char del, int start);

int main() {
	int start, end;
	char c_code[8] = "", c_id[6] = "", c_name[64] = "";
	char csv_value[]="ITE1014,13047,Intro_to_SW_Design";
	
	start = 0;
	end = char_at(csv_value, ',', start);
	if (end == -1) {
                strcpy(c_code, &csv_value[start]);
        }
        else {
                strncpy(c_code, &csv_value[start], end - start);
        }

	start = end + 1;
	end = char_at(csv_value, ',', start);
	if (end == -1) {
                strcpy(c_id, &csv_value[start]);
        }
        else {
                strncpy(c_id, &csv_value[start], end - start);
        }

	start = end + 1;
        end = char_at(csv_value, ',', start);
	if (end == -1) {
        	strcpy(c_name, &csv_value[start]);
	}
	else {
		strncpy(c_name, &csv_value[start], end - start);
	}

	printf("Course code: %s\n",c_code);
	printf("Course id: %s\n", c_id);
	printf("Coursename: %s\n", c_name);

	return 0;
}

int char_at (char* txt, char del, int start) {
	for (start; txt[start] != 0; start++) {
		if (txt[start] == del) {
			return start;
		}
	}
	return -1;
}
