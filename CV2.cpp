#include <iostream>
#include "Rectangle.h"
#include "KeyValue.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {

	srand(time(NULL));
	Rectangle rc1(5, 10);

	rc1.Print();
	cout << "AREA: " << rc1.Area() << endl;
	cout << "Perimeter: " << rc1.Perimeter() << endl;
	cout << "Circle: " << rc1.CreateCircle() << endl;

	KeyValue* kv1 = new KeyValue(5, 10.2);
	cout << "kv1 key : " << kv1->GetKey() << endl;
	cout << "kv1 value : " << kv1->GetValue() << endl;

	/*KeyValue* kvp = kv1.CreateNext(11, 12);
	cout << kvp->GetKey() << endl;
	cout << kv1.GetNext()->GetKey() << endl;*/

	KeyValue* kvp = kv1;
	for (int i = 0; i < 1000; i++) {
		kvp->CreateNext(rand() / 100, rand());
		kvp = kvp->GetNext();
	}

	int count = 0;
	kvp = kv1;
	while (kvp->GetNext() != nullptr) {
		cout << count++ << ": " << kvp->GetKey() << endl;
		kvp = kvp->GetNext();
	}

	delete kv1;
}