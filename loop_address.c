#include <stdio.h>
#include <unistd.h> // For sleep function

int main() {
    int value = 102030;

    while (1) {
        printf("The value is         :  %d\n", value);
        printf("The memory address is:  %p\n", (void *)&value);
        printf("The memory address is:  0x%p\n", (void *)&value);
        sleep(3); // Sleep for 3 seconds
    }

    return 0;
}
