#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 기본 클래스: Animal
class Animal 
{
public:
    virtual void makeSound() = 0; // 순수 가상 함수
    virtual ~Animal() {}         // 가상 소멸자
};

// 파생 클래스: Dog
class Dog : public Animal 
{
public:
    void makeSound() 
    {
        cout << "개: 왈! 왈!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal 
{
public:
    void makeSound() 
    {
        cout << "고양이: 미야옹! 미야옹!" << endl;
    }
};

// 파생 클래스: Cow
class Cow : public Animal 
{
public:
    void makeSound() 
    {
        cout << "소: 음머어어! 음머어어!" << endl;
    }
};

// Zoo 클래스
class Zoo
{
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
    int animalCount;     // 동물 개수

public:
    Zoo() : animalCount(0) // 생성자 초기화
    {
        for (int i = 0; i < 10; i++)
        {
            animals[i] = nullptr; // 포인터 배열 초기화
        }
    }

    void addAnimal(Animal* animal)
    {
        if (animalCount < 10)
        {
            animals[animalCount++] = animal; // 배열에 동물 추가
        }
        else
        {
            cout << "동물원이 가득 찼습니다!" << endl;
        }
    }

    void performActions()
    {
        for (int i = 0; i < animalCount; i++)
        {
            if (animals[i])
            {
                animals[i]->makeSound(); // 각 동물의 소리 출력
            }
        }
    }

    ~Zoo()
    {
        for (int i = 0; i < animalCount; i++)
        {
            if (animals[i])
            {
                delete animals[i]; // 메모리 해제
                animals[i] = nullptr; // 안전하게 nullptr로 재설정
            }
        }
    }
};


// 랜덤 동물을 생성하는 함수
Animal* createRandomAnimal() 
{
    int randomNum = rand() % 3; // 0, 1, 2 중 하나의 난수 생성
    switch (randomNum) 
    {
    case 0:
        return new Dog();
    case 1:
        return new Cat();
    case 2:
        return new Cow();
    default:
        return nullptr; // 기본적으로 nullptr 반환 (안전성 보장)
    }
}

int main() 
{
    srand(static_cast<unsigned>(time(0))); // 난수 초기화
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* myAnimal[] = 
    {
        new Dog(),
        new Cat(),
        new Cow()
    };

    // 배열을 반복문으로 순회하며 각 동물의 소리를 출력
    for (int i = 0; i < 3; i++) 
    {
        myAnimal[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < 3; i++) 
    {
        delete myAnimal[i];
    }

    Zoo myZoo; // Zoo 객체 생성

    // 랜덤 동물 10마리 추가
    for (int i = 0; i < 10; i++) {
        myZoo.addAnimal(createRandomAnimal());
    }

    // 동물 행동 수행
    cout << endl;
    cout << "동물원의 동물 소리:" << endl;
    myZoo.performActions();

    return 0;
}