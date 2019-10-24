#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "ft_queue.h"

int main(void)
{
	struct	s_queue myqueue = {.rear = NULL, .front = NULL};
	
	char	*s1;

	s1 = strdup("First line");

	queue_enqueue(&(myqueue.rear), s1);


	return (0);
}
