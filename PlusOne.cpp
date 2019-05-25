#include<iostream>
#include<stdlib.h>
#include<vector>
#include<iterator>
#include<math.h>
#include<string>
using namespace std;

int main(){
	vector<int> summed;
	int arr[3] = {2,3,1};
	vector<int> v(arr, *(&arr + 1));

	int sum = 0;

	//cout<<"size: "<<v.size()<<endl;

	for(int i=v.size();i>0;i--){
		int temp =	pow(10,i-1);
		int temp2 = temp * v[v.size()-i];
		sum+= temp2;
	//	summed.push_back(temp2);
	}
	
	sum = sum + 1;
	
//	cout<<endl;
//	for(auto i=summed.begin();i!=summed.end();i++){
//		cout<<*i<<ends;
//		sum += *i;
//	}
//	
//is it done?
	cout<<endl;
	cout<<"sum is: "<<sum;

	string s = to_string(sum);
	//cout<<endl<<s;
	for(int i=0;i<s.length();i++){
		int temp = s[i] - '0';
		summed.push_back(temp);
	}
	
	cout<<endl;
	for(auto i=summed.begin();i!=summed.end();i++){
		cout<<*i<<ends;
	}
	
	
}
