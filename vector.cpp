#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {                        // This function is printing the elements of dynamic array.
        cout << v[i] << " "; // v.size() -> O(1) Time Complexity.
    }
    v.push_back(2) ;
    cout << endl;
}
int main()
{
    vector<int> v(5); // Size is currently 0. Size can be changed
    vector<double> b;
    vector<pair<int, int>> v1; // Vector of pair.
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;

    //     cin >> x;
    //     v.push_back(x); // Enters the element at the last of the dynamic array.// Time Complexity is O(1).
    // }
    // printvec(v);

    vector<int> v3(10); // This means we have initialised a vector v3 having 10 elements in it.
   // printvec(v3);
    v3.push_back(11);
    //printvec(v3); 
    v3.push_back(7);
    //printvec(v3);
    v3.pop_back(); // This removes the last element from the dynamic array thta is present at that time.

    //printvec(v3) ;


    vector<int > v2= v3 ;//O(n) Time Complexity. Expensive Operation hai.
    //printvec(v2) ;
    vector<int> v7 ;



    vector<int> v4(5);

    // pair<int, int> p[3] ;
    // p[0] = { 1 ,2  } ;
    // p[1] = { 3 , 4 } ;
    // p[2] = { 5 , 6 };

    // for(int i =  0 ; i < 3 ; i++){
    //     cout << p[i].first <<  " " << p[i].second << endl  ;
    // }
    printvec(v);
    printvec(v);

    printvec(v3);
    printvec(v3);
    return 0;
}