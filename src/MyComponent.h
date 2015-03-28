#pragma once

#include "IComponent.h"

class MyComponent : public IComponent
{
private:

public:
	MyComponent();

	~MyComponent();

	virtual void Init(XmlNode& data);

	virtual void OnStart();

	void Update();

	static ComponentRegister<MyComponent> reg;
};