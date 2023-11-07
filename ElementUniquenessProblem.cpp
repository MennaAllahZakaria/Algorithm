//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



// Element uniqueness problem
// time coplexity: o( pow(n,2))

bool ElementUniquenessProblem(int n, vector<int>v){

    for ( int i=0;i<n-2;i++){
        for ( int j=i+1;j<n-1;j++){
            if ( v[i]==v[j]) return false;

        }
    }
    return true;

}





int main()
{

    int n ;
    cin >> n;

    vector<int> v(n);
    for ( int i=0;i<n;i++) cin >> v[i];
    
    bool uniqe=ElementUniquenessProblem(n,v);

    cout<<(uniqe?"All elements id Uniqe":"the elements is not uniqe");
    
    return 0;
}
