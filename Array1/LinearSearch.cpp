//Find the element x in the array. Take array and x as input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int arr[ n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x:";
    cin>>x;
    bool flag = false;
    for(int i=0;i<=n-1;i++){
       if(arr[i]==x) flag = true;
       
       }
       if(flag==true) cout<<"element is present";
       else cout<<"not present";
}