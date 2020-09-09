#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[] = "Hello World"; // รับค่าข้อความ string
	strrev(str); // ทำให้ข้อความย้อนกลับจากตัวอักษรสุดท้ายไปยังตัวอักษรตัวแรก
	cout<<str<<"\n";
	return 0;
}