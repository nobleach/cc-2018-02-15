#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <unordered_map>

int main()
{
    using namespace std;
    // store user input
    string userInput;

    // Create an unordered_map string -> string
    unordered_map<string, string> morse_code = {
        {".-", "A"},
        {"-...", "B"},
        {"-.-.", "C"},
        {"-..", "D"},
        {".", "E"},
        {"..-.", "F"},
        {"--.", "G"},
        {"....", "H"},
        {"..", "I"},
        {".---", "J"},
        {"-.-", "K"},
        {".-..", "L"},
        {"--", "M"},
        {"-.", "N"},
        {"---", "O"},
        {".--.", "P"},
        {"--.-", "Q"},
        {".-.", "R"},
        {"...", "S"},
        {"-", "T"},
        {"..-", "U"},
        {"...-", "V"},
        {".--", "W"},
        {"-..-", "X"},
        {"-.--", "Y"},
        {"--..", "Z"},
        {"-----", "0"},
        {".----", "1"},
        {"..---", "2"},
        {"...--", "3"},
        {"....-", "4"},
        {".....", "5"},
        {"-....", "6"},
        {"--...", "7"},
        {"---..", "8"},
        {"----.", "9"}
    };

    cout << "Enter the Morse Code string:\n";
    getline(cin, userInput);
    istringstream iss(userInput);
    vector<string> vec_of_strings{istream_iterator<string>{iss},
                      istream_iterator<string>{}};


    for (const auto& code : vec_of_strings) {
        cout << morse_code[code];
    }

    return 0;
}
