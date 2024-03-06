#include <iostream>
using namespace std;

class Student {
public:
    void studentMark(int phy, int math, int chem) {
        cout << "Total marks: " << phy + math + chem << endl;
    }

    void studentPercent(int phy, int math, int chem) {
        int percent = (phy + math + chem) / 3;
        cout << "Percentage: " << percent << "%" << endl;
    }
};

int main() {
    int phy, math, chem;

    cout << "Enter phy, chem, math: ";
    cin >> phy >> chem >> math;
    Student obj;
    obj.studentMark(phy, math, chem);
    obj.studentPercent(phy, math, chem);

    return 0;
}