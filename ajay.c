#include<stdio.h>
int main()
{
FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL)
    {
    printf("Error: Could not open source file.\n");
    return 1;
    }
    destFile = fopen("destination.txt", "a");
    if(destFile == NULL)
    {
    printf("Error: Could not open destination file.\n");
    fclose(sourceFile);
    return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }
    printf("Data successfully appended to destination file.\n");
    fclose(sourceFile);
    fclose(destFile);
return 0;
}


