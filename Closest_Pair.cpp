//         اللهم لا سهل الا ما جعلته سهلا و انت تجعل الصعب ان شئت سهل        
#include <bits/stdc++.h>

#define nl                            "\n"

using namespace std;



 // closest pair
 // time coplexity: o( n power 2 )

int closest_pair(int n, vector <pair <int,int>>pairs) {
    int res=INT_MAX;
    for ( int i=0;i<n-1;i++){
        for ( int j=i+1;j<n;j++){
            int x1=pairs[i].first,y1=pairs[i].second;
            int x2=pairs[j].first,y2=pairs[j].second;
            int d=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));

            res=min(res,d);
        }
    }

    return res;
}




int main()
{

    long long n ;
    cin >> n;
    vector<pair<int,int>>pairs;
    for ( int i=0;i<n;i++){
        int x,y;
        cin >> x>>y;
        pairs.push_back(make_pair(x,y));
    }

    int closePair=closest_pair(n,pairs);
    cout<<"the min space of closest pair = "<<closePair;
    return 0;
}
