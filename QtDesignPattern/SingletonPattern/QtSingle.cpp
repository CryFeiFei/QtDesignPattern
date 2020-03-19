#include "QtSingle.h"

#include <QDebug>
//
Q_GLOBAL_STATIC(QtSingle, single)

QtSingle* QtSingle::instance()
{
	return single;
}

void QtSingle::functionQt()
{
	qDebug()<<"QtSingle...."<<endl;
}
