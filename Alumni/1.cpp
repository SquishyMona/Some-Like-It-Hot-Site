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
        outFile << "<div class=\"hottie\">\n\t<img src=\"Alumni/" << name << "\">\n\t<div class=\"details\">\n\t\t<h2>First Last</h2>\n\t\t<p>Joined: Fall xx'</p>\n\t\t<p>\n\t\t\t<span style=\"font-weight: bold; text-decoration: underline;\">\n\t\t\t\tSolos<br>\n\t\t\t</span>\n\t\t\t\n\t\t</p>\n\t</div>\n</div>\n";
    }
}