#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream periodic_table;
    periodic_table.open("periodictable.txt");

    map< int, vector<string> > periodic_table_info;
    int atomic_number;
    string element_symbol;
    string element_name;

    while(periodic_table >> atomic_number){
        periodic_table >> element_symbol;
        periodic_table >> element_name;
        periodic_table_info[atomic_number].push_back(element_symbol);
        periodic_table_info[atomic_number].push_back(element_name);
    }

    for (int atomic_number = 1; atomic_number != 119; ++atomic_number){
        int temp = atomic_number;

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
            temp = 0;
        }

        // sublevel 3s
        if (temp >= 2){
            cout << ".3s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".3s" << temp;
            temp = 0;
        }

        // sublevel 3p
        if (temp >= 6){
            cout << ".3p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".3p" << temp;
            temp = 0;
        }

        // sublevel 4s
        if (temp >= 2){
            cout << ".4s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".4s" << temp;
            temp = 0;
        }

        // sublevel 3d
        if (temp >= 10){
            cout << ".3d10";
            temp -= 10;
        } else if (temp != 0){
            cout << ".3d" << temp;
            temp = 0;
        }

        // sublevel 4p
        if (temp >= 6){
            cout << ".4p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".4p" << temp;
            temp = 0;
        }

        // sublevel 5s
        if (temp >= 2){
            cout << ".5s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".5s" << temp;
            temp = 0;
        }

        // sublevel 4d
        if (temp >= 10){
            cout << ".4d10";
            temp -= 10;
        } else if (temp != 0){
            cout << ".4d" << temp;
            temp = 0;
        }

        // sublevel 5p
        if (temp >= 6){
            cout << ".5p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".5p" << temp;
            temp = 0;
        }

        // sublevel 6s
        if (temp >= 2){
            cout << ".6s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".6s" << temp;
            temp = 0;
        }

        // sublevel 4f
        if (temp >= 14){
            cout << ".4f14";
            temp -= 14;
        } else if (temp != 0){
            cout << ".4f" << temp;
            temp = 0;
        }

        // sublevel 5d
        if (temp >= 10){
            cout << ".5d10";
            temp -= 10;
        } else if (temp != 0){
            cout << ".5d" << temp;
            temp = 0;
        }

        // sublevel 6p
        if (temp >= 6){
            cout << ".6p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".6p" << temp;
            temp = 0;
        }

        // sublevel 7s
        if (temp >= 2){
            cout << ".7s2";
            temp -= 2;
        } else if (temp != 0){
            cout << ".7s" << temp;
            temp = 0;
        }

        // sublevel 5f
        if (temp >= 14){
            cout << ".5f14";
            temp -= 14;
        } else if (temp != 0){
            cout << ".5f" << temp;
            temp = 0;
        }

        // sublevel 6d
        if (temp >= 10){
            cout << ".6d10";
            temp -= 10;
        } else if (temp != 0){
            cout << ".6d" << temp;
            temp = 0;
        }

        // sublevel 7p
        if (temp >= 6){
            cout << ".7p6";
            temp -= 6;
        } else if (temp != 0){
            cout << ".7p" << temp;
            temp = 0;
        }

        cout << endl;
    }
 
    return 0;
}