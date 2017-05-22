#include <Arduboy.h>
#include <string.h>
#include "GameObject.h"

GameObject::GameObject()
{
  setActive(true);
}

float GameObject::getX() { return x; }
float GameObject::getY() { return y; }
void GameObject::setX(float _x) { x = _x; }
void GameObject::setY(float _y) { y = _y; }

bool GameObject::isActive()
{
  return active_flag;
}

void GameObject::setActive(bool flag)
{
  active_flag = flag;
}
