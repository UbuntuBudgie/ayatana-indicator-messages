
#ifndef __DBUS_DATA_H__
#define __DBUS_DATA_H__ 1

#define INDICATOR_MESSAGES_DBUS_NAME               "com.canonical.indicator.messages"
#define INDICATOR_MESSAGES_DBUS_OBJECT             "/com/canonical/indicator/messages/menu"

#define INDICATOR_MESSAGES_DBUS_SERVICE_OBJECT     "/com/canonical/indicator/messages/service"
#define INDICATOR_MESSAGES_DBUS_SERVICE_INTERFACE  "com.canonical.indicator.messages.service"

#define APPLICATION_MENUITEM_TYPE        "application-item"
#define APPLICATION_MENUITEM_PROP_NAME   "label"
#define APPLICATION_MENUITEM_PROP_ICON   "icon-name"
#define APPLICATION_MENUITEM_PROP_RUNNING "app-running"

#define INDICATOR_MENUITEM_TYPE                  "indicator-item"
#define INDICATOR_MENUITEM_PROP_LABEL            "indicator-label"
#define INDICATOR_MENUITEM_PROP_ICON             "indicator-icon"
#define INDICATOR_MENUITEM_PROP_RIGHT            "right-side-text"
#define INDICATOR_MENUITEM_PROP_RIGHT_IS_LOZENGE "right-is-lozenge"

#define MAX_NUMBER_OF_INDICATORS  7

#endif /* __DBUS_DATA_H__ */
