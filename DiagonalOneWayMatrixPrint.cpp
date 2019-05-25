#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<arr[i][j]<<ends;
		}
		cout<<endl;
	}
	
	int col = 0;
	int row = 0;
	//while(row!=2,col!=2){
		for(int i=0;i<=2;i++){
			//int col = 0;
			if(i==0 && col == 0){
				cout<<arr[i][col]<<ends;
			}
			else if(i==2 && col == 2){
				cout<<arr[i][col]<<ends;
			}
			else {
				int tempRow = i;
				int tempCol = 0;
				while(tempRow!=-1){
					cout<<arr[tempRow--][tempCol++]<<ends;
				}
//				if(tempRow == -1 && tempCol == 3){
//					int tempRow2 = 2;
//					tempCol = tempCol-1;
//					
//				}
			///	cout<<endl<<tempRow<<ends<<tempCol<<endl;
			}
		}
	//}
	
}
