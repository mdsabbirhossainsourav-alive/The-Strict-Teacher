#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> a(m);
        for(int i=0; i<m; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        while (q--) 
        {
            int b;
            cin >> b;
            int left = -1;
            int right = -1;
            int l = 0;
            int r = m-1;
            int pos = m;
            while (l <= r) 
            {
                int mid = (l+r)/2;
                if(a[mid] > b) 
                {
                    pos = mid;
                    r = mid-1;
                } 
                else 
                {
                    l = mid+1;
                }
            }
            if(pos < m)
            {
                right = a[pos];
            }
            if(pos > 0)
            {
                left = a[pos-1];
            }
            if(left == -1) 
            {
                cout << right-1 << endl;
            }
            else if(right == -1) 
            {
                cout << n-left << endl;
            }
            else 
            {
                cout << (right-left)/2 << endl;
            }
        }
    }
    return 0;
}