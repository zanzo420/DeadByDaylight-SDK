#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_GameLiveStreaming_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}


	void STATIC_StopWebCam();
	void STATIC_StopBroadcastingGame();
	void STATIC_StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
	void STATIC_StartBroadcastingGame(const class FString& LoginUserName, const class FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage);
	bool STATIC_IsWebCamEnabled();
	bool STATIC_IsBroadcastingGame();
};


// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}


	class UQueryLiveStreamsCallbackProxy* STATIC_QueryLiveStreams(const class FString& GameName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
