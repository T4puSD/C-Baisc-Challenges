#include<iostream>
#include<stdlib.h>
#include<vector>
#include<iterator>

using namespace std;

int main(){
	vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			cout<<matrix[i][j]<<ends;
		}
		cout<<endl;
	}
	
	int flag = 0;
        int r = 0;
        int c = 0;
        int rs = matrix.size();
        int cs = matrix[0].size();
        //if(rs== 0 ){ return matrix[0];}
        //if(cs==0) { return matrix[0];}
        int size = rs*cs;
        vector<int> v;
        
        while(size>0){
            if(flag==0)// && r>=0 && r<rs && c>=0 && c<cs)
            {
                cout<<matrix[r--][c++]<<",";
                //v.push_back(matrix[r--][c++]);
                size--;
                if(r<0){
                    r++;
                    flag = 1;
                    if(c>=cs){
                        r++;
                        c--;
                    }
                }
                //2nd
                if(c>=cs){
                    c--;
                    r+=2;
                    flag = 1;
                    
                }
               
            }
            
            if(flag == 1)// && r>=0 && r<rs && c>=0 && c<cs)
            {
                cout<<matrix[r++][c--]<<",";
                //v.push_back(matrix[r++][c--]);
                size--;
                
                if(c<0){
                    c++;
                    flag =0;
                    if(r>=rs){
                        r--;
                        c++;
                    }
                }
                //2nd
                if(r>=rs){
                    r--;
                    c+=2;
                    flag = 0;
                }
                
                
            }
            
        }
       
}
