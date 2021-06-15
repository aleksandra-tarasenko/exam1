#include <iostream>
#include <fstream>



#include <cstdlib>
#include <time.h>

#include "myAlg.cpp"

using namespace std;

int main() {
    string myText = readFile();
    alg(myText);
    return 0;
}
