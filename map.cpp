#include <map>

using namespace std;

map<char, int> my_map = {
        {'a', 0},
        { 'b', 1 },
        { 'c', 2 },
        { 'd', 3 },
        { 'e', 4 },
        { 'f', 5 },
        { 'g', 6 },
        { 'h', 7 },
        { 'i', 8 },
        { 'j', 9 },
        { 'k', 10 },
        { 'l', 11 },
        { 'm', 12 },
        { 'n', 13 },
        { 'o', 14 },
        { 'p', 15 },
        { 'q', 16 },
        { 'r', 17 },
        { 's', 18 },
        { 't', 19 },
        { 'u', 20 },
        { 'v', 21 },
        { 'w', 22 },
        { 'x', 23 },
        { 'y', 24 },
        { 'z', 25 }
};

int getNumberOfChar(char c){
    map<char, int>::iterator it;
    for( it = my_map.begin(); it != my_map.end(); it++){
        if(it->first != c){
            continue;
        }else{
            return it->second;
        }
    }
}
string readFile(){
    string myText;
    ifstream MyReadFile("/Users/sashulyatarasenko/Documents/exam/exam.txt");
    while(getline (MyReadFile, myText)) {}
    MyReadFile.close();
    return myText;
}