#include "CodingXOR.h"

string CodingXOR::Coding(string str, int key)
{
    string newText = "";
    for (int i = 0; i < str.size(); ++i) {
        newText += str[i] ^ key;
    }
    return newText;
}

string CodingXOR::Decoding(string str, int key)
{
    string originText = "";
    for (int i = 0; i < str.size(); ++i) {
        originText += str[i] ^ key;
    }
    return originText;
}
