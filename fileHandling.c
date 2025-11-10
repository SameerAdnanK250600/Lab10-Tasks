#include <stdio.h>

int main() {
	FILE *ptr;
	ptr = fopen("hi.txt", "w");
	char ch;
	
	fprintf(ptr, "Hello Word\n");
	fprintf(ptr, "I Wrote a file!\n");
	
	fclose(ptr);
	
	ptr = fopen("hi.txt", "r");
	
	while ((ch=fgetc(ptr))!=EOF) {
		printf("%c", ch);
	}
	fclose(ptr);
	
	ptr = fopen("hi.txt", "a");
	fprintf(ptr, "I just appended to a file!\n");
	
	fclose(ptr);
	
	ptr = fopen("hi.txt", "r");
	
	while ((ch=fgetc(ptr))!=EOF) {
		printf("%c", ch);
	}
	fclose(ptr);
	
	return 0;
}
