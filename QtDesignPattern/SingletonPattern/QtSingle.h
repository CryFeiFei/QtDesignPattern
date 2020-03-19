#ifndef QTSINGLE_H
#define QTSINGLE_H

#include <QGlobalStatic>

class QtSingle
{
public:
	QtSingle(){}
	static QtSingle* instance();

	void functionQt();
};

#endif // QTSINGLE_H
