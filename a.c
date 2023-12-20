#include <stdio.h>

int main() {
    FILE *filePointer;

    filePointer = fopen("example.txt", "a"); // opening the file in "append" mode
    if (filePointer == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // write some data to the end of the file
    fputs("This is a test.\n", filePointer);

    fclose(filePointer); // close the file
    return 0;
}
