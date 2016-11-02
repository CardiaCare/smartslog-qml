#ifndef SSNODE_H
#define SSNODE_H

#include <QQuickItem>

class SSNode : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY NameChanged)
    Q_PROPERTY(QString address READ address WRITE setAddress NOTIFY AddressChanged)
    Q_PROPERTY(QString port READ port WRITE setPort NOTIFY portChanged)
    Q_DISABLE_COPY(SSNode)
public:
    SSNode(QQuickItem *parent = 0);
    ~SSNode();
};

#endif // SSNODE_H

