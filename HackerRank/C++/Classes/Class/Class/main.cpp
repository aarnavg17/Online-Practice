//
//  main.cpp
//  Class
//
//  Created by Aarnav Gupta on 05/07/21.
//

#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age, standard;
    string first_name, last_name;
    
public:
    void set_age(int age) {
        this->age = age;
    }
    
    void set_standard(int standard) {
        this->standard = standard;
    }
    
    void set_first_name(string fn) {
        this->first_name = fn;
    }
    
    void set_last_name(string ln) {
        this -> last_name = ln;
    }
    
    int get_age() {
        return this -> age;
    }
    
    string get_last_name() {
        return this -> last_name;
    }
    
    string get_first_name() {
        return this -> first_name;
    }
    
    int get_standard() {
        return this -> standard;
    }
    
    string to_string() {
        ostringstream a, b;
        a << this -> age;
        string ans = a.str();
        ans += ("," + get_first_name() + "," + get_last_name() + ",");
        b << this -> standard;
        ans += b.str();
        return ans;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
