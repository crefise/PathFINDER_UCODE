#ifndef LIBMX_H
#define LIBMX_H

#include <wchar.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <malloc/malloc.h>
typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;
void mx_printint(int n); // good
int mx_strlen(const char *s); // good
void mx_printstr(const char *s); // good
void mx_printchar(char c); // good
void mx_print_unicode(wchar_t c); //good
void mx_print_strarr(char **arr, const char *delim); // good +
double mx_pow(double n, unsigned int pow); // good +
int mx_sqrt(int x); // good
char *mx_nbr_to_hex(unsigned long nbr); // good
char *mx_strnew(const int size); // good
bool mx_isdigit(int c);
bool mx_isalpha(int c);
bool mx_islower(int c);
bool mx_isupper(int c);
bool mx_isspace(char c);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_itoa(int n); // good
void mx_str_reverse(char *s); // good
void mx_foreach(int *arr, int size, void (*f)(int)); // good
int mx_strcmp(const char *s1, const char *s2); // good
int mx_binary_search(char **arr, int size, const char *s, int *count); // good
int mx_bubble_sort(char **arr, int size); // good
int mx_count_substr(const char *str, const char *sub); // good
void mx_swap_char(char *s1, char *s2); // good
void mx_strdel(char **str); // good
void mx_del_strarr(char ***arr); // good
char *mx_strcpy(char *dst, const char* src); // good
char *mx_strcat(char *s1, const char *s2); // good
char *mx_strstr(const char *s1, const char *s2); // good
int mx_count_words(const char *str, char delimeter); // good
char *mx_strtrim(const char *str); // good
char *mx_strncpy(char *dst, const char *src, int len); // good
char **mx_strsplit(char const *s, char c); // good
char *mx_file_to_str(const char *filename);// good
char *mx_strdup(const char *str); // good
t_list *mx_create_node(void *data); // good
void mx_push_front(t_list **list, void *data); // good
void mx_push_back(t_list **list, void *data); // good
int mx_list_size(t_list *list); // good
t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)); // good
void mx_pop_back(t_list **list); // good
void mx_pop_front(t_list **head); // good
int mx_quicksort(char **arr, int left, int right); // FAIL[60]
int mx_get_char_index(const char *str, char c); // good
char *mx_strjoin(char const *s1, char const *s2); // good
char *mx_strndup(const char *s1, size_t n); // good
int mx_get_substr_index(const char *str, const char *sub); // good
char *mx_del_extra_spaces(const char *str); // good
char *mx_replace_substr(const char *str, const char *sub, const char *replace); // good
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
void *mx_memccpy(void *restrict dst, const void *restrict src,int c, size_t n); // good
void *mx_memchr(const void *s, int c, size_t n); // good
int mx_memcmp(const void *s1, const void *s2, size_t n); // good
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n); // good
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len); // good
void *mx_memmove(void *dst, const void *src, size_t len); // good
void *mx_memrchr(const void *s, int c, size_t n); // good
void *mx_memset(void *b, int c, size_t len); // good
void *mx_realloc(void *ptr, size_t size); // good
unsigned long mx_hex_to_nbr(const char *hex); // good
int mx_atoi(const char *str);
#endif
