#include<iostream>
using namespace std;

int main(){
    int num;
    int Even,Odd;
    Even = 0;
    Odd = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while(num !=0){
        if(num % 2 ==0){
            Even +=1;
        }else{
            Odd +=1;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd;
    return 0;
}