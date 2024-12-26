#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// �⺻ Ŭ����: Animal
class Animal 
{
public:
    virtual void makeSound() = 0; // ���� ���� �Լ�
    virtual ~Animal() {}         // ���� �Ҹ���
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal 
{
public:
    void makeSound() 
    {
        cout << "��: ��! ��!" << endl;
    }
};

// �Ļ� Ŭ����: Cat
class Cat : public Animal 
{
public:
    void makeSound() 
    {
        cout << "�����: �̾߿�! �̾߿�!" << endl;
    }
};

// �Ļ� Ŭ����: Cow
class Cow : public Animal 
{
public:
    void makeSound() 
    {
        cout << "��: ���Ӿ��! ���Ӿ��!" << endl;
    }
};

// Zoo Ŭ����
class Zoo
{
private:
    Animal* animals[10]; // ���� ��ü�� �����ϴ� ������ �迭
    int animalCount;     // ���� ����

public:
    Zoo() : animalCount(0) // ������ �ʱ�ȭ
    {
        for (int i = 0; i < 10; i++)
        {
            animals[i] = nullptr; // ������ �迭 �ʱ�ȭ
        }
    }

    void addAnimal(Animal* animal)
    {
        if (animalCount < 10)
        {
            animals[animalCount++] = animal; // �迭�� ���� �߰�
        }
        else
        {
            cout << "�������� ���� á���ϴ�!" << endl;
        }
    }

    void performActions()
    {
        for (int i = 0; i < animalCount; i++)
        {
            if (animals[i])
            {
                animals[i]->makeSound(); // �� ������ �Ҹ� ���
            }
        }
    }

    ~Zoo()
    {
        for (int i = 0; i < animalCount; i++)
        {
            if (animals[i])
            {
                delete animals[i]; // �޸� ����
                animals[i] = nullptr; // �����ϰ� nullptr�� �缳��
            }
        }
    }
};


// ���� ������ �����ϴ� �Լ�
Animal* createRandomAnimal() 
{
    int randomNum = rand() % 3; // 0, 1, 2 �� �ϳ��� ���� ����
    switch (randomNum) 
    {
    case 0:
        return new Dog();
    case 1:
        return new Cat();
    case 2:
        return new Cow();
    default:
        return nullptr; // �⺻������ nullptr ��ȯ (������ ����)
    }
}

int main() 
{
    srand(static_cast<unsigned>(time(0))); // ���� �ʱ�ȭ
    // Animal Ÿ�� �����ͷ� �پ��� ��ü�� ����Ŵ
    Animal* myAnimal[] = 
    {
        new Dog(),
        new Cat(),
        new Cow()
    };

    // �迭�� �ݺ������� ��ȸ�ϸ� �� ������ �Ҹ��� ���
    for (int i = 0; i < 3; i++) 
    {
        myAnimal[i]->makeSound();
    }

    // �޸� ����
    for (int i = 0; i < 3; i++) 
    {
        delete myAnimal[i];
    }

    Zoo myZoo; // Zoo ��ü ����

    // ���� ���� 10���� �߰�
    for (int i = 0; i < 10; i++) {
        myZoo.addAnimal(createRandomAnimal());
    }

    // ���� �ൿ ����
    cout << endl;
    cout << "�������� ���� �Ҹ�:" << endl;
    myZoo.performActions();

    return 0;
}