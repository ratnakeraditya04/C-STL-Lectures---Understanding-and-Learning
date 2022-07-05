#include <bits/stdc++.h>
using namespace std;
void print(map<int , string > &m  )
{
    for(auto &pr : m)
    {

        cout << m.size() << endl ;
        cout << pr.first << "  " << pr.second << " " ; // O(logn ) is the time complexity of accessing an element in map.
    }
    //O(nlogn) - Time Complexity 
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(logn) Operation consume.
    m[6] ; //Even this operation is O(logn ) Time Conmplexity. By default empty string will be inserted.
    m[5] = "cdc";
    m[3] = "dsds";
    m[5] = "cde" ; // Existing Value will be overwrite but another value key pair will not be genarated.

    m.insert({7, "cvdsvsdvs"});

    map<int, string>::iterator it;
    //Map will return key value pair in sorted order. If our key is of string datatype then the map will return values in lexicographically order.


    // Below is the for loop printing of map - Key - Value Pair through for loop.
    // for (it = m.begin(); it != m.end(); it++) 
    // {
    //     cout << (*it).first << " " << (*it).second << endl ;
    // }

    //Here is through iterator and using auto keyword.
    // for(auto &pr : m)
    // {
    //     cout<< pr.first << " " << pr.second <<" " ;  
    // }




    m.find(3) ; 
    print(m) ;



    return 0;
}