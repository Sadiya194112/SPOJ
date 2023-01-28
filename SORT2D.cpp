#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<int,int>&x, pair<int,int>&y){
    if(x.first!=y.first)    return x.first<y.first;
    return x.second>y.second;
}
signed main(){
    int tc,i;     scanf("%lld", &tc);
    while(tc--){
        int n;  scanf("%lld", &n);
        vector<pair<int,int>>a(n);
        for(i=0; i<n; i++){
            scanf("%lld%lld", &a[i].first, &a[i].second);
        }
        sort(a.begin(), a.end(), cmp);

        for(i=0; i<n; i++)  cout<<a[i].first<<" "<<a[i].second<<"\n";

    }

    return 0;
}
