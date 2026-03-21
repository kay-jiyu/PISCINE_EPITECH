#ifndef MY_OPP_H_
#define MY_OPP_H_

typedef struct operator
{
    char *opp;
    int (*f)(int, int);
}
operator_t;

int my_add(int v1, int v2);
int my_sub(int v1, int v2);
int my_mul(int v1, int v2);
int my_div(int v1, int v2);
int my_mod(int v1, int v2);
int my_usage(int v1, int v2);

static const operator_t MY_OPP[] = {
    {"+", &my_add},
    {"-", &my_sub},
    {"*", &my_mul},
    {"/", &my_div},
    {"%", &my_mod},
    {"", &my_usage}};

#endif
