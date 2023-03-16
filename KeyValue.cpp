#include "KeyValue.h"

KeyValue::KeyValue(int key, float value) {
	this->key = key;
	this->value = value;
}

int KeyValue::GetKey() {
	return this->key;
}

float KeyValue::GetValue() {
	return this->value;
}

KeyValue* KeyValue::GetNext() {
	return this->next;
}

KeyValue* KeyValue::CreateNext(int key, float value) {
	if (this->next != nullptr) {
		delete this->next;
		this->next = nullptr;
	}
	this->next = new KeyValue(key, value);
	return this->next;
}

KeyValue::~KeyValue() {
	if (this->next != nullptr) {
		delete this->next;
		this->next = nullptr;
	}
}