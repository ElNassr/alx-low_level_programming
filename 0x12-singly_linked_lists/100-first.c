#inclide <stdio.h>
#include <stdlib.h>
#include "lists.h"

void my_constructor(void) __attribute__((constructor));

/**
 *  my_constructor - contructor function
 * 
 * Return: no return for this function
 */
void my_constructor(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
