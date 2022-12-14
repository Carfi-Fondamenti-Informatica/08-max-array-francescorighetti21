#include <iostream>
#include "lib.cpp"
using namespace std;
int main(){
    int dim=0;
    cin >>dim ;
    if (dim>0){
        float a[dim];
        for(int i=0; i<dim;i++){
            cin >> a[1];
        }
    cout << max_array(a,dim);
    }
else return 0;
}
