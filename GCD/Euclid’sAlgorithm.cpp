//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



 // Euclid's algo
 // time coplexity: o(log(n))
    
 int GCD(int a,int b)
{
    if (a < b) swap(a, b);
    return b == 0 ? a : GCD(b, a % b);
}




int main()
{

    int a,b;
    cin >> a>>b;
    int gcd=GCD(a,b);
    cout << "GCD of "<<a<<" "<<b<<" = "<<gcd;
}
