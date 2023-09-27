#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int find_length(char *s);
char *create_array(int size);
char *iterate_zero(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_num(char *final_prod, char *next_prod, int next_len);

#endif /*MAIN_H*/
