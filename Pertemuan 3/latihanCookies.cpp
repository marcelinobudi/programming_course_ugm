#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    const int COOKIES_ON_BOX = 24;
    const int BOX_ON_CONTAINER = 75;

    int cookies, cookiesOnBox, boxOnContainer;
    int box_dikirim, container_dikirim;
    int sisa_cookies, sisa_box;

    cout << "Jumlah cookies: ";
    cin >> cookies;
    cout << "Jumlah cookies di dalam box: ";
    cin >> cookiesOnBox;
    cout << "Jumlah box di dalam container: ";
    cin >> boxOnContainer;

    if(cookies % cookiesOnBox == 0){
        box_dikirim = cookies/COOKIES_ON_BOX;
    } else {
        box_dikirim = floor(cookies % cookiesOnBox);
        sisa_cookies = cookies % cookiesOnBox;
    }

    if(box_dikirim % boxOnContainer == 0){
        container_dikirim = box_dikirim / boxOnContainer;
    } else {
        container_dikirim = floor(box_dikirim / boxOnContainer);
        sisa_box = box_dikirim % boxOnContainer;
    }

    cout << "==================" << endl;

    cout << "Box dikirim: " << box_dikirim << endl;
    cout << "Cookies sisa: " << sisa_cookies << endl;
    cout << "Container dikirim: " << container_dikirim << endl;
    cout << "Box sisa: " << sisa_box << endl;

    return 0;
}
