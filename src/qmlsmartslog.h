#ifndef QMLSMARTSLOG_H
#define QMLSMARTSLOG_H

#include <QQuickItem>

class Node : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(Node)
public:
    Node(QQuickItem *parent = 0);

    ~Node();
};

#endif // QMLSMARTSLOG_H

