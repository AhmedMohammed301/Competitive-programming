#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include <queue>
#include <stack>
#include<iomanip>
#include<set>
#include<map>
using namespace std;
#define loop(i,n) for(int i = 0,_ = (n);i < _;i++)
#define lp(i,m,n) for(int i=m;i<n;i++)
#define all(v) v.begin(),v.end()
#define omani dance();
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sz(v) (int)v.size()
#define uq(c) (c).resize(unique(all(c)) - (c).begin())
typedef long long ll;

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void dance()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

ll az[100+9][100 + 9];
ll dp[10+9];
ll dpp[100 + 9][100 + 9];

/*
void erc(int i, int j)
{
	if (i < 0)
	{
	
		return;
	}
	if (j < 0)
	{
		
		return;
	}
	dpp[i][j] = dp[i][j] + arr[i][j];
	erc(i - 1, j);
	erc(i, j - 1);
	erc(i - 1, j - 1);
}*/
const int X = 10e5 + 9;
ll arr[X];
ll ar[X];
int main() {
	omani
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int m; cin >> m;
		for (int i = 0; i < m; i++)
		{
			int l, r;
			cin >> l >> r;
			ar[l - 1]-=1, ar[r] +=1;
		}
		for (int i = 0; i <= n; i++)
			ar[i] += ar[i - 1];
		
		cout <<count(ar,ar+n,0) << endl;
		for (int i = 0; i < n; i++)
		{
			if(ar[i]==0)
			cout << arr[i] << " ";
		}
		

	return 0;

}