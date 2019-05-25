#include<iostream>
using namespace std;
int main(){
    double num2,sum;
    char opa;
    int i,x,y;
    for(;;){
        cout <<"\nStart:"<<endl;
        cin >> sum;
        do{
            cin >> opa;
            if(opa == 43){
                cin >> num2;
                sum = sum + num2;
            }
            else if(opa == 42){
                cin >> num2;
                sum = sum * num2;
            }
            else if(opa == 47){
                cin >> num2;
                sum = sum / num2;
            }
            else if(opa == 45){
                cin >> num2;
                sum = sum - num2;
            }
            else{
                break;
            }
            if(opa == 61){
                y = (++i<1);
            }
            else{
                y = 1;
            }
        }while(y);
        cout << sum;
    }
    return 0;
}
