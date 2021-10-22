#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 순수 가상 함수를 적어도 1개 포함하는 class를 추상 클래스(Abstract class)
class Text{
protected:
    string text;
public:
    Text(string _t) : text(_t) {}
    virtual string get() = 0; // 순수 가상 함수
    virtual void append(string _extra) = 0; // 순수 가상 함수
};

class FancyText : public Text{
private:
    string left_brac;
    string right_brac;
    string connector;
public:
    FancyText(string _t, string _lb, string _rb, string _con)
    : Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}
    string get() override {return left_brac + Text::text + right_brac;}
    void append(string _extra) override {Text::text += connector + _extra;}
};

class FixedText : public Text{
public:
    FixedText() : Text::Text("FIXED"){}
    string get() override {return Text::text;}
    void append(string _extra) override {}
};

int main(){
    Text t1("Plain");
    t1.append("A");
    cout << t1.get() << endl;
    
    FancyText t2("Fancy", "<<", ">>", "***");
    t2.append("A");
    cout << t2.get() << endl;
    
    FixedText t3;
    t3.append("A");
    cout << t3.get() << endl;
    cout << endl;
    
    // up-casting
    t1 = t2; // base class <- derived class 가능
    // t2 = t1 // derived class <- base class 불가
    cout << t1.get() << endl;
    cout << endl;
    
    vector<Text*> vec{new Text("Plain"), new FancyText("Fancy", "(", ")", "-"), new FixedText()};
    Text* pText;
    pText = new FancyText("Fancy2", "{", "}", "-");
    vec.push_back(pText);
    pText = new Text("Plain2");
    vec.push_back(pText);
    
    for(auto& elem : vec)
        elem->append("A");
    
    for(auto& elem : vec)
        cout << elem->get() << endl;
    
    for(auto& elem : vec)
        delete elem;
    
    
    
    return 0;
}
