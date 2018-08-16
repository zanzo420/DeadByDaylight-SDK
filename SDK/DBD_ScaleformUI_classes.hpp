#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_ScaleformUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScaleformUI.GFxEngine
// 0x0018 (0x0040 - 0x0028)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x0028(0x0010) (ZeroConstructor)
	int                                                RefCount;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScaleformUI.GFxEngine");
		return ptr;
	}

};


// Class ScaleformUI.GFxObject
// 0x0030 (0x0058 - 0x0028)
class UGFxObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScaleformUI.GFxObject");
		return ptr;
	}


	void SetVisible(bool bVisible);
	void SetScale(float XScale, float YScale);
	void SetPosition(float X, float Y);
	void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input);
	void SetMemberValue(const class FString& MemberName, const struct FASValue& Input);
	void SetDisplayTransform(const struct FTransform& DisplayTransform);
	void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo);
	void SetColorTransform(const struct FASColorTransform& UnrealColorTransform);
	struct FASValue Invoke(const class FString& FunctionName, TArray<struct FASValue> Params);
	void GotoAndStopI(int FrameNumber);
	void GotoAndStop(const class FString& FrameString);
	void GotoAndPlayI(int FrameNumber);
	void GotoAndPlay(const class FString& FrameString);
	bool GetVisible();
	bool GetScale(float* XScale, float* YScale);
	bool GetPosition(float* X, float* Y);
	TArray<struct FASValue> GetMemberValueArray(const class FString& MemberName);
	struct FASValue GetMemberValue(const class FString& MemberName);
	struct FTransform GetDisplayTransform();
	struct FASDisplayInfo GetDisplayInfo();
	struct FASColorTransform GetColorTransform();
};


