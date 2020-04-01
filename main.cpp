#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

void putInC(string &str, vector<char> &v){

    for(auto b = str.begin(); b != str.end(); b++){
        if(*b != '+'){
            v.push_back(*b);
        }
    }

}


string putSep(vector<char> &v){
    string str = "";
    for (const auto &i: v){
        str += '+';
        str += i;
    }
    str.erase(str.begin() ,str.begin() +1);
    return str;
}

int main() {

    string inp;
    cin >> inp;

    vector<char> c;
    putInC(inp, c);
    sort(c.begin(), c.end());


    cout << putSep(c);

    return 0;
}
