//
// Created by filan on 03.06.2025.
//
#ifdef _WIN32
#include <windows.h>
#endif
#include <iostream>

typedef int (* add_t) (int, int);

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    std::cout << "hInstance->unused " << hInstance->unused << std::endl;
    HMODULE hdll = LoadLibrary(TEXT("libneon.dll"));

    if (!hdll) {
        printf("LoadLibrary failed\n");
    }

    add_t add = (add_t) GetProcAddress(hdll, "add");
    if (!add) {
        printf("GetProcAddress failed\n");
    }

    std::cout << "65 + 4 = " << add(65, 4);

    return 0;
}