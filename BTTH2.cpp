#include <iostream>
using namespace std;
class Phanso{
private:
    int a, b;
public:
    //Hàm để gán giá trị tử, mẫu cho phân số.
    Phanso(int tu = 0, int mau = 1): a(tu), b(mau) {if (b ==0) b = 1;}

    //Đầu vào là phanso s1 và phanso s2
    //Đầu ra là phân số lớn nhất
    void PSMAX(Phanso s1, Phanso s2){
        
        int temp1 = s1.a*s2.b;  //phân số thứ nhất
        int temp2 = s2.a*s2.b;  //phân số thứ hai
        if (temp1 > temp2) cout << s1.a << "/" << s1.b;
        else cout << s2.a << "/" << s2.b;
    }
};
int main(){
    int a, b, c, d;
    cin >> a >> b;
    cin.ignore();
    cin >> c >> d;
    Phanso test1(a, b);
    Phanso test2(c, d);
    Phanso final;
    final.PSMAX(test1, test2);
    return 0;
}
