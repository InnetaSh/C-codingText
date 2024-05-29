#include "CodingCaesar.h"

string CodingCaesar::Coding(string str, int key)
{
    string newText = "";
    key = key % 26;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
                if (!isupper(str[i]))
                    str[i] = ((str[i] - 'a' + key) % 26 + 'a');
                else
                    str[i] = ((str[i] - 'A' + key) % 26 + 'A');
        }
        newText += str[i];
    }
    return newText;;
}

string CodingCaesar::Decoding(string str, int key)
{
    string originText = "";
    key = key % 26;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (!isupper(str[i]))
                str[i] = ((str[i] - 'a' - key+26) % 26 + 'a');
            else
                str[i] = ((str[i] - 'A' - key+26) % 26 + 'A');
        }
        originText += str[i];
    }
    return originText;
}