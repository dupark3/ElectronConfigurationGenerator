#include <iostream>

using namespace std;

int main(){
    for (int atomic_number = 1; atomic_number != 119; ++atomic_number){
        int temp = atomic_number;
        cout << "ATOMIC NUMBER : " << temp << endl;
        // sublevel 1s
        if (temp >= 2){
            cout << "1s2";
            temp -= 2;
        } else {
            cout << "1s" << temp;
            temp = 0;
        }

        // sublevel 2s
        if (temp >= 2){
            cout << ".2s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".2s" << temp;
            temp = 0;
        }

        // sublevel 2p
        if (temp >= 6){
            cout << ".2p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".2p" << temp;
        }


        cout << endl;
    }

 
    return 0;
}