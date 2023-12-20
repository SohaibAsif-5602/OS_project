#include <stdio.h>

int main() {
    FILE *filePointer;

    filePointer = fopen("example.txt", "r+"); // opening the file in "read and write" mode
    if (filePointer == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // modify the contents of the file
    fprintf(filePointer, "This is a modified line.\n");

    fclose(filePointer); // close the file
    return 0;
}
