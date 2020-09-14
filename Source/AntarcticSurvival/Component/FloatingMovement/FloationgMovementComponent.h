// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AntarcticSurvival.h"
#include "Components/ActorComponent.h"
#include "FloationgMovementComponent.generated.h"
/// - UHT 에 의해 자동으로 생성되는 부가파일
/// - 헤더의 include 문 제일 하단에 작성합니다.

// UCLASS()
/// - 해당 클래스가 UOject 임을 선언합니다.

// ANTARCTICSUVIVAL_API : 외부 모듈에의 공개 여부를 뜻합니다.

// UFloationgMovementComponent
/// - 클래스 이름
/// - U : UObject 형태의 클래스에 사용됩니다.
/// - F	: 일반 클래스 / 구조체에 붙은 접두사입니다.
/// - A	: Actor 클래스를 상속 받는 클래스에 사용됩니다.
/// - I	: Unreal Interface Class 에 사용됩니다.
/// - E	: enum, enumclass



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANTARCTICSURVIVAL_API UFloationgMovementComponent : public UActorComponent
{
	GENERATED_BODY()
/// - 항상 클래스 첫줄에 작성되어야하며
///   클래스가 엔진에 필요한 인프라를 지원하도록 합니다.

private :
	// EditAnyWhere : 에디터의 디테일 창에서 편집이 가능함을 의미합니다.
	// VisibleAnywhere : 에디터의 디테일 창에서 읽기 전용으로 사용됩니다.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float FloatingSpeed;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float FloatingValue;

	// 어느 심저부터 움직인 것처럼 표현할 것인지를 나타냅니다.
	float StartTime;

	// 액터의 초기 위치를 저장할 변수
	FVector ActorBeginLocation;

public:	
	// 해당 클래스의 기본 속성을 정의합니다.
	UFloationgMovementComponent();

protected:
	// 게임이 시작될 때나 스폰되었을 경우 한번 호출됩니다.
	virtual void BeginPlay() override;

public:	
	// 매 프레임마다 호출 됩니다.
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
