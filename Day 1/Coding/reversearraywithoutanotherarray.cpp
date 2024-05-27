#include <iostream>
#include <vector>
using namespace std;

int display(vector<int> v){
	int i;
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

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
	display(v);
	i=0;
	j=v.size()-1;
	while(j>=i){
		int temp=v[j];
		v[j]=v[i];
		v[i]=temp;
		i++;
		j--;
	}
	display(v);
	}
