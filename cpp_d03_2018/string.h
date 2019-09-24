/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 04
*/

#ifndef CHAR_H
#define CHAR_H

typedef struct string_s {
    char *str;
    void (*assign_s)(struct string_s *this, const struct string_s *str);
    void (*assign_c)(struct string_s *this, const char *s);
    void (*append_s)(struct string_s *this, const struct string_s *str);
    void (*append_c)(struct string_s *this, const char *s);
    char (*at)(const struct string_s *this, size_t pos);
    void (*clear)(const struct string_s *this);
    int (*size)(const struct string_s *this);
    int (*compare_s)(const struct string_s *this, const struct string_s *str);
    int (*compare_c)(const struct string_s *this, const char *str);
    size_t (*copy)(const struct string_s *this, const char *s, size_t n, size_t pos);
    char (*c_str)( const struct string_s *this);
    int (*empty)(const struct string_s *this);
} string_t;

char *strcat(char *dest, const char *src);
size_t strlen(const char *s);
char *strdup(const char *s);
const char *c_str( const string_t *this);
int empty(const string_t *this);
size_t copy(const string_t *this, char *s, size_t n, size_t pos);
int strcmp(const char *s1, const char *s2);
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
char at(const string_t *this ,size_t pos);
void clear(string_t *this);
int size(const string_t *this);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
void append_s(string_t *this, const string_t *str);
void append_c(string_t *this, const char *s);
void string_init(string_t *this, const char *s);
void init_val(string_t *this);
void string_destroy(string_t *this);

#endif
