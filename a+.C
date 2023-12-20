#include <stdio.h>

int main() {
    FILE *filePointer;
    char string[100];
    int num;

    filePointer = fopen("example.txt", "a+"); // opening the file in "append and read" mode
    if (filePointer == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // append some data to the file
    fprintf(filePointer, "This is a new line.\n");
    fprintf(filePointer, "99\n");

    // move the file position indicator to the beginning of the file
    rewind(filePointer);

    // read the data from the file
    fgets(string, 100, filePointer);
    fscanf(filePointer, "%d", &num);

    printf("String read from file: %s", string);
    printf("Number read from file: %d\n", num);

    fclose(filePointer); // close the file
    return 0;
}
