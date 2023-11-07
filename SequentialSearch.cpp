//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



// Sequential Search
// time coplexity: o(n)

bool SequentialSearch(int n , vector<int> v, int target) { 
    for ( int i=0;i<n;i++){
        if ( v[i]==target) return true;

    }

return false;

}



int main()
{

    int n ;
    cin >> n;

    vector<int> v(n);
    for ( int i=0;i<n;i++) 
        cin >>v[i];

    int target;
    cin >> target;

    bool exist=SequentialSearch(n,v,target);

    cout<<(exist?"the target is in array ":"the target is not in array");    
    return 0;
}
