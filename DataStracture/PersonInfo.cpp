#include "PersonInfo.h"
#include<iostream>
using namespace std;





PersonInfo::~PersonInfo()
{
	static int i = 0;
	i++;
	cout << "destractor part has been invoked" << endl;
	//メモリの開放などを実行することでメモリ開放忘れを防ぐ

}

void PersonInfo::setAge(int value) {
	if (value < 0) {
		this->age = 0;
	}
	else {
		this->age = value;
	}
}

short PersonInfo::getAge(){
	return this->age;
}

PersonInfo::PersonInfo()
{
	static int i =0;
	i++;
	cout << "Hello this program recordes personal information" <<  i << endl;
}
