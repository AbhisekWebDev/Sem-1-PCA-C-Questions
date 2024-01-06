#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
     // Open file in write mode
     filePointer = fopen("output.txt", "w");
     if (filePointer == NULL) {
     printf("File could not be opened.");
     return 1;
     }
     // Write to the file
     fprintf(filePointer, "hello file handling\n");
     // Close the file
     fclose(filePointer);
     printf("Data written to the file successfully.\n");
    return 0;
}
