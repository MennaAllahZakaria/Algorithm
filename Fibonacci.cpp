//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



// Fibonacci
// time coplexity: o(2^n)

long long Fibonacci(long long n) { 
    if (n == 1 || n==2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}



int main()
{

    int n ;
    cin >> n;

    int fib= Fibonacci(n);
    cout <<"The Fibonacci of "<<n<<" = "<<fib;
    
    return 0;
}
