/*Input 4 days' temperature of 3 cities and displays the average temperature, minimum temperature among all of this info.*/
#include <stdio.h>

int main() {
    int temperatures[3][4]; // 3 cities, 4 days
    int city, day;
    float avg_temp[3];      // Stores average temperature for each city
    int min_temp;           // Stores the minimum temperature among all cities and days

    // Input temperatures for each city and day
    for (city = 0; city < 3; city++) {
        printf("Enter temperatures for City %d (4 days):\n", city + 1);
        for (day = 0; day < 4; day++) {
            printf("Day %d: ", day + 1);
            scanf("%d", &temperatures[city][day]);
        }
    }

    // Initialize minimum temperature with the first input value
    min_temp = temperatures[0][0];

    // Calculate average temperatures and find the minimum temperature
    for (city = 0; city < 3; city++) {
        int sum = 0;

        for (day = 0; day < 4; day++) {
            sum += temperatures[city][day]; // Calculate sum for average

            if (temperatures[city][day] < min_temp) {
                min_temp = temperatures[city][day]; // Update minimum temperature
            }
        }

        avg_temp[city] = sum / 4.0; // Calculate average for the city
    }

    // Display results
    printf("\nResults:\n");
    for (city = 0; city < 3; city++) {
        printf("City %d:\n", city + 1);
        printf("Average Temperature: %.2f\n", avg_temp[city]);
    }
    printf("Minimum Temperature among all cities and days: %d\n", min_temp);

    return 0;
}
