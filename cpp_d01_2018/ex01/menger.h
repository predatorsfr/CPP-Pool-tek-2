/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_h
*/

# ifndef MY_H
# define MY_H

/*************/
/**FUNCTIONS**/
/*************/
void		my_putchar(char c);
int		my_isneg(int nb);
int		my_put_nbr(int nb);
void		my_swap(int *a, int *b);
int		my_putstr(char const *str);
int		my_strlen(char const *str);
int		my_getnbr(char const *str);
void		my_sort_int_array(int *tab, int size);
int		my_compute_power_rec(int nb, int power);
int		my_compute_square_root(int nb);
int		my_is_prime(int nb);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char const *src);
char		*my_strncpy(char *dest, char const *src, int n);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char const *to_find);
int		my_strcmp(char const *s1, char const *s2);
int		my_strncmp(char const *s1, char const *s2, int n);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char const *str);
int		my_str_isnum(char const *str);
int		my_str_islower(char const *str);
int		my_str_isupper(char const *str);
int		my_str_isprintable(char const *str);
int		my_showstr(char const *str);
int		my_showmem(char const *str, int size);
char		*my_strcat(char *dest, char const *src);
char		*my_strncat(char *dest, char const *src, int nb);
int		count_substrac(char const *str);
int		get_strlen(char const *str);
int		Pos_or_Neg(int nb);
void		set_first_upper(char *str, int i);
void		set_all_lower(char *str, int i);
int		check_str(char const *str, char const *to_find);
char		*my_strdup(char const *str);
int		cat(int ac, char **av);
char		*standard_output();
void		infin_add(char *s1, char *s2);
int 		get_all_nbr(char *str);
char		**parse(char *str);
char		**my_str_to_word_array(char const *str);
int		count_words(char *str);
int square(int l, int ss, char *av);
/**********/
/**BISTRO**/
/**********/
int	my_atoi(char *nbr);
int		sum_parse(char **expr);
int		eval_expr(char *expr);

/**********/
/**MACROS**/
/**********/
# define Pos_Neg(nb, res)	((nb % 2 == 0) ? (res = 1) : (res = -1))

#endif	/* MY_H */
