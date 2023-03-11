#include <iostream>
#include <queue>

using namespace std;

int main() {
    // ��������� ����� � ���������, �� �������� ����� ��� int � ��������� � ��������
    priority_queue<int> q;

    // ������ �������� �� �����
    q.push(6);
    q.push(1);
    q.push(7);
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(4);
    // �������� �������� ����� � ������� �������� ��������
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
