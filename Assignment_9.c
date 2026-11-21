#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch, source[100], target[100];

    printf("Enter source file name: ");
    scanf("%99s", source);

    printf("Enter destination file name: ");
    scanf("%99s", target);

    fp1 = fopen(source, "r");

    if (fp1 == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    fp2 = fopen(target, "w");

    if (fp2 == NULL)
    {
        printf("Unable to create destination file.");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
