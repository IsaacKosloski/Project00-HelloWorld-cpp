// Created by Isaac Kosloski on 15/06/2025.
// Qt (framework GUI profissional)

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel label("Hello, World!");
    label.resize(200, 100);
    label.show();
    return app.exec();
}