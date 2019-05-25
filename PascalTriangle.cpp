#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
using namespace std;

int main(){
	int numsRow;
	cout<<"Enter number of rows: ";
	cin>>numsRow;

	vector<int> temp;
	vector<vector<int> > v;
	
	if(numsRow==0){
		return 0;
	}


	temp.push_back(1);
	v.push_back(temp);
	
	if(numsRow==1){
		cout<<1;
		return 0;
	}
	temp.push_back(1);
	v.push_back(temp);
	temp.clear();

	for(int i=1;i<numsRow-1;i++){
		temp.push_back(1);
		for(int j=1;j<=i;j++){
			temp.push_back(v[i][j]+v[i][j-1]);
		}
		temp.push_back(1);
		v.push_back(temp);
		temp.clear();
	}

	for(int i=0;i<v.size();i++){
		//temp.push_back(1);
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<ends;

		}
		cout<<endl;
	}
}
