#include "imgCompress.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	imgCompress w;

	QApplication::setStyle(QStyleFactory::create("fusion"));
	w.setWindowTitle(QStringLiteral("ѹ�����"));

	w.show();
	return a.exec();
}
