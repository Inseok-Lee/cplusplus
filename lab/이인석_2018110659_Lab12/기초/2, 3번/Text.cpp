#include <iostream>
#include <string>
#include "Text.hpp"


Text::Text(string _text) : text(_text) {}


string Text::get() {return text;}


void Text::append(string _extra){text += _extra;}
