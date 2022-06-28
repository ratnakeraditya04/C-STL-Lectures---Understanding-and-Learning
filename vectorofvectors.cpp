#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v){
    //Printvec function will make a loop traverse through each element in the vector and print it through v[i].
    cout << "Size : " << v.size() << endl ;
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " ; 
    }
    cout << endl ;

}

int main()
{
    int N; 
    cin >> N ;
    vector <vector <int> > v ;
    for(int i = 0 ; i < N ; i++ ){
        int n ; 
        cin >> n ;
        vector <int > temp ; //We have defined a temporary vector here then we are adding values to that temporary vector and then we are adding that vector to v then . 
        // Here we have inserted temp because we need a temp vector as our initial vector is empty. 
        //Now we can insert an empty vector also.
        // Empty vector -  
        // vector<int> () ;
        for(int j = 0 ; j < n ; j++){
            int x ;
            cin >> x ;
            temp.push_back(x) ;

            //v[i].push_back(x) ; // We can do this as we have also initialise a vector here instead of creating a temp vector and adding that temp vector in v using v.push_back(temp).
        }

        v.push_back(temp );  //Here we are adding a temporary vector in vector v we created.In this way it become the first element of vector itself.
        
    }



    v[0].push_back(10) ;

    for(int i = 0 ; i < v.size() ; i++){
        printvec(v[i] ) ;// We are first calling printvec function for v[0] vector printing. 
    }

    cout << v[0][1] ;
   

    return 0 ;
}