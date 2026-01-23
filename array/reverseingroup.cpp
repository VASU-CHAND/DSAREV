#include<iostream>
using namespace std;
void reverse(int n, int r, int arr[]){
for(int i=0;i< n; i+=r){
int start =i;
int end = r  + i -1;
while(end >=start){
    swap(arr[start] , arr[end]);
    end --;
    start++;
}

}

}
int main(){
    int n ;
    cout <<"enter the no of elements in the array"<<endl;
    cin>>n;
int arr[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i] ;
}
cout << " the elemnts of array are " << endl;
for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
cout << " enter the groups in which araay is to be reversed" << endl;
int r;
cin >> r;
reverse(n, r,arr);
for(int i =0; i<n; i++){
    cout << arr[i]<< " ";
}
return 0;
}