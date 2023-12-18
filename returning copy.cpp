#include <iostream>
#include <string>

using namespace std;

string insertParentheses(const string& str, const string& pattern) {
    string result = str;
    string::size_type pos = result.find(pattern, 0);

    // Пока находятся вхождения pattern в строке
    while (pos != string::npos) {
        // Вставляем "(" перед вхождением
        result.insert(pos, "(");
        // Вставляем ")" после вхождения
        result.insert(pos + pattern.length() + 1, ")");
        // Продолжаем поиск с позиции, следующей за найденным вхождением
        pos = result.find(pattern, pos + 2);
    }

    return result;
}

int main() 
{
    setlocale(LC_ALL, "");
    string str, pattern;
    cout << "Введите строку: ";
    cin >> str;
    cout << "Введите подстроку: ";
    cin >> pattern;

    string result = insertParentheses(str, pattern);
    cout << "Результат: " << result << endl;

    return 0;
}