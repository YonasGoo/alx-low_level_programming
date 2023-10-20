#include <stdio.h>
/**
 * startup_fun - A function exectuted before the main function
 * This function is decorated with the __attribute__((constructor)) attribute
 */
void startup_fun(void) __attribute__((constructor));

void startup_fun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
/**
 * main - The entry point 
 *
 * Return: Always return 0 (Sucess)
 */
int main()
{
	return (0);

}
