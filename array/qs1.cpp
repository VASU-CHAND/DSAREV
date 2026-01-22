// reversing an array
#include<iostream>
using namespace std;
void reverse(int arr[] , int n){
    for(int i=0;i< n-i-1;i++){
        swap(arr[i],arr[n-i-1]);
    }

}
int main(){
    int n;
    cout <<"enter the no of elements in the array"<<endl;
    cin>>n;
int arr[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i] ;
}
cout << "the elements of array are " << endl;
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
reverse(arr,n);
cout << "the reversed array is " << endl;
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
return 0;
}