#include "windows.h"

// Точка входа для приложения
[STAThread]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainForm());

    return 0;
}
