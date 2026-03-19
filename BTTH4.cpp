#include <iostream>
using namespace std;

class Date {
private:
    int date, month, year;

public:
    Date(int ngay, int thang, int nam) : date(ngay), month(thang), year(nam) {}

    // Hàm kiểm tra năm nhuận
    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    //Hàm có đầu vào là tháng và năm.
    //Hàm lấy số ngày tối đa trong tháng
    //Hàm sẽ trả lại số ngày tối đa trong tháng.
    int daysInMonth(int m, int y) {
        switch (m) {
            case 4: case 6: case 9: case 11: 
                return 30;
            case 2: 
                return isLeapYear(y) ? 29 : 28;
            default: 
                return 31;
        }
    }

    //Hàm tính ngày tiếp theo.
    void nextDay() {
        int maxDays = daysInMonth(month, year);
        
        if (date < maxDays) {
            date++; // Ngày bình thường, tăng ngày lên 1.
        } else {
            date = 1; // Hết tháng, quay về ngày 1
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        }
    }

    void display() {
        cout << date << "/" << month << "/" << year;
    }
};

int main() {
    int ngay, thang, nam;
    if (!(cin >> ngay >> thang >> nam)) return 0;
    
    Date cur_date(ngay, thang, nam);
    cur_date.nextDay();
    cur_date.display();
    
    return 0;
}