#include "CodingCaesar.h"

string CodingCaesar::Coding(string str, int key)
{
    string newText = "";
    key = key % 26;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {

            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] += key;
                if (str[i] > 90)
                    str[i] = str[i] - 2;
            }
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] += key;
                if (str[i] > 122)
                    str[i] = str[i] - 26;
            }
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
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] -= key;
            if (str[i] < 65)
                str[i] = str[i] + 26;
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= key;
            if (str[i] < 97)
                str[i] = str[i] + 26;
        }
        originText += str[i];
    }
    return originText;
}