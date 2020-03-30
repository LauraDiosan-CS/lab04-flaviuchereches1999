#include <iostream>
#include"Teste.h"
#include"UI.h"
using namespace std;

int main()
{
    TestRepo();
    TestServ();
    TestExamen();
    UI U;
    U.Run();
    return 0;
}
