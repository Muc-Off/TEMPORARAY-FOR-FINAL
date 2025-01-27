#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int m[5000][5000]; // Adjacency matrix to store the graph

int main() {
    int i, j, n, in_deg, out_deg;
    int total_in_deg = 0, total_out_deg = 0;
    double start, end;

    printf("Enter the number of vertices n: ");
    scanf("%d", &n);

    srand(time(NULL)); // Seed the random number generator

    // Initialize the adjacency matrix to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    // Randomly generate the adjacency matrix for a directed graph
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j) { // No self-loops
                m[i][j] = rand() % 2; // Randomly generate 0 or 1
            }
        }
    }

    // Start timing the computational effort
    start = clock();

    // Compute total in-degrees and out-degrees
    for (i = 0; i < n; i++) {
        in_deg = 0;
        out_deg = 0;
        for (j = 0; j < n; j++) {
            if (m[i][j] == 1) {
                out_deg++; // Outgoing edge from i to j
            }
            if (m[j][i] == 1) {
                in_deg++; // Incoming edge to i from j
            }
        }
        total_in_deg += in_deg;
        total_out_deg += out_deg;
    }

    // End timing the computational effort
    end = clock();

    // Print results
    printf("\nTotal in-degrees: %d\n", total_in_deg);
    printf("Total out-degrees: %d\n", total_out_deg);

    if (total_in_deg == total_out_deg) {
        printf("\nThe sum of in-degrees equals the sum of out-degrees.\n");
    } else {
        printf("\nThe sum of in-degrees does not equal the sum of out-degrees.\n");
    }

    double computational_time = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
    printf("\nComputational time: %.2lf milliseconds\n\n", computational_time);

    printf("Run the code for 1000, 2000, 3000, 4000 & 5000 vertices.\n");

    return 0;
}
