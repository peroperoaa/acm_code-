//sort
#include <bits/stdc++.h>
#define MAXN 50
using namespace std;
<<<<<<< HEAD
const int N=2e4+10;
int man[N],head[N],cnt=0;
int main()
{
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>head[i];
    for(int i=0;i<m;i++)
        cin>>man[i];
    sort(man,man+m);
    sort(head,head+n);
    if(man[m-1]<head[n-1]||n>m)
    {
        cout<<"you died!";
        return 0;
    }
    int q=0,p;
    for(p=0;p<m;p++)
    {
        if(man[p]>=head[q])
        {
            cnt+=man[p];
            q++;
        }
        if(n==q)break;
    }

    if(q==n)cout<<cnt;
    else cout<<"you died!";
=======
int n,m;
struct Node{
    int u;
    int val;
    Node(int u=0,int val=0):u(u),val(val){}
};
vector<int> vec[MAXN];
int ru[MAXN];
int sum;
int ans;
int k;
set<int> s1;
void make(){
    queue<int> q;
    int ru1[MAXN];
    memset(ru1,0,sizeof(ru1));
    for(int i=0; i<26; i++){
        for(int j=0; j<vec[i].size(); j++){
            ru1[vec[i][j]]++;
        }
    }
    for(int i=0; i<26; i++){
        if(ru1[i]==0&&s1.count(i)){
            q.push(i);
            cout<<char(i+'A');
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<vec[u].size(); i++){
            int v=vec[u][i];
            ru1[v]--;
            if(ru1[v]==0){
                q.push(v);
                cout<<char(v+'A');
            }
        }
    }
}
int have;
void topo(){
    queue<Node> q;
    for(int i=0; i<26; i++){
        if(ru[i]==0&&s1.count(i)){
            q.push(Node(i,1));
            sum++;
        }
    }
    while(!q.empty()){
        int u=q.front().u;
        int val=q.front().val;
        q.pop();
        for(int i=0; i<vec[u].size(); i++){
            int v=vec[u][i];
            ru[v]--;
            if(ru[v]==0){
                sum++;
                q.push(Node(v,val+1));
                ans=max(ans,val+1);
            }
        }
    }
    if(ans==n){
        printf("Sorted sequence determined after %d relations: ",k);
        make();
        cout<<".";
        exit(0);
    }
    if(sum!=have){
        printf("Inconsistency found after %d relations.",k);
        exit(0);
    }
}
int ru2[MAXN];
int main(){
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        string s;
        cin>>s;
        k=i;
        vec[s[0]-'A'].push_back(s[2]-'A');
        s1.insert(s[0]-'A');
        s1.insert(s[2]-'A');
        have=s1.size();
        ru2[s[2]-'A']++;
        sum=0;
        ans=0;
        memcpy(ru,ru2,sizeof(ru2));
        topo();
    }
    printf("Sorted sequence cannot be determined.");
>>>>>>> e31a707297e8fd6c2c6a4504ca75c1d682c101a7
    return 0;
}
