#include "mainwindow.h"
#include "models/user.h"  // Ensure this file includes initializeDatabase() and setupDatabaseSchema()
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Initialize and set up the database
    if (!initializeDatabase()) {
        qDebug() << "Failed to initialize database. Exiting application.";
        return -1;  // Exit if the database fails to initialize
    }

    if (!setupDatabaseSchema()) {
        qDebug() << "Failed to set up database schema. Exiting application.";
        return -1;  // Exit if the database schema fails to set up
    }

    MainWindow w;
    w.show();

    return app.exec();
}
