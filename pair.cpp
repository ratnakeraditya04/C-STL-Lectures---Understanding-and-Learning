#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int , string> p  ;
    //p = make_pair(2 , "abcde" ) ; // Initialisdation of pair using make_pair.
    p = { 1 , "aditya" } ; // Initialisation of pair 
 
    pair <int , string> p2 = p ; // Copy of an  existing pair into new one. Here, any change in p2 will not affect p as values are copied.
    pair <int , string> &p3 = p ; // Here what is happening that we are passing p as a reference here so any change in p will be present there. 
    // p2.first = 3 ;
    cout << p2.first << " " << p2.second ;

    int a[] = { 1,2,3} ; 
    int b[] = { 4,5,6} ;


    pair<int , int> p_array[3] ; //initialised an array in pair data type
    p_array[0] = {1 , 4} ;
    p_array[1] = {2 , 5} ;
    p_array[2] = {3,  6} ;

    for(int i = 0 ; i < 3 ; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl ;
    }
    // cin >> p.first ;
    // cin >> p.second ;
    
    // pair<int, int> p[3] ;
    // p[0] = { 1 ,2  } ;
    // p[1] = { 3 , 4 } ;
    // p[2] = { 5 , 6 };

    // for(int i =  0 ; i < 3 ; i++){
    //     cout << p[i].first <<  " " << p[i].second << endl  ;
    // }



    return 0 ;
}