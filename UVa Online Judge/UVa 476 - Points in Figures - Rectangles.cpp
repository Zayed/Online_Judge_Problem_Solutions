﻿// UVa 476 - Points in Figures: Rectangles.cpp
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

//#define  LL long long
#define MAX 100005
#define MOD 1000000007

#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define sf1(x) scanf("%d",&x)
#define sf scanf
#define pf1(x) printf("%d",x)
#define pf printf

using namespace std;

// BEGINTEMPLATE_BY_ZAYED
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 500;

typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long LL;//NOTES:"%lld"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

typedef stack<int> si;
typedef queue <int> qi;
typedef vector <int> vi;
typedef pair <LL, LL> pLL;
typedef pair <string, int> psi;
typedef pair <int, int> Pii;
typedef map <int, int> mii;
typedef map <char, int> mci;
typedef map <string, int> msi;
typedef map <string, string> mss;

template<class T> inline void checkmin(T &a, T b){ if (b < a) a = b; }//NOTES:checkmin(
template<class T> inline void checkmax(T &a, T b){ if (b > a) a = b; }//NOTES:checkmax(
template<class T> inline T sqr(T x){ return x * x; }//NOTES:square
template<class T> inline T _max(T a, T b){ return (a > b) ? a : b; }
template<class T> inline T _min(T a, T b){ return (a < b) ? a : b; }
template<class T> inline T fAbs(T a) { return a< 0 ? a * (-1) : a; }
template<class T> inline void SWAP(T &a, T &b) { T t = a; a = b; b = t; }
LL POW(LL base, LL power){
	LL I, res = base; if (power == 0) return 1;
	for (I = 0; I < power - 1; I++) res *= base;
	return res;
}
//Translator
bool isUpperCase(char c){ return c >= 'A' && c <= 'Z'; }//NOTES: isUpperCase(
bool isLowerCase(char c){ return c >= 'a' && c <= 'z'; }//NOTES: isLowerCase(
bool isVowel(char c) { return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); }//NOTES: isVowel(
bool isLetter(char c){ return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'; }//NOTES: isLetter(
bool isDigit(char c){ return c >= '0' && c <= '9'; }//NOTES:isDigit(
char toLowerCase(char c){ return (isUpperCase(c)) ? (c + 32) : c; }//NOTES: toLowerCase(
char toUpperCase(char c){ return (isLowerCase(c)) ? (c - 32) : c; }//NOTES: toUpperCase(
int toInt(string s){ int r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toInt(
double toDouble(string s){ double r = 0; istringstream sin(s); sin >> r; return r; }//NOTES:toDouble(
string toString(int n){ string s; stringstream convert; convert << n; s = convert.str(); return s; }//NOTES:toString
// ENDTEMPLATE_BY_ZAYED

// fflush(stdout);
string S, T;
char s[SIZE];
double X[SIZE], Y[SIZE];
int M[1000][1000];

int main()
{
	std::ios_base::sync_with_stdio(0);
	int tcases, caseno = 1, I, J, K, N, n, m, cnt, len, f;
	double x, y;
	char c;
	I = 0;
	while (cin >> c){
		if (c == '*') break;
		cin >> X[I] >> Y[I];
		I++;
		cin >> X[I] >> Y[I];
		I++;
	}
	cnt = 1;
	while (1){
		cin >> x >> y;
		if (x == 9999.9 && y == 9999.9) break;

		f = 0;
		for (K = 0; K < I; K += 2){
			if ((x > X[K] && x < X[K + 1]) && (y < Y[K] && y > Y[K + 1])){
				cout << "Point " << cnt << " is contained in figure ";
				if (K == 0) cout << 1 << NL;
				else cout << K / 2 + 1 << NL;
				f = 1;
			}
		}
		if (f == 0) cout << "Point " << cnt << " is not contained in any figure\n";
		cnt++;
	}

	return 0;
}