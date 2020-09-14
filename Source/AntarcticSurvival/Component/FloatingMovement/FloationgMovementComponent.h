// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AntarcticSurvival.h"
#include "Components/ActorComponent.h"
#include "FloationgMovementComponent.generated.h"
/// - UHT �� ���� �ڵ����� �����Ǵ� �ΰ�����
/// - ����� include �� ���� �ϴܿ� �ۼ��մϴ�.

// UCLASS()
/// - �ش� Ŭ������ UOject ���� �����մϴ�.

// ANTARCTICSUVIVAL_API : �ܺ� ��⿡�� ���� ���θ� ���մϴ�.

// UFloationgMovementComponent
/// - Ŭ���� �̸�
/// - U : UObject ������ Ŭ������ ���˴ϴ�.
/// - F	: �Ϲ� Ŭ���� / ����ü�� ���� ���λ��Դϴ�.
/// - A	: Actor Ŭ������ ��� �޴� Ŭ������ ���˴ϴ�.
/// - I	: Unreal Interface Class �� ���˴ϴ�.
/// - E	: enum, enumclass



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANTARCTICSURVIVAL_API UFloationgMovementComponent : public UActorComponent
{
	GENERATED_BODY()
/// - �׻� Ŭ���� ù�ٿ� �ۼ��Ǿ���ϸ�
///   Ŭ������ ������ �ʿ��� ������ �����ϵ��� �մϴ�.

private :
	// EditAnyWhere : �������� ������ â���� ������ �������� �ǹ��մϴ�.
	// VisibleAnywhere : �������� ������ â���� �б� �������� ���˴ϴ�.
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float FloatingSpeed;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float FloatingValue;

	// ��� �������� ������ ��ó�� ǥ���� �������� ��Ÿ���ϴ�.
	float StartTime;

	// ������ �ʱ� ��ġ�� ������ ����
	FVector ActorBeginLocation;

public:	
	// �ش� Ŭ������ �⺻ �Ӽ��� �����մϴ�.
	UFloationgMovementComponent();

protected:
	// ������ ���۵� ���� �����Ǿ��� ��� �ѹ� ȣ��˴ϴ�.
	virtual void BeginPlay() override;

public:	
	// �� �����Ӹ��� ȣ�� �˴ϴ�.
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
