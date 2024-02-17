

#include <iostream>

using namespace std;

class Client {
private:
    string name;
    double balance;

public:
    Client(const string& n, double b) : name(n), balance(b) {}

    string getName() const {
        return name;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }
};

class Bank {
private:
    static const int MAX = 50;
    Client* clients[MAX];
    int numClients;

public:
    Bank() : numClients(0) {
        for (int i = 0; i < MAX; ++i) {
            clients[i] = nullptr;
        }
    }

    void openAccount(const string& name, double deposit) {

        clients[numClients++] = new Client(name, deposit);
        cout << "Аккаунт открыт - " << name << ". " << "Депозит: " << deposit << endl;


    }

    void deposit(const string& clientName, double amount) {
        for (int i = 0; i < numClients; ++i) {
            if (clients[i]->getName() == clientName) {
                clients[i]->deposit(amount);
                cout << "Депозит аккаунта " << clientName << ": " << amount << "." << endl;
                return;
            }
        }
        cout << "Клиент не найден" << endl;
    }

    void withdraw(const string& clientName, double amount) {
        for (int i = 0; i < numClients; ++i) {
            if (clients[i]->getName() == clientName) {
                if (clients[i]->withdraw(amount)) {
                    cout << "Депозит аккаунта " << clientName << ": " << amount << ". " << " Успех!" << endl;
                }
                else {
                    cout << "Недостаточно средств для вывода на счет: " << clientName << endl;
                }
                return;
            }
        }
        cout << "Клиент не найден" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    Bank bank;
    bank.openAccount("Мария", 1000);
    bank.openAccount("Анна", 500);
    bank.deposit("Мария", 200);
    bank.withdraw("Анна", 1000);
    bank.withdraw("Мария", 1500);

    return 0;
}
