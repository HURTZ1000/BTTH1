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
        cout << a << "/" << b << endl;
    }
};
int main(){
    //Nhập tử mẫu từ bàn phím, ví dụ ở đây là 4 và 8.
    int a , b;
    cin >> a >> b;
    Phanso test(a, b);
    test.RutGon();
    return 0;
}
