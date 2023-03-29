//#include <iostream>
//#include <cstring>
//using namespace std;
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//char buffer[48];
//
//int main() {
//	chaff* pcha = new chaff[2];
//	chaff* pchaff = new (buffer) chaff[2];
//	for (int i = 0; i < 2; i++) {
//		strcpy_s(pcha[i].dross, "A" + i);
//		strcpy_s(pchaff[i].dross, "B" + i);
//
//		pcha[i].slag = i;
//		pchaff[i].slag = i + 2;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		cout << pcha[i].dross << ", " << pcha[i].slag << ", " << &pcha[i] << endl;
//		cout << pchaff[i].dross << ", " << pchaff[i].slag << ", " << &pchaff[i] << endl;
//	}
//
//	return 0;
//}
