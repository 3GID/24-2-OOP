#include <iostream>
#include <vector>
#include <bitset>

class Observer;

// Subject Ŭ���� ����
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

// Observer Ŭ���� ����
class Observer {
protected:
    Subject* subject;
public:
    Observer(Subject* subject) {
        this->subject = subject;
        subject->attach(this);
    }

    virtual void update() = 0; // ���� ���� �Լ�
};

// Subject�� ���� ��ȭ�� �˸��� �޼��� ����
void Subject::notifyAllObservers() {
    for (auto observer : observers) {
        observer->update();
    }
}

// BinaryObserver Ŭ����
class BinaryObserver : public Observer {
public:
    BinaryObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Binary String: " << std::bitset<8>(subject->getState()) << std::endl;
    }
};

// HexObserver Ŭ����
class HexObserver : public Observer {
public:
    HexObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Hex String: " << std::hex << subject->getState() << std::endl;
    }
};

// OctalObserver Ŭ����
class OctalObserver : public Observer {
public:
    OctalObserver(Subject* subject) : Observer(subject) {}

    void update() override {
        std::cout << "Octal String: " << std::oct << subject->getState() << std::endl;
    }
};

// main �Լ�
int main() {
    Subject* subject = new Subject();

    // ���������� �߰�
    new HexObserver(subject);
    new OctalObserver(subject);
    new BinaryObserver(subject);

    std::cout << "First state change: 15" << std::endl;
    subject->setState(15);  // ���� ���� �� �������鿡�� �˸�

    std::cout << "Second state change: 10" << std::endl;
    subject->setState(10);  // ���� ���� �� �������鿡�� �˸�

    // �޸� ����
    delete subject;
    return 0;
}