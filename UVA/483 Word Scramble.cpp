#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include <queue>
#include<cstdio>
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
#define sortaa(a,n) sort(brr,brr+n)
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


int brr[1000000 + 2];
//int n, k;

int main() {

	omani

		string s;
	while (getline(cin, s))
	{
		string a = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ') 
			{ 
				a += s[i]; 
				
			
			}
			else {
				reverse(a.begin(), a.end());
				cout << a << " ";
				a = "";
			}
		}
		reverse(a.begin(), a.end());
		cout << a << endl;
	}

	return 0;

}