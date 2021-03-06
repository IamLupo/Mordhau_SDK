#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C
// 0x0229 (0x0A39 - 0x0810)
class UBP_MordhauGameInstance_C : public UMordhauGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	class UBP_TextInputDialog_C*                       PasswordDialog;                                           // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_InformationDialog_C*                     NetworkErrorDialog;                                       // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_InformationDialog_C*                     JoiningDialog;                                            // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JoinDelay;                                                // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	struct FTimerHandle                                JoinDelayTimer;                                           // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FServerSearchResult                         SessionToJoin;                                            // 0x0840(0x01F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WantsBRRequeue;                                           // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameInstance.BP_MordhauGameInstance_C");
		return ptr;
	}


	void GetJoiningText(bool bIsFull, struct FText* Text);
	void GetJoiningTextOld(const struct FServerSearchResult& Session, struct FText* Text);
	void OnFailure_DE35634440D2DAD6E6ED319296DF3606(const struct FServerSearchResult& Result);
	void OnSuccess_DE35634440D2DAD6E6ED319296DF3606(const struct FServerSearchResult& Result);
	void OnFailure_EC1BED794FBBC103AFC74FAD71124461();
	void OnSuccess_EC1BED794FBBC103AFC74FAD71124461();
	void OnFailure_E564B5624B7FDB47DBB2E08126C636D7();
	void OnSuccess_E564B5624B7FDB47DBB2E08126C636D7();
	void OnFailure_4643A5C64229EB24E86C05B71625BDC1();
	void OnFull_4643A5C64229EB24E86C05B71625BDC1();
	void OnSuccess_4643A5C64229EB24E86C05B71625BDC1();
	void OnPasswordOKClicked();
	void OnPasswordCancelClicked();
	void OnPasswordTextEntered(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method);
	void ShowPasswordDialog(struct FServerSearchResult* SearchResult);
	void ShowNetworkErrorDialog();
	void OnErrorOkClicked();
	void CreatePasswordDialog();
	void CreateNetworkErrorDialog();
	void CreateJoiningDialog();
	void ShowJoiningDialog(struct FServerSearchResult* SearchResult);
	void OnJoiningCancelClick();
	void Join();
	void ExecuteUbergraph_BP_MordhauGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
