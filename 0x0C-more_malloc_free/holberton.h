#ifndef SALMEN
#define SALMEN
#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncat(char *dest, char *src, int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif