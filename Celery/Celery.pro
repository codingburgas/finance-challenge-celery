QT       += core gui
QT += sql
QT += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    dashboard_newbalance.cpp \
    dashboard_newbudget.cpp \
    dashboard_savinggoals.cpp \
    dashboard_spendings.cpp \
    firstquestion.cpp \
    main.cpp \
    mainwindow.cpp \
    models/budgetitem.cpp \
    models/savinggoal.cpp \
    models/transaction.cpp \
    models/user.cpp \
    register.cpp \
    secondquestion.cpp \
    thirdquestion.cpp


HEADERS += \
    dashboard.h \
    dashboard_newbalance.h \
    dashboard_newbudget.h \
    dashboard_savinggoals.h \
    dashboard_spendings.h \
    firstquestion.h \
    mainwindow.h \
    models/budgetitem.h \
    models/savinggoal.h \
    models/transaction.h \
    models/user.h \
    register.h \
    secondquestion.h \
    thirdquestion.h


FORMS += \
    dashboard.ui \
    dashboard_newbalance.ui \
    dashboard_newbudget.ui \
    dashboard_savinggoals.ui \
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
    celery.qrc \
    dashboard-balance.qrc \
    dashboard-spendings.qrc \
    dashboard_newbudget.qrc \
    images/dashboard.qrc \
    images/mainWindow.qrc \
    images/register.qrc \
    questions_background.qrc
