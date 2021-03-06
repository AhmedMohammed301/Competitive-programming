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

ll arr[100+9][100 + 9];
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
int n;
int memo(int i,int nw)
{
	if (i == n)
		return 0;
	int ch1 = memo(i + 1, nw);
	int ch2 = 0;
	if (dp[i] > dp[nw])
		ch2 = memo(i + 1, i) + 1;

	return max(ch1, ch2);
}
int dynamicp(int n)
{
	int bdp[10 + 9];
	dp[0] = -1;

	bdp[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (dp[j] < dp[i])
				if (bdp[j] + 1 >= bdp[i])
				{
					bdp[i] = bdp[j] + 1;
				}
		}
	}
		int ans = 0;
	
		for (int i = 0; i <= n; i++)
			ans = max(ans, bdp[i]);
	return ans;
}
int sd(int x, int y)
{
	if (x >= 0 && y >= 0)
		return 1;
	else if (x < 0 && y >= 0)
		return 2;
	else if (x >= 0 && y < 0)
		return 3;
	else
		return 4;

}

int main() {
	omani
		string str;
	cin >> n;
	while (n--)
	{
		deque<char>ch;
		cin >> str;
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] == ')')
			{
				cout << ch.back(); ch.pop_back();
			}
			else if (str[i] >= 95 && str[i] <= 122)
				cout << str[i];
			else if (str[i] != '(')
				ch.push_back(str[i]);
		}

		cout << endl;
	}

	return 0;

}