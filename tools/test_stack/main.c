#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "ft_stack.h"

int main(void)
{
	struct	s_stack *mystack = NULL;

	printf("isempty, should be 1: %d\n", (int)stack_isempty(&mystack));
	
	char	*str;
	str = strdup("Hello, this is the first string in a stack\n");
	stack_push(&mystack, (void*)str);
	printf("%s", (char*)stack_peek(&mystack));
	
	printf("isempty, should be 0: %d\n", (int)stack_isempty(&mystack));

	char	*str2;
	str2 = strdup("Second line added to the stack\n");
	stack_push(&mystack, (void*)str2);
	printf("%s", (char*)stack_peek(&mystack));
	char	*str3;
	str3 = strdup("Third line into the stack\n");
	stack_push(&mystack, (void*)str3);
	printf("%s\n", (char*)stack_peek(&mystack));

	stack_swap(&mystack);
	printf("Here is the top after SWAP    %s", (char*)stack_peek(&mystack));

	stack_pop(&mystack, free);
	printf("%s", (char*)stack_peek(&mystack));
	stack_swap(&mystack);
	stack_pop(&mystack, free);
	stack_swap(&mystack);
	stack_pop(&mystack, free);
	stack_swap(&mystack);
	stack_pop(&mystack, free);
	printf("isempty, should be 1: %d\n", (int)stack_isempty(&mystack));

	return (0);
}
