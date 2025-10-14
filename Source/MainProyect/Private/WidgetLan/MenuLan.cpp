// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetLan/MenuLan.h"

#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"

void UMenuLan::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(true);
	
	Button_Host->OnClicked.AddDynamic(this,&UMenuLan::OnClicked_Host);
	Button_Join->OnClicked.AddDynamic(this,&UMenuLan::OnClicked_Join);	
	
}

void UMenuLan::OnClicked_Host()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	UGameplayStatics::OpenLevelBySoftObjectPtr(this,World_LanWorld,true,TEXT("listen"));
	
	
}

void UMenuLan::OnClicked_Join()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	const FString IP=EditableTextBox_IPtoJoin->GetText().ToString();

	UGameplayStatics::OpenLevel(this,*IP);
	
	
}
