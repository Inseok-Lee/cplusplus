#pragma once
#include <iostream>
#include <string>
#include "Text.hpp"

class FixedText : public Text{
public:
    FixedText();
    void append(string _extra) override;
};

