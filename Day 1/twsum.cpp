#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,i,j,x,k;
	vector<int> v;
	cout<<"Enter the number of elements in the array: "<<endl;
	cin>>n;
	cout<<"Enter the elements in the array: "<<endl;
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<"Enter the sum element: "<<endl;
	cin>>k;
	cout<<"The indices of the sum are : "<<endl;
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-i-2;j++){
			if(v[i]+v[j]==k)
				cout<<"["<<i<<","<<j<<"]"<<endl;
		}
	}
}
