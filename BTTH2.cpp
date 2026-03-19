#include <iostream>
using namespace std;
class Phanso{
private:
    int a, b;
public:
    //Hàm để gán giá trị tử, mẫu cho phân số.
    Phanso(int tu = 0, int mau = 1): a(tu), b(mau) {if (b ==0) b = 1;}

    //Hàm đưa phân số về dạng tối giản bằng cách chia tử mẫu cho Ước chung lớn nhất của chúng.
    //Đầu vào sẽ là a(tu), b(mau)
    //Đầu ra của hàm sẽ in ra a, b sau khi được rút gọn
    void RutGon(){
        int temp = abs(a), s2 = abs(b);
        while(s2 != 0){
            int r = temp % s2;
            temp = s2;
            s2 = r;
        }
        a /= temp;
        b /= temp;
    }

    //Hàm có đầu vào là hai phân số được nhập từ bàn phím
    //a, b là tử mẫu phân số thứ 1; c, d là tử mẫu phân số thứ 2.
    //Hàm tìm phân số lớn nhất bằng cách rút gọn cả 2 phân số, sau đó tính bằng công thức a*d = b*c
    //Đầu ra hàm sẽ in ra phân số lớn nhất
    void PSMAX(Phanso s1, Phanso s2){
        s1.RutGon();
        s2.RutGon();
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
    Phanso test1(a, b);   //ps thứ 1 là 4/9
    Phanso test2(c, d);   //ps thứ 2 là 6/7
    Phanso final;
    final.PSMAX(test1, test2);
    return 0;
}
