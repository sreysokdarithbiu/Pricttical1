#include <iostream>
using namespace std;
int main(){
  int n,t;
  int a[100];
  
  cout<<"Enter N number : ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"Enter A["<<i<<"] : ";
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[j]<a[i]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  cout<<"------------------------"<<endl;
  cout<<"Sorted: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"---"<<a[i]<<"---"<<endl;
  }
}
