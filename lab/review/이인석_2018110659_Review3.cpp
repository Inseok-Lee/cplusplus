#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>

using namespace std;



// 문제 2번
class Item{
private:
    string code;
    string name;
    int price;
public:
    Item() {}
    Item(string _code, string _name, int _price) : code(_code), name(_name), price(_price) {}
    
    string getCode(){return code;}
    string getName(){return name;}
    int getPrice(){return price;}
    
    void setCode(string _code) {code = _code;}
    void setName(string _name){name = _name;}
    void setPrice(int _price){price = _price;}
    void setItem(string _code, string _name, int _price){
        code = _code;
        name = _name;
        price = _price;
    }
    
    bool readItemFromFile(ifstream& fin){
        string s;
        int n;
        if(!fin){
            return false;
        }
        fin >> s;
        code = s;
        fin >> s;
        name = s;
        fin >> n;
        price  = n;
        
        return true;
    }
    
    void writeItemToFile(ofstream& fout){
        string s;
        fout << code << setw(10) << name << setw(10) << price << endl;
    }
    
};

int main() {
    Item temp;
    vector<Item> vItem;
    string inFileName = "/Users/insuklee/Desktop/CPP/item.txt";
    string outFileName = "/Users/insuklee/Desktop/CPP/item_output.txt";
    
    ifstream fin(inFileName);
    while (temp.readItemFromFile(fin))
        vItem.push_back(temp);
    fin.close();
    
    temp.setItem("E1002", "박카스", 1000);
    vItem.push_back(temp);
    
    ofstream fout(outFileName);
    
    for (auto elem : vItem)
        elem.writeItemToFile(fout);
    fout.close();
    
    return 0;
}


// 문제 1번
/*
int main() {
    Item item1("C1001", "계산기", 14000);
    Item item2;
    item2.setCode("F1002");
    item2.setName("계란빵");
    item2.setPrice(1000);
    cout << item1.getCode() << setw(10) << item1.getName() << setw(10) << item1.getPrice() << endl;
    cout << item2.getCode() << setw(10) << item2.getName() << setw(10) << item2.getPrice() << endl;
return 0; }
*/
