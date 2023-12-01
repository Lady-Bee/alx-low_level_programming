#include "main.h"

/**
 * main - Program entry point
 * @argc: The number of arguments
 * @argv: arguments array pointer
 * Return: 1 if successful, error code on failure
 */

int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
    printf("argv: %p\n", (void *)argv);
    return 0;
}
