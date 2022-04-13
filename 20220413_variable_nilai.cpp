#include <iostream>
using namespace std;

int main(){
    /*
    jika nilai >=90 sangat memuskan 
    jika nilai >=80 Memuaskan
    jika nilai >75 Cukup
    nilai <75 Tidak Lulus
    nilai tidak boleh >100 dan <0 keterangan diluar jangkauan
    */
    
    int nilai;
    string keterangan;
    cout<<"Masukkan Nilai = ";cin>>nilai ;

    if (nilai>100 || nilai<0) {
        keterangan = "Diluar jangkauan";
    }
    else if(nilai>=90){
        keterangan = "Sangat Memuaskan";
    }
    else if (nilai>=80){
        keterangan  = "Memuaskan";
    }
    else if (nilai<75){
        keterangan = "Tidak Lulus";
    }
    else if (nilai>75){
        keterangan = "Cukup";
    }
    cout<<keterangan;
    
}
