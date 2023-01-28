@Sadiya

#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;  cin>>n;
    map<pair<int,int>,string>mp;
    map<pair<int,int>,string>::iterator it;

    while(n--){
        int a,b;    string s;
        cin>>a>>b>>s;
        mp[{a,b}]=s;
    }
//    for(it=mp.begin(); it!=mp.end(); it++){
//        cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
//    }
    int q;  cin>>q;
    while(q--){
        int a,b;    cin>>a>>b;
        cout<<mp[{a,b}]<<endl;
    }

    return 0;
}
