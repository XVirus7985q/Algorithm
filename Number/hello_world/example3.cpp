#include <iostream>

using namespace std;

int main() {
    int Num;
    cin >> Num;

    // �Է°� ����
    while (Num > 2 && Num <= 10) { //���� ����: �Է°��� 2���� ũ�ų� 10������ �� �ݺ�
        if (Num < 2 && Num > 10) { //�Է°��� 2���� �۰ų� 10�ʰ��� �� ����			
        }
    int cnt = 1;

   

    for (int i = 0; i < Num; i++) {
        // 1
        cout << "*";

        // 2
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // 3
        cout << "*";

        // 4
        for (int j = i; j < Num * 2 - 1 - cnt; j++) {
            cout << " ";
        }

        // 5
        cout << "*";

        // 6
        for (int j = 0; j < i - 1 + cnt; j++) {
            cout << "*";
        }

        // 7
        cout << "*";

        // 8
        for (int j = i; j < Num * 2 - 1 - cnt; j++) {
            cout << " ";
        }

        // 9
        cout << "*";

        // 10
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // 11
        cout << "*";

        cnt++;
        cout << "\n";
    }

    // �հ� �ؿ� �ִ� �簢�� �����
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < Num * 4 + 2; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    // ����ڷκ��� �Է� �ޱ�
    cout << "���ڸ� �Է��ϼ���. ";
    cin >> Num;
    }
    cout << "3~10 �߿��� �Է����ּ���!" << endl;
    return 0;
}
