// place (numApple, remainPlace, minPerPlace)
#include <bits/stdc++.h>
typedef long long ll;
const int N=15;
int a[N][N][N];
int ans(int na, int np, int t){
    ll sum = 0;
    if (a[na][np][t]) return a[na][np][t];
    if (np == 1) return 1;
    if (na < t) return 0;
    for (int i = t; np * i <= na; i++){
        a[na-i][np-1][i] = ans(na-i, np-1, i);
        sum += a[na-i][np-1][i];
        // printf("%d %d %d %d\n", na-i, np-1, i, a[na-i][np-1][t]);
    }
    return sum;
    
}
void solve(void){
    int na, np; std::cin >> na >> np;
    std::cout << ans (na, np, 0) << '\n';

}
int main(){
    int _; std::cin >> _;
    while (_--) solve ();
    return 0;
}