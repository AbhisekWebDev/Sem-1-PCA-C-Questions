#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
     char ch;
     // Open file in read mode
     filePointer = fopen("output.txt", "r");
     if (filePointer == NULL) {
     printf("File could not be opened.");
     return 1;
     }
     // Read and display contents character by character
     printf("Contents of the file:\n");
     while ((ch = fgetc(filePointer)) != EOF) {
     printf("%c", ch);
     }
     // Close the file
     fclose(filePointer);
    return 0;
}
