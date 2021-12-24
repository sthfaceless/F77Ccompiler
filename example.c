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


long double* _icount (long double *_ifirst, long double *_isecond) {
	long double *_icount = malloc(sizeof(long double));
	long double *_x = _str_add(_long_to_string(12),"asds");
	*_ifirst = *_ifirst + *_isecond;
	*_icount = powl(*_ifirst, powl(*_isecond, powl(*_ifirst, *_isecond)));
	return _icount;
}

long* _getLevel (long *_level) {
	long *_getLevel = malloc(sizeof(long));
	for (long *_item = _wrap_long(1);*_item <= *_level; *_item += *_level * 2){
		if(*_item <= *_level) {
			fprintf(stdout, "%ld %ld %s\n", *_item, *_item * 2, _str_add(_long_to_string(*_item)," asd"));
		}else {
			if(*_level >= *_level) {
				*_getLevel = _str_add(_long_to_string(25),"111");
			}else if(*_level >= *_level) {
				*_getLevel = pow(26, 31);
				if(2 <= *_item) {
					_icount(_level, _item);
				}
			}else {
				for (long *_j = _wrap_long(1);*_j <= *_level; *_j += 22){
					fprintf(stdout, "%ld\n", 23);
				}
			}
			fprintf(stdout, "%s\n", "end");
			sleep(10);
		}
	}
	return _getLevel;
}

//
// This program reads n points from a data file and stores them in
// 3 arrays x, y, z.
//

int main(int argc, char **args){
	long *_nmax = malloc(sizeof(long));
	long *_n = malloc(sizeof(long));
	long double *_x = malloc(sizeof(long double));
	long double *_y = malloc(sizeof(long double));
	long double *_z = malloc(sizeof(long double));
	_complex *_r = _wrap_complex((10, 131));
	_complex *_w = _wrap_complex((1e3, 30e6));
	_complex *_a = malloc(sizeof(_complex));
	*_a = *_r * *_w + (*_x, *_y) - (34, 31) * (31, 31);
	*_nmax = 1000;
	// Open the data file
	_io_units[20] = fopen("points.dat", "a+t");
	// Read the number of points
	fscanf(_io_units[20], "%ld", _n);
	if(*_n > *_nmax) {
		fprintf(stdout, "%s %ld %s %ld\n", "Error: n = ", *_n, "is larger than nmax =", *_getLevel(_nmax));
	}
	for (long *_i = _wrap_long(1);*_i <= *_n; *_i += 5 * *_n + *_icount(_wrap_long(48), _wrap_long(37 - *_n))){
		fscanf(_io_units[20], "%Lf %Lf %Lf", _x, _y, _z);
		while (1 <= 2){
			fprintf(stdout, "%s\n", _str_add("123",_long_to_string(11)));
		}
	}
	_label9000: 
	fprintf(stdout, "%s\n", "info");;
	goto _label9000;
	// Close the file
	fclose(_io_units[20]);
	// Now we can process the data somehow...
}