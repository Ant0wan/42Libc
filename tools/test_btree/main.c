#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "ft_btree.h"

void print_node_info(void *data, size_t current_level, size_t is_first_elem){fprintf(stderr, "%s, %zu, %zu\n", (char*)data, current_level, is_first_elem);}
/*
void	print_rbnode_info(void *data, int current_level, int is_first_elem, int color){printf("%s, l:%d, %d, c:%d\n", (char*)data, current_level, is_first_elem, color);}
*/

int main(void)
{
	struct s_btree	*root = NULL;
	char	*n1;
	char	*n2;
	char	*n3;
	char	*n4;
	char	*n5;
	char	*n6;
	char	*n7;
	char	*n8;

	n1 = strdup("1st node\n");
	n2 = strdup("2nd node\n");
	n3 = strdup("3rd node\n");
	n4 = strdup("4th node\n");
	n5 = strdup("5th node\n");
	n6 = strdup("6th node\n");
	n7 = strdup("7th node\n");
	n8 = strdup("8th node\n");

	btree_insert_data(&root, n5, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n3, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n7, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n2, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n1, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n4, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n6, (int (*)(void*,void*))strcmp);
	btree_insert_data(&root, n8, (int (*)(void*,void*))strcmp);

	fprintf(stderr, "\nInfix traversal:\n");
	btree_apply_infix(root, (void (*)(void*))printf);
	fprintf(stderr, "\n");

	fprintf(stderr, "\nPrefix traversal:\n");
	btree_apply_prefix(root, (void (*)(void*))printf);
	fprintf(stderr, "\n");

	fprintf(stderr, "\nPostfix traversal:\n");
	btree_apply_postfix(root, (void (*)(void*))printf);
	fprintf(stderr, "\n");

	fprintf(stderr, "\nLevel count: %zu\n\n", btree_level_count(root));
	struct s_btree *test;


	test = (struct s_btree*)btree_search_data(root, "5th node\n", (int (*)(void*, void*))strcmp);
	fprintf(stderr, "\n%s\n\n", test->data);


	return (0);
}
