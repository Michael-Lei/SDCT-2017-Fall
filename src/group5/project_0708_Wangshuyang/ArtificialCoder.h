#pragma once
#include "stdafx.h"

class ArtificialCoder
{
private:
	std::vector<int> listOfInput;    //���������б�
	std::vector<int> possibleAdress;    //��Ҫֱ�ӵ��õ��ڴ��ַ
	std::vector<int> ram;    //�ڴ�ģ��
	std::vector<std::string> VMCode;
public:
	void getadrs(std::string ch);      //��VMCode�з��ʵ��ĵ�ַ�����, ch -> Typename+Space+Nunber
	void initialise();	//�������VMCoder���г�ʼ������
	void search();   //��������
	bool judge();     //�ж��Ƿ��Ч
};