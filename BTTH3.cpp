#include <iostream>
using namespace std;
class Phanso{
private:
    int a, b, tu, mau;
public:
    //Constructor
    Phanso(int tu = 0, int mau = 1): a(tu), b(mau) {if (b ==0) b = 1;}

    //Hàm đưa phân số về dạng tối giản bằng cách chia tử mẫu cho Ước chung lớn nhất của chúng.
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
    //Các hàm phía dưới có đầu vào là hai phân số s1, s2
    //Các hàm tính ở dưới sẽ có 1 Phanso Temp với Temp.a lưu kết quả cho từ, Temp.b cho mẫu.
    void Tong(Phanso s1, Phanso s2){
        Phanso Temp;
        Temp.a = s1.a*s2.b + s2.a*s1.b;
        Temp.b = s1.b*s2.b;
        Temp.RutGon();
        cout << "Tổng: " << Temp.a << "/" << Temp.b << endl;
    }
    void Hieu(Phanso s1, Phanso s2){
        Phanso Temp;
        Temp.a = s1.a*s2.b - s2.a*s1.b;
        Temp.b = s1.b*s2.b;
        Temp.RutGon();
        cout << "Hiệu: " << Temp.a << "/" << Temp.b << endl;
    }
    void Nhan(Phanso s1, Phanso s2){
        Phanso Temp;
        Temp.a = s1.a * s2.a;
        Temp.b = s1.b*s2.b;
        Temp.RutGon();
        cout << "Nhân: " << Temp.a << "/" << Temp.b << endl;
    }
    void Chia(Phanso s1, Phanso s2){
        Phanso Temp;
        Temp.a = s1.a * s2.b;
        Temp.b = s1.b*s2.a;
        Temp.RutGon();
        cout << "Chia: " << Temp.a << "/" << Temp.b << endl;
    }
};
int main(){
    int s1, s2, s3 ,s4;
    cout << "Nhập tử, mẫu phân số đầu: ";
    cin >> s1 >> s2;
    cout << "Nhập tử, mẫu phân số thứ 2: ";
    cin >> s3 >> s4;
    
    Phanso test1(s1, s2); //Phân số thứ nhất.
    Phanso test2(s3, s4); //Phấn số thứ hai.
    Phanso final;
    final.Tong(test1, test2);
    final.Hieu(test1, test2);
    final.Nhan(test1, test2);
    final.Chia(test1, test2);
    return 0;
}
