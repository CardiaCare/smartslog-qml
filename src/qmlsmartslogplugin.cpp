#include "qmlsmartslogplugin.h"
#include "qmlsmartslog.h"

#include <qqml.h>

void QmlSmartslogPlugin::registerTypes(const char *uri)
{
    // @uri QmlSmartSlog
    Q_ASSERT(uri == QLatin1String("QmlSmartSlog"));
    qmlRegisterType<Node>(uri, 1, 0, "Node");
}


