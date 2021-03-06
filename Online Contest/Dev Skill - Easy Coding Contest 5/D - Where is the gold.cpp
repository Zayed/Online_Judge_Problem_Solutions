// D - Where is the gold?.cpp
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
#include <cstdlib>
#include <ctime>
using namespace std;

int caseno = 1;
#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define SF scanf
#define PF printf
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define PC() printf("Case %d: ", caseno++)
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);

typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

#define INF 1000000000000
#define MOD 1000000007
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 100 + 10;

string S[SIZE];

int main()
{
	BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, row, col, f;
	///READ();
	///WRITE();
	cin >> tcases;
	while(tcases--)
	{
		cin >> row >> col;

		for(I = 0; I < row; I++)
			cin >> S[I];

		cout << "Case " << caseno++ << ":" << NL;
		f = 0;
		for(I = 0; I < row; I++)
		{
			for(K = 0; K < col; K++)
			{
				if(S[I][K] == '$')
				{
					cout << I + 1 << "," << K + 1 << NL;
					f = 1;
				}
			}
		}

		if(f == 0)
			cout << "No Gold Found\n";

	}
	return 0;
}

