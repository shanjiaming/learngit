#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main() {
    system(R"ddd(
echo "
#include<iostream>
using namespace std;
int main(){
    cout << 12345<<endl;
}
"> aaa.cpp)ddd");
    system("g++ aaa.cpp -o aaa");
    system("./aaa");
}
