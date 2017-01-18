// TimusOJ 1001 - Reverse Root.cpp
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;

const double EPS = 1e-9;
const int arraySize = 1e7;
double array[arraySize];


int main()
{
	long long int n,_count;
	double sqrtN;
	_count = 0;
	int i  = 0;
	while(scanf("%lld",&n) != EOF){
		sqrtN = sqrt((double)n);
		array[i++] = sqrtN;
		_count++;

	}
	int k;

	for(k =_count - 1 ; k>= 0;k--)
		printf("%0.4lf\n",array[k] + EPS);
	return 0;
}