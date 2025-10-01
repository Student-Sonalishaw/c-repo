#include<iostream>
#include <vector>
using namespace std;

int main(){
   /*  vector<int> vec = {1,2,3}; //0
    cout<< vec[0]<<endl;
 */
    vector<char> vec ={ 'a','b','c','d','e'};
    cout<< "size = "<< vec.size()<<endl;// size of the vector
    vec.push_back('f');
    cout<< "size after push back = "<< vec.size()<<endl;// size after push back means an element enters at the end
    vec.pop_back();
    cout<< "size after pop back = "<< vec.size()<<endl;// size after pop back means an element deletes at the end
    /* cout<< vec.back() << endl; */ // prints the last element of the vector
    cout<< vec.capacity() << endl; // capacity is always double from size
   // for each loop
    for(char i : vec){ // i is the value of vectors each idx value
        cout<< i << endl;
    }
    return 0;
}