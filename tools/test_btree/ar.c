#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#include "ft_btree.h"

void print_node_info(void *data, size_t current_level, size_t is_first_elem){fprintf(stderr, "%s, %zu, %zu\n", (char*)data, current_level, is_first_elem);}
/*
void	print_rbnode_info(void *data, int current_level, int is_first_elem, int color){printf("%s, l:%d, %d, c:%d\n", (char*)data, current_level, is_first_elem, color);}
*/

int main(void)
{
	struct s_btree	*root;
	struct s_btree	fourteen, fiveteen, two, one, four, five, seven, eight, eleven;
 	int				on = 1, el = 11, tw = 2, fo = 4, fi = 5, sev = 7, eig = 8, fourt = 14, fivte = 15;
	root = &eleven;
	fourteen =	(struct s_btree){NULL, &fiveteen, &eleven, &fourt, RB_BLACK};
	fiveteen =	(struct s_btree){NULL, NULL, &fourteen, &fivte, RB_RED};
	two	=		(struct s_btree){&one, &seven, &eleven, &tw, RB_RED};
	one =		(struct s_btree){NULL, NULL, &two, &on, RB_BLACK};
	four =		(struct s_btree){NULL, NULL, &five, &fo, RB_RED};
	five =		(struct s_btree){&four, NULL, &seven, &fi, RB_RED};
	seven =		(struct s_btree){&five, &eight, &two, &sev, RB_BLACK};
	eight =		(struct s_btree){NULL, NULL, &seven, &eig, RB_RED};
	eleven =	(struct s_btree){&two, &fourteen, NULL, &el, RB_BLACK};



	fprintf(stderr, "\n\n");
//	rb_apply_by_level(root, rbapplylevel);
//	btree_apply_by_level(root, rbapplylevel);
	fprintf(stderr, "\n\n");

	return (0);
}
