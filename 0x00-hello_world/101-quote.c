#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Using the write function to print a quote.
 *   write(int fd, const void *buf, size_t count)
 *
 * Return: Always returns 1 (not success).
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quo, 59);
	return (1);
}
