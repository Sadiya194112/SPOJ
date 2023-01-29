#include<bits/stdc++.h>
using namespace std;
struct node{
    string name;
    int a,v,s;
};
bool cmp(const node &x, const node &y){
    if(x.a!=y.a)    return x.a>y.a;
    else{
        if(x.v!=y.v)    return x.v>y.v;
        else{
            if(x.s!=y.s)    return x.s<y.s;
            else    return x.name<y.name;
        }
    }
}
signed main(){
    int n,i;  scanf("%d", &n);
    node ar[n];
    for(i=0; i<n; i++){
        cin>>ar[i].name>>ar[i].a>>ar[i].v>>ar[i].s;
    }
    sort(ar, ar+n, &cmp);
    for(i=0; i<n; i++)  cout<<ar[i].name<<endl;

    return 0;
}
