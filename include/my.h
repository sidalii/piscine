#ifndef MY_H_
# define MY_H_

#include <mylist.h>

void my_putchar(char c);
void my_isneg(int nb);
void my_put_nbr(int nb);
void my_put_ptr(void* ptr);
void my_swap(int *a, int *b);
void my_putstr(char *str);
void putline(char* str);
void putlineb(char* str);
int my_strlen(char *str);
int my_getnbr(char *str);
void my_sort_int_tab(int *tab, int size);
int my_power_it(int nb, int power);
int my_power_rec(int nb, int power);
int my_square_root(int nb);
int my_is_prime(int nombre);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int nb);
char *my_evil_str(char *str);
char *my_revstr(char *str);
char *my_strstr(char *str, char *to_find);
char *my_strchr(char *str, char to_find);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
void my_showstr(char *str);
void my_showmem(char *str, int size);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char *src, int nb);
int my_strlcat(char *dest, char *src, int size);
char* my_strdup(char* str);
int my_getnbr_base(char *nbr, char *base);
char *convert_base(char *nbr, char *base_from, char *base_to);
char **my_str_to_wordtab(char *str);
int is_big_endian(void);
void my_convertnbr_base_rec(int nbr, char* base, int base_len, char* str);
void my_putnbr_base(int nbr, char *base);
void my_putptr_base(void* ptr, char* base);
int is_lower(char c);
int is_upper(char c);
int is_num(char c);
int is_alpha(char c);
int is_alphanum(char c);
int is_printable(char c);
int get_nb_at_pos(int nb, int pos);
int get_nb_len(int nb);
int check_reine(char* chessboard, int x, char y, int* solutions);
int my_8r1();
void my_8r2();
int my_factorielle_it(int nb);
int my_factorielle_rec(int nb);
int is_word_start(char* str, int i);
int is_word_end(char* str, int i);
int count_str_words(char* str);
int find_in_tab(char** tab, int size, char* to_find);
void my_sort_wordtab(char **tab);
void my_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
t_list* add_in_list(void* data, t_list* list);
t_list *my_params_in_list(int ac, char **av);
int my_list_size(t_list *begin);
void my_rev_list(t_list **begin);
void my_apply_on_list(t_list *begin, void (*f)(void*));
int count_str_token(char* str, char token);
char** split_str(char* str, char token);
int get_char_pos(char* s, char c);

#endif