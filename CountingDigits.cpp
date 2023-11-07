//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;
// count the binary digits in n 
// time coplexity : O( log(n) )
int Count_Digits(int n){
    int count=1;
    while (n>1){
        count++;
        n/=2;
    }
 return count;

}



int main()
{

   int n;
   cin >> n;
   int count=Count_Digits(n);
   cout << "binary digits in "<<n<<" = "<<count;
    
    return 0;
}
