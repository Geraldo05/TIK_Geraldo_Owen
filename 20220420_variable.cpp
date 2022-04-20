#include <iostream>
using namespace std;

int main (){
    int nilai1;
    int nilai2;
    int nilai3;
    int nilaiakhir;
    cout<<"Masukkan Nilai Tugas = ";cin>>nilai1;
    cout<<"Masukkan Nilai UTS = ";cin>>nilai2;
    cout<<"Masukkan Nilai UAS = ";cin>>nilai3;
    
    if (nilai1>100){
        cout<<"Nilai tidak bisa melebihi 100";
        return 0;
    
    }
    if (nilai2>100){
        cout<<"Nilai tidak bisa melebihi 100";
        return 0;
    
    }
    if (nilai3>100){
        cout<<"Nilai tidak bisa melebihi 100";
        return 0;
    
    }
    
    cout<<"Nilai = ";cout<<(nilai1*0.3)+(nilai2*0.3)+(nilai3*0.4);

}
