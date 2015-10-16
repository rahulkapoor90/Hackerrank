#include <iostream>
#include <sstream>
using namespace std;
class Student { public: void set_age(int s_age){ age=s_age; } void set_standard(int s_standard){ standard=s_standard; } void set_first_name(string s_first_name){ first_name=s_first_name; } void set_last_name(string s_last_name){ last_name=s_last_name; }

int get_age()
    {
    return age;
     }
int get_standard(){
    return standard;
}
string get_first_name(){
   return first_name;
}
string get_last_name(){
   return last_name;
}
string to_string(){
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    return " ";
}
private:
int age=0;
int standard=0;
string first_name="NULL";
string last_name="NULL";

};
/*
Enter code for class Student here.
Read statement for specification.
*/

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
