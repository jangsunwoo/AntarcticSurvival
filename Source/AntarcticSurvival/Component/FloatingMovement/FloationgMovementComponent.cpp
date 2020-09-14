// Fill out your copyright notice in the Description page of Project Settings.


#include "FloationgMovementComponent.h"

// Sets default values for this component's properties
UFloationgMovementComponent::UFloationgMovementComponent()
{
	// 해당 컴포넌트에서 Tick 메서드 호출을 사용하도록 할 것인지를 설정합니다.
	PrimaryComponentTick.bCanEverTick = true;

	FloatingSpeed = 200.0f;
	FloatingValue = 40.0f;

	// 시작 시간대를 설정합니다.
	StartTime = FMath::FRandRange(0.0f, 1.0f);
	/// - FMath : 수학과 관련된 정적 함수들을 제공하는 구조체
	/// - FMath::FRandRange(float min, float max) : min 과 max 사이의 난수를 반환합니다

}



void UFloationgMovementComponent::BeginPlay()
{
	// 기반 클래스의 BeginPlay() 를 호출합니다.
	Super::BeginPlay();
	
}


void UFloationgMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

