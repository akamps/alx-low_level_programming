#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

int main() {
    unsigned int size = 10;
    char c = 'a';
    char *array = create_array(size, c);
    if (array == NULL) {
        printf("Error: unable to create array.\n");
        return 1;
    }

    printf("Array:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = malloc(sizeof(char) * size);
    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}
