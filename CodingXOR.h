#pragma once
#include "CodingBase.h"


class CodingXOR :public CodingBase
{

public:
    CodingXOR(string str, int n) : CodingBase(str, n) {};
    string Coding(string, int) override;
    string Decoding(string, int) override;
};

