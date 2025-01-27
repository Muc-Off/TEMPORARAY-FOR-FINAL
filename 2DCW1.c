/*Input 4 days' temperature of 3 cities and displays the average temperature, maximum temperature of each city, maxi*/

#include <stdio.h>

int main() {
    int temperatures[3][4]; // 3 cities, 4 days
    int city, day;
    float avg_temp[3];      // Stores average temperature for each city
    int max_temp[3];        // Stores maximum temperature for each city

    // Input temperatures for each city and day
    for (city = 0; city < 3; city++) {
        printf("Enter temperatures for City %d (4 days):\n", city + 1);
        for (day = 0; day < 4; day++) {
            printf("Day %d: ", day + 1);
            scanf("%d", &temperatures[city][day]);
        }
    }

    // Calculate average and maximum temperature for each city
    for (city = 0; city < 3; city++) {
        int sum = 0;
        max_temp[city] = temperatures[city][0]; // Initialize max temperature

        for (day = 0; day < 4; day++) {
            sum += temperatures[city][day];
            if (temperatures[city][day] > max_temp[city]) {
                max_temp[city] = temperatures[city][day];
            }
        }
        avg_temp[city] = sum / 4.0; // Calculate average
    }

    // Display results
    printf("\nResults:\n");
    for (city = 0; city < 3; city++) {
        printf("City %d:\n", city + 1);
        printf("Average Temperature: %.2f\n", avg_temp[city]);
        printf("Maximum Temperature: %d\n", max_temp[city]);
    }

    return 0;
}

