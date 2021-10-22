#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
    static int numCreatedObj;
    int* ary;
public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
        numCreatedObj++;
        // file open
        // 동적 할당
        ary = new int[5];
    }
    //소멸자
    ~Point() {
        cout << x << " , " << y << "is destructed.." << endl;
        //file close
        // 동적 할당 해제
        delete[] ary;
    }
    void setXY(int _x, int _y) {x = _x; y = _y;}
    int getX() const {return x;} // const method만 사용가능
    int getY() const {return y;}
    static int getNumCreatedObject() {return numCreatedObj;}
    //Point class는 operator<< 함수를 친구로 여긴다.
    friend ostream& operator<<(ostream& cout, const Point& pt);
    friend class SpyPoint;
    // A->B를 친구로 여겼음 (B는 A의 private 멤버변수를 사용할 수 있다)
    //                  (A는 B의 private 멤버변수를 사용할 수 있을까?) -> NO! (역은 성립하지 않음)
//    void print_spy(const SpyPoint& spy){
//        cout << spy.spyValue << endl;
//    }
};

//static 멤버 변수 초기화
int Point::numCreatedObj = 0;

//객체의 입력 type이 const이면 내부에서 const method만 사용가능
ostream& operator<<(ostream& cout, const Point& pt){
    cout << pt.getX() << ", " << pt.getY();
    return cout;
}

class SpyPoint{
private:
    int spyValue;
public:
    void hack_all_info(const Point& pt){
        cout << "Hacked by SpyPoint" << endl;
        cout << "x: " << pt.x << endl;
        cout << "y: " << pt.y << endl;
        cout << "numCreatedObj: " << pt.numCreatedObj << endl << endl;
    }
};


int main(){
    Point pt1(10, 20), pt2(30, 40);
    Point pt3 = pt1 + pt2; // operator+(pt1, pt2), pt1.operator+(pt2)
    cout << pt1 << endl; //operator<<(operator<<(cout, pt1), endl)
    cout << "numCreatedObj: " << pt1.getNumCreatedObject() << endl;
    
    Point* pPt = new Point[5]; // pPt = { pPt[0], pPt[1], pPt[2], pPt[3], pPt[4]}
    cout << "numCreatedObj: " << pPt[2].getNumCreatedObject() << endl;
    delete[] pPt;
    
    return 0;
}
