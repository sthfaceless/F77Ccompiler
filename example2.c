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


// Begin commentary
long double* _hypo (long *_x, long *_y) {
	long double *_hypo = malloc(sizeof(long double));
	*_hypo = pow(*_x * *_x + *_y * *_y, 1 / 2);
	return _hypo;
}


int main(int argc, char **args){
	long *_a = malloc(sizeof(long));
	long *_b = malloc(sizeof(long));
	long *_c = malloc(sizeof(long));
	fprintf(stdout, "%s\n", "This program calculates a ** b + c, type a, b, c:");
	fscanf(stdin, "%ld %ld %ld", _a, _b, _c);
	fprintf(stdout, "%ld\n", pow(*_a, *_b) + *_c);
	if(*_a ^ 1) {
		fprintf(stdout, "%s %ld %s\n", "Ha \"a\" is greater than 1, it's", *_a, "you are crazy");
	}else if(*_b & 1) {
		fprintf(stdout, "%s %ld\n", "Let's make \"b\" greater by 3", *_b + 3);
	}else {
		fprintf(stdout, "%s %ld\n", "Calculate hypo for \"b\" and \"c\"", *_hypo(_b, _c));
	}
	for (long *_i = _wrap_long(0);*_i <= 3 * *_c - 1; *_i += 3){
		fprintf(stdout, "%s %ld\n", "Print this message exactly c times", *_i);
	}
}