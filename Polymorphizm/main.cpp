#include <iostream>

using namespace std;

class Enemy{
public:
    int attackPower;
     void setAttackPower(int a){
        attackPower = a;
    }
private:

protected:

};

class Ninja: public Enemy{
public:
    void attack(){
        cout << "Ninja attack " << attackPower << endl;
    }
};


class Monster: public Enemy{
public:
    void attack(){
        cout << "Monster attack " << attackPower << endl;
    }
};

int main(){
    Ninja ninja;
    Monster monster;

    Enemy* enemyOne = &ninja;
    Enemy* enemyTwo = &monster;

    enemyOne->setAttackPower(22); // using pointer is faster
    enemyTwo->setAttackPower(50);

    // it will also work
    //ninja.setAttackPower(10);
    //smonster.setAttackPower(15);

    ninja.attack();
    monster.attack();

    return 0;
}
