#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void data_output_screen(int n, double t[], double Uin[], double Uout[]){
    int i;
    printf ("%20s%20s%20s","Time","Uin","Uout\n");
    for (i=1;i<=n;i++){
    printf ("%20.5lf%20.5lf%20.5lf\n",t[i],Uin[i],Uout[i]);
    }
}
void data_output_file(int n, double t[], double Uin[], double Uout[]) {
    char name[100];
    printf("Vvedite imya faila = ");
    scanf ("%s", name);
    FILE* out = fopen(name, "wt");
    if (!out) {
        printf("I can't open file %s for read", name);
        exit(2);
    }
    fprintf(out, "%10s%20s%20s%20s\n", "¹", "Time", "Uvxod", "Uvixod");
    int i;
    for (i = 0; i < n; i++) {
        fprintf(out, "%10d%20.3lf%20.3lf%20.3lf\n", i, t[i], Uin[i], Uout[i]);
    }