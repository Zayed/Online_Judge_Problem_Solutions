// D - Number Formatting.cpp

/// Template by Zayed ///

///************************************************************///
/// #include <bits/stdc++.h>
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

#include <algorithm>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ctime>
///************************************************************///
using namespace std;
int caseno = 1;
///************************************************************///
#define NL '\n'
#define SF scanf
#define PF printf
#define PC() printf("Case %d: ", caseno++)
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
///************************************************************///
#define INF (1 << 31) - 1
#define MOD 1000000007
#define pii pair<int, int>
#define pLL pair<LL, LL>
#define pis pair<int, string>
#define psi pair<string, int>
#define PI 2 * acos(0.0);
#define EPS 1e-11;
///************************************************************///
typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64
///************************************************************///
// Numeric Functions
// Translator Functions
///************************************************************///

/*
*******4 Direction Array*******
int dx[] = {0, 0, - 1, 1}, dy[] = {-1, 1, 0, 0};
*******8 Direction Array*******
int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1};
********Knight Moves********
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};
*/

const int SIZE = 1e6;
string S, T, C = "88";

int main()
{
	BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len;
	///READ();
	///WRITE();
	cin >> tcases;
	while(tcases--)
	{
		cin >> S;

        T = "";
        if(S[0] != '8' && S[1] != '8')
		{
			T += C;
			T += S;
			//cout << "T = " << T << NL;
		}
		else
			T = S;

		if(T[2] == '0' && T[3] == '1' && T[4] == '1')
			cout << T << " " << "Citycell\n";

		else if(T[2] == '0' && T[3] == '1' && T[4] == '5')
			cout << T << " " << "Teletalk\n";

		else if(T[2] == '0' && T[3] == '1' && T[4] == '6')
			cout << T << " " << "Airtel\n";

		else if(T[2] == '0' && T[3] == '1' && T[4] == '7')
			cout << T << " " << "Grameenphone\n";

		else if(T[2] == '0' && T[3] == '1' && T[4] == '8')
			cout << T << " " << "Robi\n";

		else if(T[2] == '0' && T[3] == '1' && T[4] == '9')
			cout << T << " " << "Banglalink\n";
	}

	return 0;
}


