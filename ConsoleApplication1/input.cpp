#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "stdafx.h"
#include "functions.h"

void time(int n, double tn, double tk, double t[]) {
    double dt;
    int i;
	printf("Massiv vremeni:\n\n");
    dt = (tk - tn) / (n - 1);
    for (i = 1; i < n; i++) {
        t[i] = tn + dt*i;
        printf("%d    %3.2f\n", i, t[i]);
    }
    i=0;
	printf("\n");
}

void uin(int n, double t[], double Uin[]) {
    int i, tn = 15, tk = 100, t1 = 30, t2 = 60;
    double a = 50, b = 0.07, c = 0.1;
	printf("Massiv Uin:\n\n");
    for (i = 1; i < n; i++) {
        if (t[i] <= t1)
            Uin[i] = a * (1-exp(-b * (t[i] - tn)));
        else if ((t1 < t[i])&&(t[i] < t2))
            Uin[i] = a * (1-exp(-b * (t1 - tn)));
        else if (t[i] > t2)
            Uin[i] = a * (1-exp(-b * (t1 - tn))) * exp(-c * (t[i] - t2));
        printf("%d    %3.2f   %3.5f\n", i, t[i], Uin[i]);
    }
    i=0;
	printf("\n");
}

void uout (int n, double t[], double Uin[], double Uout[]){
    int i;
    double U1 = 15, U2 = 35;
	printf("Massiv Uout:\n\n");
    for (i=1;i<n;i++) {
        if (Uin[i]<U1) Uout[i]=U2/U1*Uin[i];
        else Uout[i]=U2;
        printf("%d    %3.2f   %3.5f    %3.3f\n", i, t[i], Uin[i], Uout[i]);
    }
	printf("\n");
}