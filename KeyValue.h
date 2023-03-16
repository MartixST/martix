#pragma once
class KeyValue {
private:
	int key;
	float value;
	KeyValue* next;
public:
	KeyValue(int key, float value);
	~KeyValue();
	int GetKey();
	float GetValue();
	KeyValue* GetNext();
	KeyValue* CreateNext(int key, float value);
};