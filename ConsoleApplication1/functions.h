#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define EXIT_CODE 4

int get_choice(void);
void time(int n, double tn, double dt, double t[]);
void uin(int n, double t[], double Uin[]);
void uout (int n, double t[], double Uin[], double Uout[]);
double parametr (int n, double t[], double dt, double *U);
void data_output_screen(int n, double t[], double Uin[], double Uout[]);
void data_output_file(int n, double t[], double Uin[], double Uout[]);