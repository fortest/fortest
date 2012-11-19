#pragma once

template<typename T>
struct A
{
	static T a;
	static T getA();
};

template<typename T> 
T A<T>::a = 5;
template<typename T> 
T A<T>::getA()
{
	return a;
}

