#include <map>
#include <vector>

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

void alg(string s){
    char firstChar;
    char lastChar;
    int count = 1;

    vector<char> vec;
    vector<char> vec_tmp;
    int max = 0;

    bool tmp = false;

    for (int i = 1; i < s.length(); i++) {
        if(getNumberOfChar(s[i-1]) > getNumberOfChar(s[i])){
            if (i == 1) vec_tmp.push_back(s[i-1]);
            vec_tmp.push_back(s[i]);
            count++;
        }else{
            tmp = true;
            max = count;
            count = 0;
            if(vec.size() < vec_tmp.size()) vec = vec_tmp;
            vec_tmp.clear();
        }

    }

    if(!tmp){
        max = count;
        firstChar = s[0];
        lastChar = s[s.length()-1];
    }else{
        firstChar = vec[0];
        lastChar = vec[vec.size()-1];
    }

    cout << "\n" << max << " " << firstChar << " " << lastChar << endl;
}

string readFile(){
    string myText;
    ifstream MyReadFile("/Users/sashulyatarasenko/git/exam/exam.txt");
    while(getline (MyReadFile, myText)) {}
    MyReadFile.close();
    return myText;
}