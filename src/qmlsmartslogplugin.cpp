#include "qmlsmartslogplugin.h"


void QmlSmartslogPlugin::registerTypes(const char *uri)
{
    sslog_init();

    // @uri QmlSmartSlog
    Q_ASSERT(uri == QLatin1String("QmlSmartSlog"));
    qmlRegisterType<SSNode>(uri, 1, 0, "SSNode");
}


