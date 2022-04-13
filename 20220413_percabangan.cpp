    //nested if
    //percabangan bersarang
    //if dalam if
    
#include <iostream>
using namespace std;
int main ()
{
    int nilai;
    if (nilai%2 == 0) {
        cout<<"Bilangan Genap";
        if (nilai <10) {
            cout<<"Bilangan genap kurang dari 10"<<endl;
        }
        else {
            cout<<"Bilangan ganjil lebih dari 10"<<endl;
        }
    }

else {
    cout<<"Bilangan Ganjil";
    if (nilai<10) {
        cout<<"Bilangan ganjil kurang dari 10"<<endl;
    }
    else {
        cout<<"Bilangan ganjil lebbih dari 10"<<endl;
    }
}

}
