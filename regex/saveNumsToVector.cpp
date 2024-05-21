#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <regex>

using namespace std;


int main(){
    vector<int> v;
    regex rgx("[0-9]+");
    smatch m;
    string str("mokso546svsd64vses");
    auto strIt = str.cbegin();

    while(regex_search(strIt, str.cend(), m, rgx)){
        v.push_back(stoi(m.str()));
        strIt= m.suffix().first;
    }

    for(auto &e: v ){
        cout << e << '\t';
    } cout << endl;
    
    return 0;
}
