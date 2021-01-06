#include <iostream>
using namespace std;
int main(){
    bool done{false};
    while(!done){
    int num1{};
    int num2{};
    int num3{};
    int num4{};
    cout << "TIMES TABLE MAKER\n";
    cout << "Enter the number the table will be based on: ";
    cin >> num1;
    cout << "Enter the number the table will go up to: ";
    cin >> num2;
    cout << "Enter the number the table will start on: ";
    cin >> num3;
    cout << "Enter the number you would like the table to go up by (1 for a normal table): ";
    cin >> num4;
    for(int i{num3}; i <= num2; i += num4){
        cout << num1 << " * " << i << " = " << num1 * i << endl;
    }
    char yesOrNo{};
    cout << "Are you done? (Y/N)" << endl;
    cin >> yesOrNo;
    if(yesOrNo == 'y' || yesOrNo == 'Y'){
        done = true;
    }
    }
    return 0;
}