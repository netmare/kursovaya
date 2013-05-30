// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "functions.h"

int main() {
    int n = 50;
    double tn = 15, tk = 100, t1 = 30, t2 = 60;
    double t[100], Uin[100], Uout[100];
    time(n, tn, tk, t);
    uin(n, t, Uin);
    uout(n, t, Uin, Uout);
    return 0;
}
