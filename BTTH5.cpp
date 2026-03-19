#include <iostream>
#include <string>
using namespace std;
class Sinhvien{
    private:
        string Hoten;
        double D_toan, D_van;
    public:
        void Nhap_TT(){
        cout << "Nhập họ tên: ";
        getline(cin, Hoten);
        cout << "Nhập điểm Toán, Văn: ";
        cin >> D_toan >> D_van;
    }

    //Hàm xuất các thông tin
    //Hàm sẽ tính luôn điểm trung bình (GPA) và xuất ra màn hình
     void Xuat(){
        cout << "Họ và Tên: "<< Hoten << endl;
        cout << "GPA: " << double((D_van + D_toan)/2.0);
    }
};

int main(){
    Sinhvien sv1;
    sv1.Nhap_TT();
    sv1.Xuat();
    return 0;
}