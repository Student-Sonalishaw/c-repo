#include<iostream>
using namespace std;

int main(){
    int arr[2][3] = {{18,29,11},{4,6,9}};// 2 = rows number and 3 = columns number|| in curlybracies the value of row and col. 
 //inner curly bracies number is for nums of rows and element no. is for nums of cols
   // arr[0][0] = 1; // that means value of 0th row and 1st column.
   //int arr[][something] = {{something},{something}....}; this is valid but
   // int arr[something][] = {{something}...}; this is not valid we have to declare col nums every time
   // int [][4] = { 1,2,3,4,5,5,6,9}; its also valid cause first four ele. is in one row and so on..
   int a[2][3] = {{29,18,11},{8,12,18}};
    
    for(int i=0;i<2;i++){ // i is for rows|| if in this loop j is used and
        for (int j = 0; j < 3; j++) // j is for col|| in this loop i is used then 
        { // cout the same
           cout<<arr[i][j]<<" "; // the output will be the transpose of given array of matrices
           /*  cout<<arr[i][j] + a[i][j]<<" "; */ // this is the sum of twoD arrays.
        }
        cout<<endl;
    }

    
    return 0;
}