#include <sstream>
#include <iostream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        int get_age() {
            return this->age;
        }
        void set_age(int a) {
            this->age = a;
        }
        string get_first_name() {
            return this->first_name;
        }
        void set_first_name(string &fname) {
            this->first_name = fname;
        }
        string get_last_name() {
            return this->last_name;
        }
        void set_last_name(string &lname) {
            this->last_name = lname;
        }
        int get_standard() {
            return this->standard;
        }
        void set_standard(int s) {
            this->standard = s;
        }
        string to_string() {
            stringstream ss;
            ss << this->age << "," << this->first_name << "," << this->last_name << "," << this->standard << endl;
            return ss.str();
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
