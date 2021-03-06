// UVa 11504 - Dominos.cpp

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

const int SIZE = 1e5 + 10;
vector<int> G[SIZE], rG[SIZE];
stack<int> topsort;
int visited[SIZE];

void DFS(int u)
{
	int I, v;
	visited[u] = 1;

	for(I = 0; I < G[u].size(); I++)
	{
		v = G[u][I];
		if(visited[v] == 0)
			DFS(v);
	}
	topsort.push(u);
}


int main()
{
	///BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, x, y;
	///READ();
	///WRITE();
	SF("%d", &tcases);
	while(tcases--)
	{
		SF("%d%d", &n, &m);

		for(I = 0; I <= n; I++)
		{
			G[I].clear();
			rG[I].clear();
		}
		while(!topsort.empty())
			topsort.pop();
		memset(visited, 0, sizeof(visited));

		for(I = 0; I < m; I++)
		{
			SF("%d%d", &x, &y);
			G[x].push_back(y);
			rG[y].push_back(x);
		}

		for(I = 1; I <= n; I++)
		{
			if(visited[I] == 0)
				DFS(I);
		}

		memset(visited, 0, sizeof(visited));

		cnt = 0;
		while(!topsort.empty())
		{
			x = topsort.top();
			topsort.pop();

			if(visited[x] == 0)
			{
				cnt++;
				DFS(x);
			}
		}

		PF("%d\n", cnt);
	}

	return 0;
}


