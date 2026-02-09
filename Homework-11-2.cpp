#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>

int wmain(int argc, wchar_t* argv[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    std::wstring user_answer;
    std::wstring secret_word = L"малина";

    std::wcout << L"Слово загадано на русском языке и написано строчными буквами.\n";

    do
    {
        std::wcout << L"Угадайте слово: ";
        std::wcin >> user_answer;
        if (user_answer == secret_word)
        {
            std::wcout << L"Правильно!\nВы победили!\nЗагаданное слово — " << secret_word << std::endl;
            break;
        }
        else
        {
            std::wcout << L"Неправильно" << std::endl;
        }
    } while (true);

    return 0;
}