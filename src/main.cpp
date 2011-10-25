#include "main.h"

QApplication * g_app = NULL;
MainWindow * g_mainWindow = NULL;

int main(int argc, char * argv[])
{
    g_app = new QApplication(argc, argv);

    g_mainWindow = new MainWindow();

    // enter Qt event loop
    g_app->exec();
}
