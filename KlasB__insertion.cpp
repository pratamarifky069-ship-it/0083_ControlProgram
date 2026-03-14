#include <iostream>
using namespace std;

int dataku[8];

void inputData(){
    for (int i=0;i<=7;i++){
        cout << "Data ke-"<<i+l<<" : ";
        cin << dataku[i];
    }
}

void tampilkanData(){
    for (int i=0;i<=7;i++){
        cout << dataku[i] <<" ";
    }
}

int main(){
    cout << "Masukkan datamu" <<endl;
    inputData();
}