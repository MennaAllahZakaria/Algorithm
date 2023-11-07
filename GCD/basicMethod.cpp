//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



 // basic method
 // time coplexity: o(min(n,m))
    
 int GCD(int a,int b)
{
    int gcd=INT_MIN;
    for ( int i=0;i<min(a,b);i++){
        if ( a%i==0 && b%i==0) gcd=max(gcd,i);
    }
    return gcd;
}




int main()
{

    int a,b;
    cin >> a>>b;
    int gcd=GCD(a,b);
    cout << "GCD of "<<a<<" "<<b<<" = "<<gcd;
}
