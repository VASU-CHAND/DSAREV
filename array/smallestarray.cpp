#include<iostream>
#include<climits>
using namespace std;
int smallest(int arr[], int n){
int min = INT_MAX;
for(int i=0; i<n; i++){
if (arr[i]<min){
    min = arr[i];
}
}
cout << min << endl;
}
int main(){
    int n;
    cout<< " ente the no of elements in the array"<< endl;
    cin >> n;
    int arr[n];
    cout << " wnter the elements"<< endl;
    for (int i=0; i<n; i++){
      cin >> arr[i];
    }
    smallest(arr,n);
 
}
