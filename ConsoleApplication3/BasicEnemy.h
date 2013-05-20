#pragma once
#include "GameObject.h"

class BasicEnemy :
	public GameObject
{
public:
	BasicEnemy(void);
	~BasicEnemy(void);

	sf::Texture basicEnemyTexture;

	using GameObject::update;
	virtual void update(float dt);
};
