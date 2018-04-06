#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>
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
int n, x; vector<int>v;
vector<deque<int>>vv;
deque<int>dq;
void qw(int i,int a)
{
	if (i == n)
	{	
		return;
	}
	
	 if (brr[i]+a <= x)
	 {	
		 dq.push_back(brr[i]);
		 if (brr[i] + a == x)
		 {
			 vv.push_back(dq);		
		 }		
		 qw(i + 1, a + brr[i]);
		 dq.pop_back();
	}
	 qw(i + 1, a);
}

int main() {
	vector<string>vb;
	omani		
		while (cin >> x >> n && n) {			
			for (int i = 0; i < n; i++)
				cin >> brr[i];
			qw(0, 0);
			if (vv.size() == 0)
			{
			//	cout<<"Sums of "<<x<< ":\n";
			//	cout << "NONE" << endl;
				string str = to_string(x);
				string d = "";
				d += "Sums of " + str + ":";
				vb.push_back(d);
				vb.push_back("NONE");
			}
			else {
				unordered_set<string>st;
				for (int i = 0; i < vv.size(); i++)
				{
					string s = "";
					for (int j = 0; j < vv[i].size(); j++)
					{
						//cout << vv[i][j] << " ";
						string str = to_string(vv[i][j]);
						s += str;
						if (j != vv[i].size() - 1)
							s += '+';
					}

					st.insert(s);
				}
				string str = to_string(x);
				string as = "";
				as += "Sums of " + str+":";
			//	cout << "Sums of " << x << ":\n";
				unordered_set<string>::iterator iter;
				vb.push_back(as);
				for (iter = st.begin(); iter != st.end(); ++iter) {
					//cout << *iter << endl;
					vb.push_back(*iter);
				}
			}
		//	cout << endl;
			dq.clear();
			vv.clear(); v.clear();
		}

	for (int i = 0; i < vb.size(); i++)
		cout << vb[i] << "\n";
	
	//cout << endl;
	
	
	return 0;

}