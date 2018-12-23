//@T4puSD

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector <int> v1;
    int c;
    cout<<"*********************** Real Numbers Average Calculator ************************"<<endl;
    
    while(1)
    {
        cout<<"============================================="<<endl;
        cout<<"1. Add number to memory."<<endl;
        cout<<"2. Calculate average?"<<endl;
        cout<<"3. Clear the memory."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"===================================="<<endl;
        cout<<"Choose:";
        cin>>c;
        switch(c)
        {
            case 1:
                int x;
                cout<<"Enter a integer number:";
                cin>>x;
                v1.push_back(x);
                break;
                
            case 2:
                
                float sum;
                for(auto i=v1.begin();i!=v1.end();++i)
                {
                    sum = sum + *i;
                }
                if(v1.size()==0){
                    cout<<"Please enter a element first!!"<<endl;
                    break;
                }
                float average;
                average = sum/v1.size();
                cout<<"Average of inputed numbers is:"<<average<<endl;
                sum = 0;
                break;
                
            case 3:
                v1.clear();
                cout<<"Memory is cleared Please insert element to begin!!"<<endl;
                break;
            
            case 4:
                cout<<"Thank you for using Real Numbers Average Calculator."<<endl;
                exit(0);
            default:
                cout<<"Please insert a valid choise from the options!"<<endl;
                break;
            
        }
        
    }
    return 0;
}
