#include<equi.h>
#include<iso.h>
#include<ra.h>
#include<sc.h>
#include<stdio.h>
#include<math.h>

int areaRA(int a,int b){
	return 0.5*(a*b);
}

int periRA(int a, int b){
	return a+b+sqrt((double)(pow(a,2)+(double)(pow(b,2))));
}
