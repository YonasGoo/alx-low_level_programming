#ifndef FUNCTION_POINTER_H
#define FUNCTION_POIMTER_H
void print_name(char *name, void (*f)(char *));
void int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
#endif
