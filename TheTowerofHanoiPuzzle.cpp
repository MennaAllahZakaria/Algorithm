//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;

// the tower of hanoi puzzle
// time coplexity : O( pow(2,n) )
void HanoiPuzzle(int n,int source ,int goal, int aux){
    if (n==0) return;

    HanoiPuzzle(n-1,source,aux,goal);

    cout << source <<" -> "<< goal<<nl;

    HanoiPuzzle(n-1,aux,goal,source);


}



int main()
{

   int n ,source , goal, aux;
   cin >> n>>source >> goal>> aux;

   HanoiPuzzle(n,source,goal,aux);

    
    return 0;
}
