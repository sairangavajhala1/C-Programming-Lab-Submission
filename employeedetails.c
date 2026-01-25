
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    struct Employee *emp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    // Free memory
    free(emp);

    return 0;
}
