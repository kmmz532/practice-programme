#include <iostream>
#include <string>

using namespace std;

int main() {
    string ip;
    cin >> ip;

    string tmp = ip;
    int len = ip.length();
    
    int countOfDot = 0;
    
    while (true) {
        size_t pos = tmp.find('.');
        if (pos == string::npos) {
            int num = stoi(tmp);
            if (0 > num || num > 255) {
                printf("0～255の範囲外の数値は指定できません");
                return 1;
            }
            break;
        }
        int num = stoi(tmp.substr(0, pos));
        tmp = tmp.substr(pos + 1, len);
        
        if (0 > num || num > 255) {
            printf("0～255の範囲外の数値は指定できません");
            return 1;
        }
        
        countOfDot++;
    }
    
    if (countOfDot != 3) {
        printf("IPアドレスの形式が不正です");
        return 1;
    }
    
    size_t lastPos = ip.find_last_of('.'); // 最後の . の位置
    
    string head = ip.substr(0, lastPos + 1); // 192.168.1.
    string subnetmark = "255.255.255.0";
    string gateway = head + "1";
    string network = head + "0";

    printf("IP Address: %s\n", ip.c_str());
    printf("Subnet Mask: %s\n", subnetmark.c_str());
    printf("Default Gateway: %s\n", gateway.c_str());
    printf("Network Address: %s\n", network.c_str());
    
    return 0;
}
