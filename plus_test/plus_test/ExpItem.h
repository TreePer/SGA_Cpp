#pragma once
#include "Object.h"
class Object;
class ExpItem : public Object {
private:
	int EXP;
	Object* pPlayer;

public:
	ExpItem();
	ExpItem(Transform _Info) : Object(_Info) {};
	virtual ~ExpItem();

	virtual Object* Start(string _Key) override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;

	int GetExp() { return EXP; }

	virtual Object* Clone()override { return new ExpItem(*this); }
};