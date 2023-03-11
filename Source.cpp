#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Створюємо чергу з пріорітетом, де елементи мають тип int і пріорітетом є значення
    priority_queue<int> q;

    // Додаємо елементи до черги
    q.push(6);
    q.push(1);
    q.push(7);
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(4);
    // Виводимо елементи черги у порядку спадання пріорітету
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
