#include <iostream>
#include <string>

using namespace std;

int main() {
    string ip;
    cin >> ip;
    
    string head = ip.substr(0,10); // 192.168.1.
    string subnetmark = "255.255.255.0";
    string gateway = head + "1";
    string network = head + "0";

    printf("IP Address: %s\n", ip.c_str());
    printf("Subnet Mask: %s\n", subnetmark.c_str());
    printf("Default Gateway: %s\n", gateway.c_str());
    printf("Network Address: %s\n", network.c_str());
    
    return 0;
}
