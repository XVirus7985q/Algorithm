#include <iostream>
using namespace std;

int main()
{
	int Num; 
	
	// ����ڷκ��� �Է� �ޱ�
	cout << "���ڸ� �Է��ϼ���. ";
	cin >> Num; 

	// �Է°� ����
	while (Num> 0 && Num <= 10){ //���� ����: �Է°��� 0���� ũ�ų� 10������ �� �ݺ�
		if (Num< 0 && Num > 10){ //�Է°��� 0���� �۰ų� 10�ʰ��� �� ����			
		}

		// ���̾Ƹ�� ��� ���
		for (int i = 1; i <= Num; i++) { // �ʱ�ȭ: i = 1
                                         // ���� ����: i <= Num
                                         // ���� ����: i++
			// ���� ���
			for (int j = 1; j <= Num - i; j++) { // �ʱ�ȭ: j = 1
                                                 // ���� ����: j <= Num - i
                                                 // ���� ����: j++
				cout << " "; // ���� ����: ���� ���
			}
			// �� ���
			for (int j = 1; j <= 2 * i - 1; j++) { // �ʱ�ȭ: k = 1
                                                   // ���� ����: k <= 2 * i - 1
                                                   // ���� ����: k++
				cout << "*"; // ���� ����: �� ���				
			}
			cout << endl; // �� �ٲ�
		}

		// ���̾Ƹ�� �ϴ� ���
		for (int i = Num - 1; i >= 1; i--) { // �ʱ�ȭ: i = Num - 1
                                             // ���� ����: i >= 1
                                             // ���� ����: i--
			// ���� ���
			for (int j = 1; j <= Num - i; j++) { // �ʱ�ȭ: j = 1
                                                 // ���� ����: j <= Num - i
                                                 // ���� ����: j++
				cout << " "; // ���� ����: ���� ���
			}
			// �� ���
			for (int j = 1; j <= 2 * i - 1;j++) { // �ʱ�ȭ: k = 1
                                                   // ���� ����: k <= 2 * i - 1
                                                   // ���� ����: k++
				cout << "*"; // ���� ����: �� ���				
			}
			cout << endl; // �� �ٲ�
		}
		// ����ڷκ��� �Է� �ޱ�
		cout << "���ڸ� �Է��ϼ���. " ; 
		cin >> Num; 
	}
	cout << "1~10 �߿��� �Է����ּ���!" << endl;
	return 0;
}

