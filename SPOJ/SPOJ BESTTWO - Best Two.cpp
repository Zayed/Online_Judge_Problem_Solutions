// SPOJ BESTTWO - Best Two.cpp
#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>
#include <sstream>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>

#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#define  LL long long
#define MAX 100005
#define MOD 1000000007

#define NL '\n'
using namespace std;

// BEGINTEMPLATE_BY_ZAYED
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int sz = 10010;

typedef unsigned long long ull;//NOTES:"%llu"
typedef long long ll;//NOTES:"%lld"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

typedef stack<int> si;
typedef queue <int> qi;
typedef vector <int> vi;
typedef pair <ll, ll> pll;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef map <char, int> mci;
typedef map <string, int> msi;
typedef pair <string, int> psi;
typedef map <string, string> mss;

template<class T> inline void checkmin(T &a, T b){ if (b<a) a = b; }//NOTES:checkmin(
template<class T> inline void checkmax(T &a, T b){ if (b>a) a = b; }//NOTES:checkmax(
template<class T> inline T sqr(T x){ return x*x; }//NOTES:square
int _max(int a, int b){ return (a > b) ? a : b; }
int _min(int a, int b){ return (a < b) ? a : b; }
inline int _pow(int base, int power){
	int I, result = base;
	if (power == 0)
		return 1;
	for (I = 0; I < power - 1; I++) {
		result = result * base;
	}
	return result;
}
//Translator
bool isUpperCase(char c){ return c >= 'A' && c <= 'Z'; }//NOTES: isUpperCase(
bool isLowerCase(char c){ return c >= 'a' && c <= 'z'; }//NOTES: isLowerCase(
bool isLetter(char c){ return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }//NOTES: isLetter(
bool isDigit(char c){ return c >= '0' && c <= '9'; }//NOTES:isDigit(
char toLowerCase(char c){ return (isUpperCase(c)) ? (c + 32) : c; }//NOTES: toLowerCase(
char toUpperCase(char c){ return (isLowerCase(c)) ? (c - 32) : c; }//NOTES: toUpperCase(
int toInt(string s){ int r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toInt(
double toDouble(string s){ double r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toDouble(
// ENDTEMPLATE_BY_ZAYED

double a[sz];

int main()
{
	int t, _case = 1;
	scanf("%d", &t);
	while (t--){
		int I;
		for (I = 0; I < 3; I++)
			scanf("%lf", &a[I]);
		sort(a, a + 3);
		if (a[0] < 10 && a[1] < 10){
			printf("Failed\n");
			continue;
		}
		else
			printf("%0.2lf\n", (a[1] + a[2]) / 2.00);

	}
	return 0;
}
