#include <iostream>
#include <vector>
#include <bitset>

class Observer;

// Subject 클래스 선언
class Subject {
private:
    std::vector<Observer*> observers;
    int state;

public:
    int getState() {
        return state;
    }

    void setState(int state) {
        this->state = state;
        notifyAllObservers();
    }

    void attach(Observer* observer) {
        observers.push_back(observer);
    }

    void notifyAllObservers();
};

// Observer 클래스 선언
class Observer {
protected:
    Subject* subject;
public:
    Observer(Subject* subject) {
        this->subject = subject;
        subject->attach(this);
    }

    virtual void update() = 0; // 순수 가상 함수
};

// Subject의 상태 변화를 알리는 메서드 정의
void Subject::notifyAllObservers() {
    for (auto observer : observers) {
        observer->update();
    }
}

// BinaryObserver 클래스
class BinaryObserver : public Observer {
public:
    BinaryObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Binary String: " << std::bitset<8>(subject->getState()) << std::endl;
    }
};

// HexObserver 클래스
class HexObserver : public Observer {
public:
    HexObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Hex String: " << std::hex << subject->getState() << std::endl;
    }
};

// OctalObserver 클래스
class OctalObserver : public Observer {
public:
    OctalObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Octal String: " << std::oct << subject->getState() << std::endl;
    }
};

// main 함수
int main() {
    Subject* subject = new Subject();

    // 옵저버들을 추가
    new HexObserver(subject);
    new OctalObserver(subject);
    new BinaryObserver(subject);

    std::cout << "First state change: 15" << std::endl;
    subject->setState(15);  // 상태 변경 및 옵저버들에게 알림

    std::cout << "Second state change: 10" << std::endl;
    subject->setState(10);  // 상태 변경 및 옵저버들에게 알림

    // 메모리 해제
    delete subject;
    return 0;
}