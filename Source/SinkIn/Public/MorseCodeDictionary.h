#pragma once

#include "CoreMinimal.h"
#include "MorseCodeDictionary.generated.h"

USTRUCT(BlueprintType)
struct FDictionaryEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MorseCode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DecryptedValue;
};

UCLASS(Blueprintable)
class UMorseCodeDictionary : public UDataAsset
{

	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDictionaryEntry> AvailableMorseCodes;
};
