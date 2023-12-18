#include <iostream>
#include <string>

using namespace std;

string insertParentheses(const string& str, const string& pattern) {
    string result = str;
    string::size_type pos = result.find(pattern, 0);

    // ���� ��������� ��������� pattern � ������
    while (pos != string::npos) {
        // ��������� "(" ����� ����������
        result.insert(pos, "(");
        // ��������� ")" ����� ���������
        result.insert(pos + pattern.length() + 1, ")");
        // ���������� ����� � �������, ��������� �� ��������� ����������
        pos = result.find(pattern, pos + 2);
    }

    return result;
}

int main() 
{
    setlocale(LC_ALL, "");
    string str, pattern;
    cout << "������� ������: ";
    cin >> str;
    cout << "������� ���������: ";
    cin >> pattern;

    string result = insertParentheses(str, pattern);
    cout << "���������: " << result << endl;

    return 0;
}