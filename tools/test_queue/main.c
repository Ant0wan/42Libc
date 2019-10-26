#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "ft_queue.h"

int main(void)
{
	struct	s_queue myqueue = {.rear = NULL, .front = NULL};
	
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;
	char	*s7;
	char	*s8;

	s1 = strdup("First line\n");
	s2 = strdup("Second line\n");
	s3 = strdup("Third line\n");
	s4 = strdup("Fourth line\n");
	s5 = strdup("Fifth line\n");
	s6 = strdup("Sixth line\n");
	s7 = strdup("Seventh line\n");
	s8 = strdup("Eighth line\n");

	fprintf(stderr, "size: %d\n", queue_size(&myqueue));

	fprintf(stderr, "%s\n", (char*)queue_front(&myqueue));
	char *stest = (char*)queue_dequeue(&(myqueue.front), NULL);
	fprintf(stderr, "%s\n", stest);
	free(stest);
	fprintf(stderr, "%s\n", (char*)queue_front(&myqueue));
	queue_dequeue(&(myqueue.front), free);

	queue_enqueue(&myqueue, s2);
	queue_enqueue(&myqueue, s3);
	queue_enqueue(&myqueue, s5);
	queue_enqueue(&myqueue, s6);
	queue_enqueue(&myqueue, s4);
	queue_enqueue(&myqueue, s7);
	queue_enqueue(&myqueue, s1);
	queue_enqueue(&myqueue, s8);

	fprintf(stderr, "size: %d\n", queue_size(&myqueue));
	fprintf(stderr, "Check front: %s\n", (char*)queue_front(&myqueue));
	fprintf(stderr, "Should not change: %s\n", (char*)queue_front(&myqueue));

	fprintf(stderr, "\nInitial queue:\n\n");
	queue_apply_to_each(myqueue.front, (void (*)())printf);
	fprintf(stderr, "\n");

	fprintf(stderr, "\nSorted queue:\n\n");
	queue_sort(&myqueue, strcmp);
	queue_apply_to_each(myqueue.front, (void (*)())printf);
	fprintf(stderr, "\n");
	

	queue_reverse(&myqueue);
	queue_reverse(&myqueue);
	queue_reverse(&myqueue);
	fprintf(stderr, "\nReversed queue:\n\n");
	queue_apply_to_each(myqueue.front, (void (*)())printf);
	fprintf(stderr, "\n");

	queue_dequeue(&(myqueue.front), free);
	queue_dequeue(&(myqueue.front), free);
	queue_dequeue(&(myqueue.front), free);
	fprintf(stderr, "\nDequeued queue:\n\n");
	queue_apply_to_each(myqueue.front, (void (*)())printf);
	fprintf(stderr, "\n");

	char *str;

	str = (char*)queue_dequeue(&(myqueue.front), NULL);
	fprintf(stderr, "%s\n", str);
	free(str);

	fprintf(stderr, "size: %d\n", queue_size(&myqueue));
	queue_delete(&myqueue, free);
	return (0);
}