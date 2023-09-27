#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void zero_check(char *argv[]);
char *init_array(char *array, int len);
int checknum(char *argv[], int n);

#endif /*MAIN_H*/
