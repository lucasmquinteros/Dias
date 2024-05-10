#include <iostream>
using namespace std;

bool Numprimo(int num){
bool b = true;
for (int i=2; i <= num-1; i++){
    if (num % i == 0 && num != 2){
        b = false;
    }
}
return b;
}

int main(){
int num;
cout << "ingrese el numero: ";
cin >> num;

if (Numprimo(num)){
    cout << num << " es primo";
}
else{
    cout << num << " no es primo";
}

}
