#include <iostream>
#include <math.h>
using namespace std;
int main() {

    int angka1;
    int angka2;
    int nilai;
    string c[8] = {
        " ",
        "mm",
        "cm",
        "dm", 
        "m", 
        "dam", 
        "hm", 
        "km"
    };
    
    cout<<"Satuan nilai: "<<endl;
    cout<<"1. mm"<<endl;
    cout<<"2. cm"<<endl;
    cout<<"3. dm"<<endl;
    cout<<"4. m"<<endl;
    cout<<"5. dam"<<endl;
    cout<<"6. hm"<<endl;
    cout<<"7. km"<<endl;
    cout<<"Satuan yang dipilih: ";cin>>angka1;
    
    if (angka1<1|angka1>7){
        cout<<"Nilai diluar pilihan";
        return 0;
        }
    
    cout<<"Nilai yang akan dikonversikan : ";cin>>nilai;
    
    cout<<"Ingin dikonversi ke: "<<endl;
    cout<<"1. mm"<<endl;
    cout<<"2. cm"<<endl;
    cout<<"3. dm"<<endl;
    cout<<"4. m"<<endl;
    cout<<"5. dam"<<endl;
    cout<<"6. hm"<<endl;
    cout<<"7. km"<<endl;
    cout<<"Satuan yang dipilih: ";cin>>angka2;
    
    if (angka2<1|angka2>7){
        cout<<"Nilai diluar pilihan";
        return 0;
        }

    int temp = angka2-angka1;
    cout<<"Hasil "<<nilai<<" "<<c[angka1]<<" = "<<nilai/pow(10,temp)<<" "<<c[angka2];
    
    return 0;
}
