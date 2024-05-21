#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100];
	int i=1;
    printf("Enter the filename to create and write to: ");
    scanf("%s", filename);

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Cannot create or open file %s for writing\n", filename);
        exit(1);
    }

    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(fptr, "%d\n", i);
        }
    }

    printf("Numbers divisible by both 3 and 5 between 1 and 50 have been written to %s\n", filename);

    fclose(fptr);

    return 0;
}

