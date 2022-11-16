// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactoryMethod.h"
#include "InventoryCapsuleActor.h"
#include "InventoryCapsuleDamageActor.h"
#include "InventoryCapsulePowerActor.h"
#include "Arcanoid1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID1_API AArcanoid1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
//	ABrick *Brick;
	void SpawnBrick();
	
//	AInventoryCapsuleActor* CapsuleActor;
	//void CreatorInventoryCapsuleActor(FString CategoryCapsule);
private:

	////The Builder Actor
	//UPROPERTY(VisibleAnywhere, Category = "Main")
	//	class AHotelLodgingBuilder* HotelBuilder;
	////The Engineer Actor
	//UPROPERTY(VisibleAnywhere, Category = "Main")
	//	class AArchitecturalEngineer* Engineer;

	UPROPERTY()
		class APaddle* Paddle;
	UPROPERTY()
		class AFactoryMethod* FactoryMethod;

	virtual void Tick(float DeltaSeconds) override;
public:
	AArcanoid1GameModeBase();

	template<typename T>
	T SpawnBrick();


};

template<typename T>
inline T AArcanoid1GameModeBase::SpawnBrick()
{
	return GetWorld()->SpawnActor<T>(FVector::ZeroVector, FRotator::ZeroRotator);
}
//template<class T>
//class Pila
//{
//private:
//	T* Datos;
//	//vector<T> datos;
//	int Cima;
//	const int numeroElementos;
//public:
//	Pila(int _numeroElementos) : numeroElementos(_numeroElementos) {
//		Datos = new T[numeroElementos];
//		Cima = -1;
//	}
//	~Pila() { delete[] Datos; }
//	// funcion Push
//	void Insertar(T c);
//	// funcion Pop
//	T Sacar();
//	bool Vacia();
//	bool Llena();
//	int j();
//};
//
//template<class T>
//void Pila<T>::Insertar(T elementoInsertar) {
//	if (!Llena()) {
//		Cima++;
//		Datos[Cima] = elementoInsertar;
//
//		cout << "Se insertado satisfactoriamente" << endl;
//	}
//	else {
//		cout << "No se pudo ingresar el elemento en la pila" << endl;
//	}
//}
//
//template<class T>
//T Pila<T>::Sacar() {
//	if (!Vacia()) {
//		T elementoSacar = Datos[Cima];
//		Cima--;
//		return elementoSacar;
//	}
//	else {
//		cout << "No se pudo sacar el elemento de la pila" << endl;
//	}
//}
//
//template<class T>
//bool Pila<T>::Vacia() {
//	if (Cima < 0) {
//		return true;
//	}
//	else
//		return false;
//}
//
//template<class T>
//bool Pila<T>::Llena() {
//	if (Cima < numeroElementos - 1) {
//		return false;
//	}
//	else {
//		return true;
//	}
//
//}
//
//template<class T>
//inline int Pila<T>::j()
//{
//	return 0;
//}
