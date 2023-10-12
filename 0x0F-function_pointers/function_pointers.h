#ifndef FUNCTION_POINTER_H
#define FUNCTION_POIMTER_H
void print_name(char *name, void (*f)(char *));
void int_index(int *array, int size, int (*cmp)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
