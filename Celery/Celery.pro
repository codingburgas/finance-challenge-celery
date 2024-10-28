QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    dashboard_budget.cpp \
    dashboard_newbudget.cpp \
    dashboard_spendings.cpp \
    firstquestion.cpp \
    main.cpp \
    mainwindow.cpp \
    register.cpp \
    secondquestion.cpp \
    thirdquestion.cpp

HEADERS += \
    dashboard.h \
    dashboard_budget.h \
    dashboard_newbudget.h \
    dashboard_spendings.h \
    firstquestion.h \
    mainwindow.h \
    register.h \
    secondquestion.h \
    thirdquestion.h

FORMS += \
    dashboard.ui \
    dashboard_budget.ui \
    dashboard_newbudget.ui \
    dashboard_spendings.ui \
    firstquestion.ui \
    mainwindow.ui \
    register.ui \
    secondquestion.ui \
    thirdquestion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    images/dashboard-spendings.qrc \
    images/dashboard.qrc \
    images/mainWindow.qrc \
    images/questionnaire.qrc \
    images/register.qrc
