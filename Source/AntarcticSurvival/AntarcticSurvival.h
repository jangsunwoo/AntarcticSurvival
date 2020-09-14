// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
/// - �𸮾� ������Ʈ�� ������ �� �ִ� �ּ� ��ɸ� ����� ����Դϴ�.

#include "EngineMinimal.h"

// Native C++ �� �ٸ��� Unreal C++ �� ���ü��� �ý���(������Ƽ �ý���)�� �����մϴ�.
/// - ���÷���
/// - ���α׷��� ���� �ð��� �ڱ� �ڽ��� ������ �� �ִ� ���
/// - �𸮾󿡼��� ��ü������ class, structure, method, field, enumType �� ���õ� ��������
///   �����̳� �����ϴ� �ý����� ����Ǿ� ������, �̷��� ���÷����� Property System �̶�� �մϴ�.

// ����� �� �ִ� ��ũ�� ����
/// - UENUM(), UCLASS(), USTRUCT(), UFUNCTION(), UPROPERTY()

// ����� Property System �� �����ϴ� �������� ��ŷ ��Ű�� ���
/// - "filename.generated.h" �� include �� ���ϴܿ� ���Խ�ŵ�ϴ�.
///	  ex) #include "PlayerCharacter.generated.h"

// Unreal �� GC System
/// - UObject �������� ���̻� �ʿ䰡 ������ ��ü�� �������ִ� �ý����Դϴ�.
/// - �޸𸮸� �ڵ����� �������ֱ� ������ �������� ���� �޸𸮿� ���� �޸� ����
///   ���� ������ ������ �� �ֽ��ϴ�.

// UObject (�𸮾� ������Ʈ)
/// - �𸮾� ������ ������ �޴� ��ü�� �ǹ��մϴ�.
/// - C++ ǥ���� �ƴϸ�, Unreal �� ��ü������ �����Ͽ� �����ϴ� �����ӿ�ũ�̹Ƿ�
///	  �Ϲ����� ������� ���� �� ������, UHT(Unreal Header Tool) �̶�� ���α׷��� ������ �޾ƾ��մϴ�.
/// - UHT : Unreal Object �� �����ϴ� �ڵ� ���� ��

// UObjcet �԰ݿ� �°� �ۼ��Ͽ� UHT �� ������ �޴� ���
/// - filename.generated.h include
/// - ��ũ�� �ۼ� ( ex : UCLASS() )
/// - UOBJECT ���λ� �ۼ�
///   U, A, F ���...
/// - UObject �� UObject �� ������� �δ� Ŭ������ ����մϴ�.
/// - GNERATED_BODY(), GENERATED_UCLASS_BODY()... �ۼ�

// C++ ��ü�� �𸮾� ������Ʈ�� �Ǹ� ���Ǵ� ���
/// - Ŭ���� �⺻ ��ü (Class Defalut Object) : ��ü�� �ʱ� ���� ��ü������ �����մϴ�.
/// - ���÷��� : ��Ÿ���� ��ü�� ������ �ǽð����� ��ȸ�� �� �ֽ��ϴ�.
/// - ������ �÷��� (GC) : �������� ���� ��ü�� �����մϴ�.
/// - ����ȭ (Serialization) : ��ü�� �Ӽ� ������ ��°�� �����Ͽ� �ε��մϴ�.
/// - �븮�� (Delegate) : �Լ��� ��� ȿ�������� �����ϰ� ȣ���� �� �ֽ��ϴ�.
/// - Editor Intergraion : Unreal Editor Interface �� ���Ͽ� ���� ������ �� �ֽ��ϴ�.

// Unreal C++ ���� ����ϴ� �ڷ���
/// int8    : ����
/// int16   : ����
/// int32   : ����
/// int64   : ����
/// uint8   : ����
/// uint16  : ����
/// uint32  : ����
/// uint64  : ����
/// TCHAR   : ����
/// FString : �Ϲ����� ���ڿ��� ������ �� �ִ� Ÿ��
/// FName   : ��� ��ü�� �̸��� ���Ǵ� Ÿ��
///			- ��ҹ��ڸ� �������� �ʽ��ϴ�.
/// Ftext   : ����ȭ ���� �ؽ�Ʈ�� ���Ǵ� Ÿ���Դϴ�.
///			- ���� UI �� ǥ�õǴ� ���ڿ��� ���Ǹ�,
///			- ����ڿ��� �ٸ� ���� ������ �� �ֵ��� �մϴ�.

// ���ڿ� ��ȯ
/// - FName to FString : FNameInstance.ToString();
/// - FName to FText : Ftext::FromName(FNameInstance);
/// - FString to FName : FName(*FStringInstace)
///  - ��ҹ��ڸ� ������ �� ���Ե�
/// - FString to FText : FText::FromString(FStringInstance);
///  - ��ȯ �� �ڵ� ����ȭ �������� ���� �� ����
/// - FText to FString : FTextInstance.ToString()
///  - �Ϻ� ���� ���������� ��ȯ���� ���� �� ����
/// - FText to FName : FName(*FTextInstance.ToString());
///  - �Ϻ� ���� ���������� ��ȯ���� ���� �� ����
///  - ��ҹ��ڸ� ������ �� ���Ե�

// Unreal Project Files...
/// �������Ѿ� �ϴ� ���� / ����
/// - ~~~.uproject : �𸮾� ������ ������ ������Ʈ�� ���� ������ �����ϰ� �ִ� json ����
/// - Config : ������Ʈ ȯ�� ���� ���ϵ��� ��� �ִ� ����
/// - Plugin : ������Ʈ���� ����ϰ��� �ϴ� �ܺ� �÷����ε��� ��� ���� ����
/// - Sourece : ������

/// ���� ���ѵ� �Ǵ� ���� / ����
/// - ~~~.sin : Visual Studio ����
/// - .vs	  : Visual Studio �ΰ� ���� ����
/// - Binaries : C++ �ڵ� ������ ������� ����Ǵ� ����
/// - Interediate : ������Ʈ ������ ���� �ӽ� ���ϵ��� �����ϴ� ����
/// - Saved : ������Ʈ ������ ���� �ӽ� ���ϵ鿡 ���� ������ ��� ����
/// - ������ �� ���������� ������Ʈ�� ���� ���
///		- uproject ���� ��Ŭ��
///		- Generated Visual Project Files Ŭ��
///		- ~~~.sin ���� ���� Ŭ��
///		- ����ϴ� ������Ʈ�� ���� ������Ʈ�� ����
///		- ���� : Ctrl + Shift + B
///		- ������ ���� : Ctrl + F5