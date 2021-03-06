#include "MyComponent.h"


MyComponent::MyComponent() : IComponent()
{

}

MyComponent::~MyComponent()
{

}

void MyComponent::Init(XmlNode& data)
{
	IComponent::Init(data);

	_Platform->LogString("In MyComponent::Init\n");
}

void MyComponent::OnStart()
{
	IComponent::OnStart();

	_Platform->LogString("In MyComponent::Init\n");
	RegisterCallback(eUpdate, DELEGATE(MyComponent, Update, this));
}

void MyComponent::Update()
{
	static int i = 0;
}