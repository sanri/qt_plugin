#include "push_button.h"
#include "pushbuttonplugin.h"

#include <QtPlugin>

PushButtonPlugin::PushButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PushButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool PushButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PushButtonPlugin::createWidget(QWidget *parent)
{
    return new PushButton(parent);
}

QString PushButtonPlugin::name() const
{
    return QLatin1String("PushButton");
}

QString PushButtonPlugin::group() const
{
    return QLatin1String("");
}

QIcon PushButtonPlugin::icon() const
{
    return QIcon();
}

QString PushButtonPlugin::toolTip() const
{
    return QLatin1String("");
}

QString PushButtonPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool PushButtonPlugin::isContainer() const
{
    return false;
}

QString PushButtonPlugin::domXml() const
{
    return QLatin1String("<widget class=\"PushButton\" name=\"pushButton\">\n</widget>\n");
}

QString PushButtonPlugin::includeFile() const
{
    return QLatin1String("push_button.h");
}

