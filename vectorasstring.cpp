#include <bits/stdc++.h>
using namespace std;

void printvec(vector <string> &v){ //Passed as reference.Any change here would be completely reflected when the function would be actually called.
    for(int i = 0 ; i < v.size() ; i++){
        cout<< v[i] << " " ;

    }
    string s2 = "dfsdvsdv";
    v.push_back(s2);
}
int main()
{
    vector <string> aditya ;
    int n ; 
    cin >> n ;
    string s ;



    for(int  i = 0 ; i < n ; i++){
        cin >> s ;
        aditya.push_back(s);

    }
    printvec(aditya);
    cout << endl ;
    printvec(aditya);
    return 0 ;
}