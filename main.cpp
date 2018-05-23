#include <algorithm> // sort
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void print_electron_config();
void print_valid_position();

int main(){
    print_valid_position();
}

// prints all electron config from atomic number 1 to 118
void print_electron_config(){
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

        cout << atomic_number << ' ' << periodic_table_info[atomic_number][0]
                              << ' ' << periodic_table_info[atomic_number][1] << ' '; 

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
}

// utility program to add both, right, down, neither valid list
void print_valid_position(){
    vector<int> both = {3, 5, 6, 7, 8, 9, 11, 13, 14, 15, 16, 17};
    for (int i = 19; i != 36; ++i){
        both.push_back(i);
    }
    for (int i = 37; i != 54; ++i){
        both.push_back(i);
    }
    both.push_back(55);
    both.push_back(56);
    for (int i = 71; i != 86; ++i){
        both.push_back(i);
    }
    
    for (int i = 58; i != 71; ++i){
        both.push_back(i);
    }

    cout << "BOTH VALID: " << endl;
    cout << "{ {" << both[0] << ", 1}";
    for (int i = 1; i != both.size(); ++i){
        cout << ", {" << both[i] << ", 1}";
    }
    cout << " }" << endl;


    vector<int> right = {87, 88};
    for (int i = 103; i != 118; ++i){
        right.push_back(i);
    }
    for (int i = 89; i != 102; ++i){
        right.push_back(i);
    }
    cout << "RIGHT VALID: " << endl;
    cout << "{ {" << right[0] << ", 1}";
    for (int i = 1; i != right.size(); ++i){
        cout << ", {" << right[i] << ", 1}";
    }
    cout << " }" << endl;

    vector<int> down = {1, 2, 4, 10, 12, 18, 36, 54, 86, 71};
    cout << "DOWN VALID: " << endl;
    cout << "{ {" << down[0] << ", 1}";
    for (int i = 1; i != down.size(); ++i){
        cout << ", {" << down[i] << ", 1}";
    }
    cout << " }" << endl;    

    vector<int> neither = {118, 103};
    cout << "NEITHER VALID: " << endl;
    cout << "{ {" << neither[0] << ", 1}";
    for (int i = 1; i != neither.size(); ++i){
        cout << ", {" << neither[i] << ", 1}";
    }
    cout << " }" << endl;       

    cout << "CHECK TOTAL SIZE: " << both.size() + right.size() + down.size() + neither.size() << endl;
}