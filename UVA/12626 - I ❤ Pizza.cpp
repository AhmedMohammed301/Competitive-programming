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

int arr[27];	bool f[100000];

int main() {
	omani
		string str,s="MARGARITA";

	map<char, int>mp1;
	mp1['M'] = 1;
	mp1['A'] = 3;
	mp1['R'] = 2;
	mp1['G'] = 1;
	mp1['I'] = 1;
	mp1['T'] = 1;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		map<char, int>mp;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (mp[str[j]] == NULL&&mp1[str[i]]!=NULL)
				mp[str[j]] = 1;
			else
				mp[str[j]]++;
		}
	
		map<char, int>::iterator it;
		it = mp.begin();
		map<char, int>::iterator itt;
		itt = mp1.begin();

		it = mp.begin();
		
		int ans = 0;
		


		
		while (true)
		{
			
			mp[itt->first] -= itt->second;
			if (mp[itt->first] < 0) {
				break;
			}
			it++, itt++;
			
			if (itt == mp1.end())
			{
				it = mp.begin();
				itt = mp1.begin();
				ans++;
			}
		}


		cout << ans<<endl;
	}

	return 0;
}