#include "qmlsmartslog.h"
//#include <qglobal.h>
extern "C"{
#include "SmartSlog/smartslog.h"
}
Node::Node(QQuickItem *parent):
    QQuickItem(parent)
{
    qDebug() << "It works!";
}

Node::~Node()
{
}
