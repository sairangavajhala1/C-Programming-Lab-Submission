#include <stdio.h>
#include <string.h>

struct car {
    char car_id[50];
    int model;
    int rental_rate_per_day;
};

int main() {
    struct car c[3];
    int i, days, total_rental;

    for (i = 0; i < 3; i++) {
        printf("\n--- Enter details for Car %d ---\n", i + 1);

        printf("Enter CarID: ");
        getchar();                     // clear buffer
        fgets(c[i].car_id, 50, stdin);

        printf("Enter Model: ");
        scanf("%d", &c[i].model);

        printf("Enter rental rate per day: ");
        scanf("%d", &c[i].rental_rate_per_day);
    }

    printf("\n========== Car Rental Information ==========\n");
    for (i = 0; i < 3; i++) {
        printf("\nCar %d Details:\n", i + 1);
        printf("CarID: %s", c[i].car_id);
        printf("Model: %d\n", c[i].model);
        printf("Rental rate per day: %d\n", c[i].rental_rate_per_day);
    }

    printf("\nEnter number of days to rent: ");
    scanf("%d", &days);

    for (i = 0; i < 3; i++) {
        total_rental = c[i].rental_rate_per_day * days;
        printf("Total rental cost for Car %d for %d days: %d\n",
               i + 1, days, total_rental);
    }

    return 0;
}
