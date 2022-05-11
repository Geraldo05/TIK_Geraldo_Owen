#include <iostream>
using namespace std;

int main(){
    int matriks_A[2][2] = {
        {7, 1},
        {4, 8}

    };
    int matriks_B[2][2] = {
        {5, 2},
        {8, 3}
    };
    for (int i=0; i<2; i ++){
        for (int j=0; j<2; j++)
        {
        cout<<(matriks_A[i][j]) + (matriks_B[i][j])<<" ";
        }
        cout<<endl;
    }
    return 0;
}
