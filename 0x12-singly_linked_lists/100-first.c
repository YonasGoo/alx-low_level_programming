#include <stdio.h>
/**
 *
 *
 */
void startup_fun(void) __attribute__((constructor));

void startup_fun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main()
{
	return (0);

}
