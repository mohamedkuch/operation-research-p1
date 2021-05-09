// =======================================================
// Operatiions Research - Methods and Applications
// Dr. rer. nat. Sebastian Milz
//
// SoSe 2021
// Practical Exercise 1
// Topic: Hungarian Method
//
// Submitted by:
//
//
//
//
//========================================================


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

//========================================================
// methods for file reading and data operations
//========================================================

// splits string at specified separator
vector<string> SplitString(string input, string separator = " ")
{
    vector<string> result;
    string::size_type position, start = 0;

    while (string::npos != (position = input.find(separator, start)))
    {
        result.push_back(input.substr(start, position - start));
        start = position + separator.size();
    }

    result.push_back(input.substr(start));
    return result;
}

// opens filepath and returns a vector containing a vector for each input line separated by " "
vector<vector<string>> ReadInputData(string filepPath)
{
    std::ifstream input(filepPath);

    if (!input)
    {
        std::cerr << "Fehler beim Oeffnen der Datei " << filepPath << "\n";
    }

    vector<vector<string>> rawData{};
    string line;

    while (std::getline(input, line))
    {
        rawData.push_back(SplitString(line));
    }

    return rawData;
}

//========================================================
// data structures and methods for bipartite matching
//========================================================

// TODO data structures and methods here

int main()
{
    // TODO MAYBE Use small test cases first (large cases might need some time to load data)
    for (int i = 1; i <= 2; i++)
    {
        // TODO MAYBE Adjust path to testcases
        string directory = "/Users/mohamedks/CLionProjects/praktikum1/Testcases/";
        string filename = "Test" + std::to_string(i) + ".txt";

        std::cout << "\n" + filename << std::endl;

        // read data
        vector<vector<string>> RawData = ReadInputData(  directory + filename);

        // fill data structures

        // get initial matching

        // hungarian method

        // (optional) check results

        // write results to file
    }

    string answer;
    std::cin >> answer;

    return 0;
}
