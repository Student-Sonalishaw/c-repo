#include<iostream>
#include<cLimits> // for use INT_MIN;
using namespace std;
//Print all subarrays
int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int n = 7; // lenght of arr
   /*  for( int st=0; st<n; st++){
        for (int end = st; end < n; end++)
        {
           for(int i=st; i<=end; i++){
            cout<<arr[i];
           }
           cout<<" ";
        }
        cout<<endl;
    } */
    //OR, Brute Force approach its easy to compile and run
    /* int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum = arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"Max subarray sum: "<<maxSum<<endl;
     */
    //OR, Kadane's Algorthm its most optimised process
    int maxSum = INT_MIN;
     int currSum = 0;
    for(int i=0; i<n; i++){
       currSum += arr[i];
       maxSum = max(currSum,maxSum);
       if(currSum<0) currSum = 0;
    }
    cout<<maxSum<<endl;

    return 0;
}