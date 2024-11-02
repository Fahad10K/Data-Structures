#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, r = 1;
	    cin>>n;
	    for(int i = 2; i<=n; i++)
	    {
	        r *= i;
	    }
	    cout<<r<<endl;
	}
	return 0;
}

