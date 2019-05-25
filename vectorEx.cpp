#include<iostream>
#include<stdlib.h>
#include<vector>
#include<iterator>
using namespace std;

int main(){
	vector<vector<int> >main;
	
	for(int i = 0;i<4;i++) {
		vector<int> v;
		v.push_back(1+i);
		v.push_back(2*i);
		//v.push_back(3+i);
		//v.push_back(4+i);
		main.push_back(v);
	}	
	
//	vector<int> v;
//	v.push_back(1);
//	main.push_back(v);


//		vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
	//cout<<	v.at(1);
//	
//	for(auto i = v.cbegin();i!=v.cend(); i++){
//		cout<<*i;
//	}

	 for(auto row:main){
    for(auto col:row){
       //do something using the element col
    	cout<<col<<ends;
    }
    cout<<endl;
	 }

	//cout<<main[2][1];
	cout<<endl;
	
	cout<<"row: "<<main.size()<<ends;
	cout<<"Col: "<<main[0].size();
	cout<<endl;
	
	
	int t = 0;
	int b = main.size()-1;
	int l = 0;
	int r = main[0].size()-1;

	int dir = 0;  //0->right//1->top to bottom//2->right to left//3->bottom to up
	
	while(t<=b && l<= r){
		if(dir == 0){
			for(int i=l;i<=r;i++){
				cout<<main[t][i]<<ends;
			}
			//dir = 1;
			t++;
		}

		if(dir == 1){
			for(int i =t;i<=b;i++){
				cout<<main[i][r]<<ends;
			}
			//dir = 2;
			r--;
		}

		if(dir == 2){
			for(int i=r;i>=l;i--){
				cout<<main[b][i]<<ends;
			}
			//dir = 3;
			b--;
		}
		if(dir == 3){
			for(int i=b;i>=t;i--){
				cout<<main[i][l]<<ends;
			}
			//dir = 0;
			l++;
		}
		dir = (dir+1)%4;
		cout<<endl;//<<dir<<endl;

	}
}
