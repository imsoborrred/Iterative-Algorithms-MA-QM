#include <stdio.h>

int main() {
    int num_of_cities; 
    printf("Enter the number of cities: ");
    scanf("%d", &num_of_cities);

    int population;
    int min = 0;
    int max = 0;
    int total_population = 0; 

    for (int i = 0; i < num_of_cities; i++) {
        printf("Enter the population of city %d: ", i + 1);
        scanf("%d", &population);
        total_population += population; 

        if (i == 0) {
            min = population;
            max = population;
        } else {
            if (population < min) {
                min = population;
            }
            if (population > max) {
                max = population;
            }
        }
    }

    printf("Average population of all cities: %d\n", total_population / num_of_cities);
    printf("Minimum population: %d\n", min);
    printf("Maximum population: %d\n", max);

    return 0;
}
