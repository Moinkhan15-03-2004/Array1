//Find the element x in the array. Take array and x as input
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
int arr[n];
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
int max = arr[0];
for(int i=0;i<=n-1;i++){
    if(max<arr[i]) max = arr[i];
    
}
int smax = arr[0];
for(int i=0;i<=n-1;i++){
    if(arr[i]!=max&&smax<arr[i]) smax = arr[i];
}
cout<<max<<endl;
cout<<smax;


}