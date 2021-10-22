#include <iostream>
#include <string>
#include <vector>
#include "CText.hpp"
#include "CFancyText.hpp"
#include "CFixedText.hpp"

using namespace std;

int main(){
    // Text t1("Plain"); // 추상클래스는 객체를 생성 할 수 없다.
    vector<Text*> vec{new FancyText("Fancy", "(", ")", "-"), new FixedText};
    Text* pText;
    pText = new FixedText;
    vec.push_back(pText);
    
    for(auto& elem : vec)
        elem->append("A");
    
    for(auto& elem : vec)
        cout << elem->get() << endl;
    
    
    
    
    return 0;
}

