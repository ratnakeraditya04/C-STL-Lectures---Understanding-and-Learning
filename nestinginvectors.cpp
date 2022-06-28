#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int , int>> &v)
{
    cout << "size : " << v.size() <<endl ;
    for (int i = 0; i < v.size(); i++)
    {                        // This function is printing the elements of dynamic array.
        cout << v[i].first << " " <<v[i].second<<endl ; // v.size() -> O(1) Time Complexity.
    }
    // v.push_back(2) ;
    cout << endl;
}


int main()
{
    // vector <pair <int, int >> v = {{1 ,2} , {3 ,4}};//Rt now this vector is empty.
    // printvec(v) ;
    vector <pair <int, int >> v;
    int n ;
    cin >> n ;

    for(int i = 0 ; i < n ; i++){

        int x , y ;
        cin >> x >> y ;
        //v.push_back(make_pair(x , y));
        v.push_back({x ,y});
    }

    printvec(v) ;

    int N ;
    cin >> N; //No. of Vectors



    
    return 0 ;
}