// Class ScaleformUI.GFxMoviePlayer
// 0x01B0 (0x01D8 - 0x0028)
class UGFxMoviePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class FString                                      SwfAssetName;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UGFxObject*                                  Root;                                                     // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDisplayWithHudOff : 1;                                   // 0x0048(0x0001) (Edit)
	unsigned char                                      bEnableGammaCorrection : 1;                               // 0x0048(0x0001) (Edit)
	unsigned char                                      bAllowInput : 1;                                          // 0x0048(0x0001) (Edit, EditConst)
	unsigned char                                      bAllowFocus : 1;                                          // 0x0048(0x0001) (Edit, EditConst)
	unsigned char                                      bCloseOnLevelChange : 1;                                  // 0x0048(0x0001) (Edit)
	unsigned char                                      bOnlyOwnerFocusable : 1;                                  // 0x0048(0x0001) (Edit)
	unsigned char                                      bDiscardNonOwnerInput : 1;                                // 0x0048(0x0001) (Edit)
	unsigned char                                      bCaptureKeyboardInput : 1;                                // 0x0048(0x0001) (Edit)
	unsigned char                                      bCaptureMouseInput : 1;                                   // 0x0049(0x0001) (Edit)
	unsigned char                                      bCaptureGamepadInput : 1;                                 // 0x0049(0x0001) (Edit)
	unsigned char                                      bCaptureTouchInput : 1;                                   // 0x0049(0x0001) (Edit)
	unsigned char                                      bIsSplitscreenLayoutModified : 1;                         // 0x0049(0x0001) (Edit)
	unsigned char                                      bShowDefaultMouseCursor : 1;                              // 0x0049(0x0001) (Edit)
	unsigned char                                      bBlurLesserMovies : 1;                                    // 0x0049(0x0001) (Edit)
	unsigned char                                      bHideLesserMovies : 1;                                    // 0x0049(0x0001) (Edit)
	unsigned char                                      bIsPriorityBlurred : 1;                                   // 0x0049(0x0001) (Edit)
	unsigned char                                      bIsPriorityHidden : 1;                                    // 0x004A(0x0001) (Edit)
	unsigned char                                      bIgnoreVisibilityEffect : 1;                              // 0x004A(0x0001) (Edit)
	unsigned char                                      bIgnoreBlurEffect : 1;                                    // 0x004A(0x0001) (Edit)
	unsigned char                                      bRefreshed : 1;                                           // 0x004A(0x0001) (Edit)
	unsigned char                                      bPerformHitTest : 1;                                      // 0x004A(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	TEnumAsByte<EGFxHitTestType>                       HitTestType;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     ExternalInterface;                                        // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FKey>                                CaptureKeys;                                              // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                FocusIgnoreKeys;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x0080(0x0010) (ZeroConstructor)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x0098(0x0010) (ZeroConstructor)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFsCommand;                                              // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartCommand;                                           // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseCommand;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTickCommand;                                            // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGainedCommand;                                     // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusLostCommand;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xB8];                                      // 0x0110(0x00B8) MISSED OFFSET
	TArray<class UGFxObject*>                          CachedMovieClipsArray;                                    // 0x01C8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScaleformUI.GFxMoviePlayer");
		return ptr;
	}


	bool Start(bool bRefresh);
	void SetVisibility(const class FString& MovieClipName, bool bVisible);
	void SetViewScaleMode(TEnumAsByte<EGFxScaleMode> ScaleMode);
	void SetViewport(int X, int Y, int Width, int Height);
	void SetView3D(const struct FTransform& ViewTransform);
	void SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value);
	void SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value);
	void SetTimingMode(TEnumAsByte<EGFxTimingMode> TimingMode);
	void SetScale(const class FString& MovieClipName, float XScale, float YScale);
	void SetPosition(const class FString& MovieClipName, float X, float Y);
	void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform);
	void SetPause(bool bPausePlayback);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetFocusIgnoreKeys(TArray<struct FKey> Keys);
	bool SetExternalTexture(const class FString& Resource, class UTexture* Texture);
	void SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform);
	void SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info);
	void SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform);
	void SetCaptureKeys(TArray<struct FKey> Keys);
	void SetAlignment(TEnumAsByte<EGFxAlign> Align);
	void ReceiveGFxCommand(const class FString& Command, const class FString& Arguments);
	class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
	void OnTick(float DeltaTime);
	void OnStart();
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void OnClose();
	bool LoadAndStart(const class FString& InSwfAssetName, bool bRefresh);
	struct FASValue Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params);
	void GotoAndStopI(const class FString& MovieClipName, int Frame);
	void GotoAndStop(const class FString& MovieClipName, const class FString& Frame);
	void GotoAndPlayI(const class FString& MovieClipName, int Frame);
	void GotoAndPlay(const class FString& MovieClipName, const class FString& Frame);
	bool GetVisibility(const class FString& MovieClipName);
	struct FTransform GetView3D();
	TArray<struct FASValue> GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName);
	struct FASValue GetVariableValue(const class FString& MovieClipName, const class FString& MemberName);
	bool GetScale(const class FString& MovieClipName, float* XScale, float* YScale);
	bool GetPosition(const class FString& MovieClipName, float* X, float* Y);
	struct FASPerspectiveTransform GetPerspective3D();
	class UGFxObject* GetMovieClip(const class FString& MovieClipName);
	struct FTransform GetDisplayTransform(const class FString& MovieClipName);
	struct FASDisplayInfo GetDisplayInfo(const class FString& MovieClipName);
	struct FASColorTransform GetColorTransform(const class FString& MovieClipName);
	void Close(bool Unload);
};


// Class ScaleformUI.ScaleformBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScaleformUI.ScaleformBlueprintLibrary");
		return ptr;
	}


	class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
	struct FASValue STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName);
	struct FASValue STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params);
	class UGFxObject* STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath);
	class UGFxObject* STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName);
	class UGFxObject* STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName);
	void STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer);
};


// Class ScaleformUI.SwfMovie
// 0x00A0 (0x00C8 - 0x0028)
class USwfMovie : public UObject
{
public:
	unsigned char                                      bUseGFxExport : 1;                                        // 0x0028(0x0001) (Edit)
	unsigned char                                      bOptimizeForMobiles : 1;                                  // 0x0028(0x0001) (Edit)
	unsigned char                                      bSetSRGBOnImportedTextures : 1;                           // 0x0028(0x0001) (Edit)
	unsigned char                                      bPackTextures : 1;                                        // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                PackTextureSize;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceSquarePacking : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class FString                                      TextureFormat;                                            // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bReplaceImages : 1;                                       // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class FString                                      SourceFile;                                               // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class FString>                              FontMappings;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	class FString                                      SourceFileTimestamp;                                      // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst)
	uint64_t                                           ImportTimeStamp;                                          // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<unsigned char>                              RawData;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              ReferencedAssetNames;                                     // 0x0098(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             References;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UObject*>                             UserReferences;                                           // 0x00B8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScaleformUI.SwfMovie");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
