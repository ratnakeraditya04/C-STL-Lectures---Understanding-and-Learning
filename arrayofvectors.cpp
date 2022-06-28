#include <bits/stdc++.h>
using namespace std;


void printvec(vector<int> &v)
{
    cout << "size : " << v.size() << endl ;
    for (int i = 0; i < v.size(); i++)
    {                        // This function is printing the elements of dynamic array.
        cout << v[i] << " "; // v.size() -> O(1) Time Complexity.
    }
    //v.push_back(2) ;
    cout << endl;
}
int main()
{
     int N ;
    cin >> N; //No. of Vectors

    // vector<int> v[10] ; // This has initialised an array of 10 empty vector stored in a vector.

    vector <int> V[N] ;
    for(int i = 0 ; i < N ; i++){ //To enter the elements in each vector in N vectors
        int n ;
        cin >> n ; // Size of Vector.
        for(int j = 0 ;  j < n ; j++){ // 
            int x ;
            cin >> x ;
            V[i].push_back(x) ; // Not v[j] as in ith iteration we are inputting values in ith vector.
        }
    }
    // printvec(V[1]) ; //We cannot simply write vector here as printvec function is printing vector.
    cout << endl ;
    for(int i = 0 ; i < N ; i++){
        printvec(V[i]);
    }
    cout << endl ;
        cout<< V[0][0] << endl ; //Now what it will do, it will print in VECTOR V - ZEROTH VECTOR KA ZERO ELEMENT.  
        cout << V[1][2] << endl ;
    
    return 0 ;
}