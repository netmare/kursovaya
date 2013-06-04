#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "functions.h"

double parametr (int n, double t[], double dt, double *U) {
	int i;
	double dlit=0;
	for (i=0;i<n;i++) {
	if (U[i+1]==U[i]) dlit+=dt;
	}
	return dlit;
}