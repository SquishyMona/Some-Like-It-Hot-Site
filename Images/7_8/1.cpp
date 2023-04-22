#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    string name;

    inFile.open("names.txt");
    outFile.open("namesout.txt");

    while(!inFile.eof())
    {
        getline(inFile, name);
        outFile << "<img class=\"photo\" src=\"Images/7_8/" << name << "\">\n\n";
    }
}