#include <stdio.h>

struct student {
	char name[50];
	int age;
	int total_marks;
};

int main() {
	struct student s[2];
	int i;
	int sum = 0;
	
	for (i = 0; i < 2; i++) {
		printf("Enter name of student %d: ", i + 1);
		scanf("%s", s[i].name);
		
		printf("Enter age: ");
		scanf("%d", &s[i].age);
		
		printf("Enter total marks: ");
		scanf("%d", &s[i].total_marks);
	}
	
	// Display student information
	printf("\n--- Student Information ---\n");
	for (i = 0; i < 2; i++) {
		printf("Name: %s\n", s[i].name);
		printf("Age: %d\n", s[i].age);
		printf("Total marks: %d\n\n", s[i].total_marks);
		sum = sum + s[i].total_marks;
	}
	
	// Calculate and display average
	printf("Average marks: %.2f\n", sum / 2.0);
	
	return 0;
}
