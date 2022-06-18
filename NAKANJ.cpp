#include<bits/stdc++.h>
using namespace std;
const int INF=1e9+7;

int vis[8][8];
int lev[8][8];

int getX(string s){
    return s[0]-'a';
}
int getY(string s){
    return s[1]-'1';
}
bool isValid(int x, int y){
    return (x>=0 && y>=0 && x<8 && y<8);
}
vector<pair<int, int> > movements = {
    {1,2},{-1,2},
    {1,-2},{-1,-2},
    {2,1},{2,-1},
    {-2,1},{-2,-1}
};

int bfs(string src, string dest){
    int srcX = getX(src);
    int srcY = getY(src);
    int destX = getX(dest);
    int destY = getY(dest);

    queue<pair<int, int> > q;
    q.push({srcX,srcY});
    vis[srcX][srcY] = 1;
    lev[srcX][srcY] = 0;

    while(!q.empty()){
        pair<int, int> v = q.front();
        int x = v.first, y = v.second;
        q.pop();

        for(auto m : movements){
            int childX = m.first + x;
            int childY = m.second + y;
            if(!isValid(childX, childY))    continue;
            if(!vis[childX][childY]){
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y]+1;
                vis[childX][childY] = 1;
            }
        }
        if(lev[destX][destY]!=INF){
            break;
        }
    }
    return lev[destX][destY];
}

void reset(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            lev[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}

int main(){
    int tc;     cin>>tc;
    while(tc--){
        reset();
        string src,dest;
        cin>>src>>dest;
        cout<<bfs(src, dest);
    }
    return 0;
}
