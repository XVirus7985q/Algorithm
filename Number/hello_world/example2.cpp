#include <iostream>
using namespace std;

int main()
{
    int Num;

    // ����ڷκ��� �Է� �ޱ�
    cout << "1~10 ������ ���ڸ� �Է��ϼ��� (����: �ٸ� �� �Է�): ";
    cin >> Num;

    // �Է°� ����
    while (Num > 0 && Num <= 10) {
        // ���̾Ƹ�� ��� ���
        for (int i = 1; i <= Num; i++) {
            // ���� ���
            for (int j = 1; j <= Num - i; j++) {
                cout << " ";
            }
            // ���� ���� ��� (�׵θ��� ���)
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1)
                    cout << "*"; // �׵θ� ��
                else
                    cout << " "; // ���� ����
            }
            cout << endl;
        }

        // ���̾Ƹ�� �ϴ� ���
        for (int i = Num - 1; i >= 1; i--) {
            // ���� ���
            for (int j = 1; j <= Num - i; j++) {
                cout << " ";
            }
            // ���� ���� ��� (�׵θ��� ���)
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1)
                    cout << "*"; // �׵θ� ��
                else
                    cout << " "; // ���� ����
            }
            cout << endl;
        }

        // ����ڷκ��� �ٽ� �Է� �ޱ�
        cout << "1~10 ������ ���ڸ� �Է��ϼ���. : ";
        cin >> Num;
    }

    cout << "���α׷��� �����մϴ�." << endl;
    return 0;
}
