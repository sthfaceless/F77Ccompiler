/*
* Generated with F77compiler by @sthfaceless
*/

/*
 * include standard C libs
 * */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <complex.h>

typedef long double complex _complex;

/*
 * shorts for allocating memory for primitive pointers
 * */
#define N_INT(n) (int*) malloc(sizeof(int) * n)
#define N_LONG(n) (long*) malloc(sizeof(long) * n)
#define N_LD(n) (long double*) malloc(sizeof(long double) * n)
#define N_CHAR(n) (char*) malloc(sizeof(char) * n)
#define N_COMPLEX(n) (_complex*) malloc(sizeof(_complex) * n)

/*
 * wrap primitives with pointers as it's default type in fortran 77
 * */
int *_wrap_int(int _val) {
    int *_res = N_INT(1);
    *_res = _val;
    return _res;
}

long *_wrap_long(long _val) {
    long *_res = N_LONG(1);
    *_res = _val;
    return _res;
}

long double *_wrap_long_double(long double _val) {
    long double *_res = N_LD(1);
    *_res = _val;
    return _res;
}

_complex *_wrap_complex(_complex _val) {
    _complex *_res = N_COMPLEX(1);
    *_res = _val;
    return _res;
}

char *_wrap_char(char _val) {
    char *_res = N_CHAR(1);
    *_res = _val;
    return _res;
}

/*
 * cast primitives to string
 * */
char *_int_to_string(int val) {
    char *_res = N_CHAR(16);
    sprintf(_res, "%d", val);
    return _res;
}

char *_long_to_string(long val) {
    char *_res = N_CHAR(32);
    sprintf(_res, "%ld", val);
    return _res;
}

char *_double_to_string(long double val) {
    char *_res = N_CHAR(32);
    sprintf(_res, "%Lf", val);
    return _res;
}

char *_complex_to_string(_complex _val) {
    char *_res = N_CHAR(128);
    sprintf(_res, "%Lf", creall(_val));
    if (cimagl(_val) != 0) {
        int _len = strlen(_res);
        sprintf(_res + _len, "%Lfi", cimagl(_val));
    }
    return _res;
}

/*
 * concatenate strings in '+' statement
 * */
char *_str_add(char *l, char *r) {
    int l_size = strlen(l), r_size = strlen(r);
    char *res = N_CHAR(l_size + r_size + 1);
    memcpy(res, l, l_size);
    memcpy(res + l_size, r, r_size);
    res[l_size + r_size] = 0;
    return res;
}

/*
 * for input / output streams
 * */
FILE *_io_units[100];

/*
 * Begin FORTRAN 77 code
 * */