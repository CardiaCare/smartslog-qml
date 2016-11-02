#include "ssnode.h"

SSNode::SSNode(QQuickItem *parent){}

void SSNode::connect()
{
    sslog_node_t *node = sslog_new_node("TestQmlKP", &name().toStdString()[0], &address().toStdString()[0], port());
    if(SSLOG_ERROR_NO == sslog_node_join(node)) {
        qDebug() << "Connected to SmartSpace"
                 << "Name:" << name()
                 << "Port:" << port()
                 << "Address:" << address();
    } else {
        qDebug() << "Can't connect to SmartSpace";
        qDebug() << sslog_error_get_last_text();
    }
}

QString SSNode::name() const
{
    return m_name;
}

void SSNode::setName(const QString &name)
{
    m_name = name;
}

QString SSNode::address() const
{
    return m_address;
}

void SSNode::setAddress(const QString &address)
{
    m_address = address;
}

qint32 SSNode::port() const
{
    return m_port;
}

void SSNode::setPort(const qint32 &port)
{
    m_port = port;
}
