
#ifndef FT_STRREP_H
# define FT_STRREP_H

struct s_strrep
{
	const char	*content;
	const char	*expansion;
	char		*dst;
	char		*cpy;
	char		*ptr;
	char		*expansion_cpy;
	char		*content_cpy;
};

#endif
