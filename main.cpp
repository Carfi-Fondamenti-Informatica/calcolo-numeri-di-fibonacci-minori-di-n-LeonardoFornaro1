#include <iostream>
using namespace std;

int main() {
   int z;
    cin >> z;
    int primo=0;
    int secondo=1;
    int terzo=1;

    if(z>=1){
    while(terzo<=z){
        cout << terzo << endl;
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
    }
    }
    else{
        cout << "errore" << endl;
    }
   return 0;
}
