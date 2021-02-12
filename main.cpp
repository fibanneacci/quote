#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    str = regex_replace(str, regex("“"), "\"");
    str = regex_replace(str, regex("”"), "\"");
    replace(str.begin(), str.end(), '\"', '\'');
    cout << '\"' << str << '\"';
    return 0;
}
