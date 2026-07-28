#include <stdio.h>

int main() {
    int north, south, east, west;
    int max;

    printf("===== Smart Traffic Light System =====\n\n");

    // Input vehicle count
    printf("Enter vehicle count for North Road: ");
    scanf("%d", &north);

    printf("Enter vehicle count for South Road: ");
    scanf("%d", &south);

    printf("Enter vehicle count for East Road: ");
    scanf("%d", &east);

    printf("Enter vehicle count for West Road: ");
    scanf("%d", &west);

    // Find highest traffic
    max = north;

    if (south > max)
        max = south;
    if (east > max)
        max = east;
    if (west > max)
        max = west;

    printf("\n===== Traffic Signal Status =====\n");

    printf("North: %s\n", (north == max) ? "GREEN" : "RED");
    printf("South: %s\n", (south == max) ? "GREEN" : "RED");
    printf("East : %s\n", (east == max) ? "GREEN" : "RED");
    printf("West : %s\n", (west == max) ? "GREEN" : "RED");

    printf("\nGreen signal is given to the road with the highest vehicle density.\n");

    return 0;
}
