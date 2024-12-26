#include <iostream>
using namespace std;

// �հ踦 ����ϴ� �Լ�
int calculateSum(int Num[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Num[i];
    }
    return sum;
}

// ����� ����ϴ� �Լ�
double calculateAverage(int Num[], int size) {
    int sum = calculateSum(Num, size); // �հ� �Լ� ����
    return static_cast<double>(sum) / size;
}

// ���� ���� �Լ�
void BubbleSort(int Num[], int size, bool ascending) {
    int temp = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            // ���� ����: ��������(ascending=true) �Ǵ� ��������(ascending=false)
            if ((ascending && Num[j] > Num[j + 1]) || (!ascending && Num[j] < Num[j + 1])) 
            {
                temp = Num[j];
                Num[j] = Num[j + 1];
                Num[j + 1] = temp;
            }
        }
    }
}

// ���� �Լ�
int main() {
    const int size = 5; // �迭 ũ�� ����
    int Num[size];      // ���ڸ� ������ �迭
    int sortChoice;     // ���� ��� ���� ����

    // ���� ��� ����
    cout << "���� ����� �����ϼ��� (1: ��������, 2: ��������): ";
    cin >> sortChoice;
    
    // ���� �Է� �ޱ�
    cout << "���ڸ� �Է��ϼ���:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "���� " << i + 1 << ": ";
        cin >> Num[i];
    }

    // ���� ����
    if (sortChoice == 1) 
    {
        BubbleSort(Num, size, true); // �������� ����
    }
    else if (sortChoice == 2) 
    {
        BubbleSort(Num, size, false); // �������� ����
    }
    else 
    {
        cout << "�߸��� �Է��Դϴ�. ���α׷��� �����մϴ�." << endl;
        return 1; // ������ ����
    }

    // ���ĵ� ��� ���
    cout << "���ĵ� ����: ";
    for (int i = 0; i < size; i++) 
    {
        cout << Num[i] << " ";
    }
    cout << endl;

    // ���հ� ��� ���
    cout << "����: " << calculateSum(Num, size) << endl;
    cout << "���: " << calculateAverage(Num, size) << endl;

    return 0;
}
