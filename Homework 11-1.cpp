#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>

int wmain(int argc, wchar_t* argv[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    std::wstring name;
    std::wstring surname;
    std::wstring greetings;

    std::wcout << L"Введите имя: ";
    std::wcin >> name;
    std::wcout << L"Введите фамилию: ";
    std::wcin >> surname;

    greetings = L"Здравствуйте, " + name + L" " + surname + L"!";
    std::wcout << greetings << std::endl;

    return 0;
}