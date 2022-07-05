#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {2 ,3 ,4 , 5 ,6 };
    // Normal Method to print the vector 

    // for(int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << "  " ;

    // }

    //Iterator method

    vector <int > :: iterator it = v.begin() ; //Now it points to the memory address of v[0] element.
    cout << *(it) << endl ;
    // cout<< *(it+ 1) << endl ;
    for(it = v.begin() ; it != v.end() ; it++){
        cout << *(it) << endl  ; 
    }


    vector <pair<int,int>> v_p =  {{1,3} , {2, 5} , {5, 7}}; 
    vector <pair<int , int >>:: iterator it1  ;

    for(it1 = v_p.begin() ; it1 != v_p.end() ; it1++ ){
        cout << (*it1).first  << " " << (*it1).second << endl ;
        //cout<< it1->first << " " << it2->second << endl ;
        //it1->first = (*it).first are same.

    }



    for(int value : v)
    {
        cout << value << " " ; 
    }
    cout << endl ;
    for(auto &value2 : v_p)
    {
        cout <<  value2.first  << " "  << value2.second <<endl ; 
    }

    return 0 ;
}