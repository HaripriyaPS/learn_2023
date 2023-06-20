#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeString[9];
    int hours, minutes, seconds, totalSeconds;

    printf("Enter the time in the format hh.mm.ss: ");
    scanf("%8s", timeString); 
    
    hours = atoi(strtok(timeString, "."));
    minutes = atoi(strtok(NULL, "."));
    seconds = atoi(strtok(NULL, "."));
    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}