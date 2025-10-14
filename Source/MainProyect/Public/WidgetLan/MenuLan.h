// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuLan.generated.h"

class UEditableTextBox;
class UButton;
/**
 * 
 */
UCLASS()
class MAINPROYECT_API UMenuLan : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeOnInitialized() override;
private:
	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<UButton> Button_Host;
	
	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<UButton> Button_Join;

	UPROPERTY(Meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_IPtoJoin;
	
	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> World_LanWorld;

	UFUNCTION()
	void OnClicked_Host();

	UFUNCTION()	
	void OnClicked_Join();
	
	
};
