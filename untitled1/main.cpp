#include <iostream>
#include<string>

#include<map>

using namespace std;


void groß(string &a) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = toupper(a[i]);
    }
}

int main() {

    string text;
    map<char, unsigned int> m;


    cout << "geben  Sie einen  text ein" << endl;
    string a;
    getline(cin, a);
    groß(a);

    for (int i = 0; i < a.size(); i++) {

        if (isalpha(a[i])) {


            m[a[i]]++;
        } else {

        }


    }


    for (map<char, unsigned int>::iterator it = m.begin(); it != m.end(); it++) {


        cout << it->first << "," << it->second << endl;


    }


    return 0;
}