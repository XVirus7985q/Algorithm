#include <iostream>
using namespace std;

// �հ踦 ����ϴ� �Լ�
int calculateSum(int Num[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Num[i];
    }
    return sum;
}

// ����� ����ϴ� �Լ�
double calculateAverage(int Num[], int size){
    int sum = calculateSum(Num, size); // �հ� �Լ� ����
    return static_cast<double>(sum) / size;
}



// ���� �Լ�
int main()
{
    const int size = 5; // �迭 ũ�� ����
    int Num[size]; // ���ڸ� ������ �迭

    // ���� �Է� �ޱ�
    cout << "���ڸ� �Է��ϼ���:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "���� " << i + 1 << ": ";
        cin >> Num[i];
    }

    // ��� ���
    cout << "�Է¹��� ����: ";
    for (int i = 0; i < size; i++) {
        cout << Num[i] << " ";
    }
    cout << endl;
    cout << "����: " << calculateSum(Num, size) << endl;
    cout << "���: " << calculateAverage(Num, size) << endl;
    return 0;
}
