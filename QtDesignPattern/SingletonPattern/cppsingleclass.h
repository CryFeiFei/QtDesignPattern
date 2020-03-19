// Time: 2020年3月19日 21:44:53
// Author: Cryfeifei
// website: www.cryfeifei.cn

// 本文件实现cpp版本的单例模式


#ifndef CPPSINGLECLASS_H
#define CPPSINGLECLASS_H

#include <QDebug>

// 饿汉模式
class CPPSingleClass1
{
public:
	static CPPSingleClass1* instance()
	{
		return m_single;
	}

	void function1()
	{
		qDebug()<<"CPPSingleClass1::function1"<<endl;
	}

	~CPPSingleClass1()
	{
		qDebug()<<"CPPSingleClass1 destory"<<endl;
	}

	//....
private:
	CPPSingleClass1(){}
	CPPSingleClass1(const CPPSingleClass1&){}
	CPPSingleClass1& operator = (const CPPSingleClass1&) {}

private:
	static CPPSingleClass1* m_single;
};

CPPSingleClass1* CPPSingleClass1::m_single = new CPPSingleClass1();


//-----------------------------

// 懒汉模式
class CPPSingleClass2
{
public:
	static CPPSingleClass2* instance()
	{
		static CPPSingleClass2 cppSingle;
		return &cppSingle;
	}

	void function1()
	{
		qDebug()<<"CPPSingleClass2::function1"<<endl;
	}

	~CPPSingleClass2()
	{
		qDebug()<<"CPPSingleClass2 Destory"<<endl;
	}


private:
	//c++ 03
	CPPSingleClass2(){}
	CPPSingleClass2(const CPPSingleClass2&){}
	CPPSingleClass2& operator = (const CPPSingleClass2&) {}
};

#endif // CPPSINGLECLASS_H
