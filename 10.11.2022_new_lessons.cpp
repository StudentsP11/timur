#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;
struct Point2D {
    int x; 
    int y;
};
struct Entity {
    Point2D Position;
};

void MoveLeft(Entity &entity) {
    entity.Position.x -= 1;

}


void MoveRight(Entity &entity) {
    entity.Position.x += 1;
}


void MoveUp(Entity &entity) {
    entity.Position.y += 1;

}


void MoveDown(Entity &entity) {
    entity.Position.y -= 1;

}

enum  {
	down,
	up,
	right,
	left,


};

template <typename move_key>

int main() {
	Entity.entity;


	switch (move_key)
	{
	case Moving::down:
		MoveDown(entity);
		break;

	case Moving::up:
		MoveUp(entity);
		break;

	case Moving::right:
		MoveRight(entity);
		break;

	case Moving::left:
		MoveLeft(entity);
		break;
	}


}


















//char button, extentent;
//if (_kbhit()) {
//    button = _getch();
//    int extendent = 0;
//    cout << "Нажата клавиша. Не расширенный символ\n";
//}
//else if (!_kbhit())
//{
//    extentent = _getch();
//    cout << "Нажата клавиша. Расширенный символ\n";
//}*/