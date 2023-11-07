//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



// Matrix multiplicati
// time coplexity: o( pow(n,3))

vector<vector<int>> MatrixMultiplicati(int n, vector<vector<int>> a,vector<vector<int>> b){

    vector<vector<int>> c(n,vector<int> (n));

    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            c[i][j]=0;
            for ( int k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]+b[k][j];
            }
        }
    }

    return c;
}





int main()
{

    int n ;
    cin >> n;

    vector<vector<int>> a(n,vector<int>(n)),b(n,vector<int>(n));
    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cin >> b[i][j];
        }
    }
    
    vector<vector<int>> c=MatrixMultiplicati(n,a,b);

    cout<<"Matrix Multiplicati = ";
    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cout<< c[i][j];
        }
    cout<<nl;
    }
    
    return 0;
}
