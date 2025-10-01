#include<iostream>
#include<algorithm> // its for use reverse
using namespace std;
//strings are char arrays.
int main(){
    /* string s; // input type
    cout<<"Enter a string: "; // because of cin after space things are not printed
   //cin>>s; // instead of use getline(cin,s);// s is the name of string and this doesn't get any problem to print sentences after space 
    cout<<s;  */
    /* string x = "Sonali is a student"; // this is declaration+initialization
    cout<<x; */
    string d = "Sonali shaw";// size is 12 cause last char is \0(null char) because of null char this is called string
   // cout<<d[0];
    cout<<d<<endl;
   d[0] = 'P'; //update
   cout<<d<<endl; 
   //cout<<d.length(); output=11 we also used d.size(), d is name of the string
   //cout<<d.push_back('a'); output=Sonali shawa
   //cout<<d.pop_back(); output=Sonali sha
   //cout<<d.append(" piu"); outpur=Sonali shaw piu we also used d=d+" piu" this also give same output
   //cout<<s.clear(); output=empty
   // d = "piu " + d; cout<<d; output=piu Sonali shaw
   //reverse(d.begin(),d.end()); ouput=wahs ilanoS
   //reverse(d.begin(),d.begin()+d.length()/2); //when input string is even length then output is reverse of half string
   // to_string(x); this makes any database to string, let x is any database name
   // stoi(x); this makes any string to database, let x is the string name

 

    return 0;
}