//
//  main.cpp
//  Structs
//
//  Created by Aarnav Gupta on 12/06/21.
//

#include <iostream>
using namespace std;

struct Student {
    int age, standard;
    string first_name, last_name;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}