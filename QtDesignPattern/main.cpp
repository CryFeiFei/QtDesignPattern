#include <QCoreApplication>

#include "SingletonPattern/cppsingleclass.h"
#include "SingletonPattern/QtSingle.h"

void SingletonPatternTest()
{
	CPPSingleClass1* cpp1 = CPPSingleClass1::instance();
	cpp1->function1();

	CPPSingleClass2* cpp2 = CPPSingleClass2::instance();
	cpp2->function1();

	QtSingle* qtsingle = QtSingle::instance();
	qtsingle->functionQt();
}


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);


	SingletonPatternTest();
	return a.exec();
}
