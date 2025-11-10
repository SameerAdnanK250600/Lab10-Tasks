#include <stdio.h>
#include <string.h>

int main() {
	char correctPass[] = "password";
	char userInput[256];
	printf("Enter Password: ");
	gets(userInput);
	if (!(strcmp(userInput, correctPass))) {
		printf("Correct Password!\n");
		
		char name[256];
		char password[256];
		char confirmPassword[256];
		printf("Enter New Password: ");
		gets(password);
		
		if (strlen(password) < 8) {
			printf("Invalid Password\n");
		} else {
			printf("Confirm Password: ");
			gets(confirmPassword);
			if (!(strcmp(password, confirmPassword))) {
				printf("Enter your name: ");
				gets(name);
				
				printf("Welcome ");
				puts(name);
			} else {
				printf("Passwords do not match!\n");
			}
		}
		
	} else {
		printf("Wrong Password!");
	}
	return 0;
}
