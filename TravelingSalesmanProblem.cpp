//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;

//Traveling Salesman Problem (TSP)
// time coplexity: o( n! )


vector<vector<int>> v(10,vector<int>(10));
vector<int> completed(10);
int n, cost = 0;
 
int least(int c) {
  int i, nc = 999;
  int min = 999, kmin;
 
  for (i = 0; i < n; i++) {
    if ((v[c][i] != 0) && (completed[i] == 0))
        if (v[c][i] + v[i][c] < min) {
            min = v[i][0] + v[c][i];
            kmin = v[c][i];
            nc = i;
        }
    }

    if (min != 999)
    cost += kmin;
 
    return nc;
}

void mincost(int city) {
    int i, ncity;
 
    completed[city] = 1;
 
  
  ncity = least(city);
 
  if (ncity == 999) {
    ncity = 0;
    cout<<ncity+1;
    
    cost += v[city][ncity];
    
    return;
  }
 
  mincost(ncity);
}
    
int main() {
    int n = 4;
    v[0][0] = 0;
    v[0][1] = 4;
    v[0][2] = 1;
    v[1][0] = 4;
    v[1][1] = 0;
    v[1][2] = 2;
    v[2][0] = 1;
    v[2][1] = 2;
    v[2][1] = 0;
    
    int i;
    for(i = 0 ; i < n; i++){
        completed[i] = 0;
    }
    mincost(0);
    cout<<cost;
    
    return 0;
}
