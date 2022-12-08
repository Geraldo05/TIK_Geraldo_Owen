#include <iostream>
using namespace std;

int main(){
    
    int number1 = 0;
    while (number1 ++ <10){  
    cout<<"1"<<" * "<<number1<<" = "<<number1*1<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number2 = 0;
    while (number2 ++ <10){  
    cout<<"2"<<" * "<<number2<<" = "<<number2*2<<" "<<endl;
    
    }
    cout<<endl<<endl;

    int number3 = 0;
    while (number3 ++ <10){  
    cout<<"3"<<" * "<<number3<<" = "<<number3*3<<" "<<endl;
    
    }
    cout<<endl<<endl;

    int number4 = 0;
    while (number4 ++ <10){  
    cout<<"4"<<" * "<<number4<<" = "<<number4*4<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number5 = 0;
    while (number5 ++ <10){  
    cout<<"5"<<" * "<<number5<<" = "<<number5*5<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number6 = 0;
    while (number6 ++ <10){  
    cout<<"6"<<" * "<<number6<<" = "<<number6*6<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number7 = 0;
    while (number7 ++ <10){  
    cout<<"7"<<" * "<<number7<<" = "<<number7*7<<" "<<endl;
    
    }
    cout<<endl<<endl;

    int number8 = 0;
    while (number8 ++ <10){  
    cout<<"8"<<" * "<<number8<<" = "<<number8*8<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number9 = 0;
    while (number9 ++ <10){  
    cout<<"9"<<" * "<<number9<<" = "<<number9*9<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    int number10 = 0;
    while (number10 ++ <10){  
    cout<<"10"<<" * "<<number10<<" = "<<number10*10<<" "<<endl;
    
    }
    cout<<endl<<endl;
    
    return 0;
}
//Rata-rata
#include <iostream>
using namespace std;

int main() {
  int n, i;
  float num[100], sum = 0.0, average;

  cout << "Jumlah angka : ";
  cin >> n;


  while (n > 100 || n <= 0) {
    cout << "Jumlah angka harus diantara 0-100" << endl;
    cout << "Masukkan jumlah angka kembali";
    cin >> n;
  }


  for (i = 0; i < n; ++i) {
    cout << i + 1 << ". Masukkan angka : ";
    cin >> num[i];
    sum += num[i];
  }
    cout<<endl;
  average = sum / n;

  cout << "Rata-rata = " << average;
  return 0;
}
