#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int getMax() {
    int value;
    qInfo() << "Enter the maximum:";
    std::cin >> value;

    return value;
}

void message(QString value) {
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = getMax();
    if(max) {
        for(int i = 0; i < max; i++){
            message("Hello World");
        }
    }

    return a.exec();
}
