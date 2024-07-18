#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define ERROR -1

/*Maths operations functions*/
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
int expo(int a, int b);
double sq_root(int n);
double logA(double n, double base);
void rootLog(char c);
void swi_tch(int a, int b, char c);

/*Display functions*/
void loop(void);
void interface();

#endif /*CALC_H*/
