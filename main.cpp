#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <spreadsheetmodel.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    SpreadSheetModel model;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("model", &model);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
