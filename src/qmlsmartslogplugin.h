#ifndef SMARTSLOG_PLUGIN_H
#define SMARTSLOG_PLUGIN_H

#include <QQmlExtensionPlugin>

class QmlSmartslogPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "QmlSmartSlog")

public:
    void registerTypes(const char *uri);
};

#endif // SMARTSLOG_PLUGIN_H

