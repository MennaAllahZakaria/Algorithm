//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



 // factorial
 // time coplexity: o( n)
long long factorial(long long n) {
  return (n==0?1:n*factorial(n-1));
}




int main()
{

    long long n ;
    cin >> n;
    long long fact = factorial(n);
    cout<<"factorial of "<<n<<" = "<<fact;
    return 0;
}
