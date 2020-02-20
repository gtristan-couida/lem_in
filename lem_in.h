#ifndef LEM_IN_LEM_IN_H
#define LEM_IN_LEM_IN_H

# define START 1
# define END 2

# include "../libft/libft.h"
#include <fcntl.h>
#include <errno.h>

struct s_lem1;

typedef struct		s_links
{
	int				weight;
	int				flag;
	struct s_links	*next;
	struct s_links	*prev;
	struct s_lem1	*connection_room;
}					t_links;

typedef struct		s_lem1
{
	char			*room_name;
	int 			position[2];
	int 			room_type;
	struct s_lem1	*next;
	struct s_lem1	*prev;
	struct s_links	*links;
}					t_lem1;

typedef struct	s_lem0
{
	int 		ants;
	int 		tmp_info;
	t_lem1 		*start;
	t_lem1 		*end;
	t_lem1		*lem1[10];
	t_list		*head_print;
	t_list		*print;
}				t_lem0;

int		atoi_lem(char *str, t_lem0 *st0);
char	**split(char *line, char c);
void	error_management(t_lem0 *st, char *str);

#endif
