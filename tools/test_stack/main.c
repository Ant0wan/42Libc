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

	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char *s5;
	char *s6;

	s6 = strdup("f\n");
	s5 = strdup("e\n");
	s4 = strdup("c\n");
	s3 = strdup("d\n");
	s2 = strdup("b\n");
	s1 = strdup("a\n");
	stack_push(&mystack, s1);
	stack_push(&mystack, s2);
	stack_push(&mystack, s3);
	stack_push(&mystack, s4);

	printf("\n");
	stack_swap(&mystack);
	stack_reverse_recursion(&mystack);
	stack_reverse(&mystack);
	stack_reverse(&mystack);
	
	printf("After reverse:\n");

	stack_duplicate(&mystack, (void *(*)())strdup);
	stack_apply_to_each(&mystack, (void (*)())printf);
	
	printf("\n");
	stack_pop(&mystack, free);
	stack_apply_to_each(&mystack, (void (*)())printf);

	printf("\n");
	stack_push(&mystack, s6);
	stack_push(&mystack, s5);
	stack_apply_to_each(&mystack, (void (*)())printf);
	printf("\nSorted stack:\n");
	stack_sort(&mystack, strcmp);
	stack_apply_to_each(&mystack, (void (*)())printf);
	printf("\n");

	printf("Last stack to del: %s\n", (char*)stack_peek(&mystack));
	stack_delete(&mystack, free);
	printf("Should be NULL: %s\n", (char*)stack_peek(&mystack));

	return (0);
}