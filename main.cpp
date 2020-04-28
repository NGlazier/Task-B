#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int countLine(string pName);
int countChar(string pName);

int main(){
    string parameter;
    cout << "Enter parameter: ";
    cin >> parameter;
    cout << countLine(parameter) << " Lines";
    cout << countChar(parameter) << " Characters";

    return 0;
}

int countLine(string pName){
    if(pName.length() == 0){
        pName = "Ohio University";
        return 1;
    }
    int number = 0;
    string line;
    ifstream file(pName);

    if(file.is_open()){
        while(!file.eof()){
            getline(file,line);
            cout<< line << endl;
            number++;
        }
        file.close();
    }
    return number;
}