#include <stdio.h>

int main() {
    int hours, minutes, seconds, newHours;
    scanf("%d %d %d", &hours, &minutes, &seconds);
    if (hours == 12 && minutes == 0 && seconds == 0) {
        printf("%02d:%02d:%02dNOON", hours, minutes, seconds);
        return 0;
    } else if (hours == 12) {
        printf("%02d:%02d:%02dPM", hours, minutes, seconds);
        return 0;
    } else if (hours == 0) {
        printf("%02d:%02d:%02dAM", hours + 12, minutes, seconds);
        return 0;
    } else if (hours >= 1 && hours <= 11) {
        printf("%02d:%02d:%02dAM", hours, minutes, seconds);
        return 0;
    } else if (hours >= 13 && hours <= 23) {
        newHours = hours - 12;
        printf("%02d:%02d:%02dPM", newHours, minutes, seconds);
        return 0;
    }
}
