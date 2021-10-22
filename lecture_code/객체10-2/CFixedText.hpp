#pragma once
#include <iostream>
#include <string>
#include "CText.hpp"

using namespace std;

class FixedText : public Text{
public:
    FixedText() : Text::Text("FIXED") {}
    string get() const override {return Text::text;}
    void append(string _extra) override {}
};
