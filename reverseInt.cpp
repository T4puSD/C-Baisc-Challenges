#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int max = pow(2,31)-1;
	int min = -pow(2,31);
	int result  =0;
	if(min<x<max){
	
        while(x!=0){
    		if(min<=result<=max){
    			result  =result * 10;
            	result = result + x%10;
             	x = x/10;   
			} else {
				cout<<"error";
			}
        }
	}
        cout<<result;
}
