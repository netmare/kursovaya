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
	double dt = (tk - tn) / (n - 1);
	int choice;
	    while ((choice = get_choice()) != EXIT_CODE) {
        switch (choice) {
            case 1: ;
                break;
            case 2: get_file(&n, &tn, &tk);
                break;
            case 3: array_time(n, t, tn, tk);
                array_in(n, t, Uin, tn, tk);
                array_out(n, Uin, Uout);
                data_output_screen(n, t, Uin, Uout);
                break;
            case 4: moment_vremeni(n, t, Uout);
                break;
            case 5: data_output_file(n, t, Uin, Uout);
                break;
        }
    }
   // time(n, tn, tk, t);
    //uin(n, t, Uin);
    //uout(n, t, Uin, Uout);
    return 0;
}
