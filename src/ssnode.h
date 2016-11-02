#ifndef SSNODE_H
#define SSNODE_H

#include <QQuickItem>
extern "C"{
#include "SmartSlog/smartslog.h"
}

class SSNode : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString address READ address WRITE setAddress)
    Q_PROPERTY(qint32 port READ port WRITE setPort)
public:
    SSNode(QQuickItem *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QString address() const;
    void setAddress(const QString &address);

    qint32 port() const;
    void setPort(const qint32 &port);


    Q_INVOKABLE void connect();
signals:

public slots:

private:
    QString m_name;
    QString m_address;
    qint32 m_port;
};

#endif // SSNODE_H
