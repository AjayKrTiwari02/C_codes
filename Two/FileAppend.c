#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fPtr;
    
    char filePath[100];
    char dataToAppend[1000];


    printf("Enter file path: ");
    scanf("%s", filePath);


    fPtr = fopen(filePath, "a");
    
    
    if (fPtr == NULL) 
	{
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

   
    printf("Enter data to append: ");
    getchar(); 
    fgets(dataToAppend, sizeof(dataToAppend), stdin);


    fputs(dataToAppend, fPtr);

    // Close the file
    fclose(fPtr);

    printf("Data successfully appended to the file.\n");

    return 0;
}

