#pragma once
#include "CodingBase.h"
class CodingCaesar :public CodingBase
{
public:
    CodingCaesar(string str, int n) : CodingBase(str, n) {};
    string Coding(string, int)  override;
    string Decoding(string, int) override;

};

