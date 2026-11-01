#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
struct Func_2_t378757FF082427448349A80CC63683B50DA787D3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Factory_t844703F9D7E63368D827F3B7A4A673052FAA254D;
struct HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9;
struct HttpManager_t4F33452141FC681D8D903E3E2739983F7A507BA1;
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
struct HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
struct IWindowsIAP_t32095611EC229D2E83EB31631547E442501491F2;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MethodInfo_t;
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86;
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
struct ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F;
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29;
struct String_t;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
struct WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711;
struct WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5;
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
struct WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9;
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
struct WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB;
struct WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0;
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
struct Queue_t644DC21212BC432819522EDA395EB4562BE2CC47;
struct DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E;

IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Factory_Create_m5811130D2E8C8850CD96C00EEF68E9463399840D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpManager_VerifyServerCertificate_m900A8C2175F0E289006DBE80A253E1431E6D20AC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t80D0CB6008C23476AC9C5B091176470C194BDD45 
{
};
struct Factory_t844703F9D7E63368D827F3B7A4A673052FAA254D  : public RuntimeObject
{
};
struct HttpManager_t4F33452141FC681D8D903E3E2739983F7A507BA1  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AuthenticationLevel_tD91F6CE700057352B4F45FC290E35B9E936DECAF 
{
	int32_t ___value__;
};
struct DecompressionMethods_t427BA3F24A5ADDF1615651462C3C825FE8B77F02 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ____waitObject;
	WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711* ____callback;
	RuntimeObject* ____state;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ____finalEvent;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____cancelEvent;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____timeout;
	int32_t ____callsInProcess;
	bool ____executeOnlyOnce;
	bool ____unregistered;
};
struct SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08 
{
	int32_t ___value__;
};
struct TokenImpersonationLevel_t2DEE263354E7DBC241ED96A71C632A3FAB92013D 
{
	int32_t ___value__;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	intptr_t ___waitHandle;
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle;
	bool ___hasThreadAffinity;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle;
	void* ___safeWaitHandle;
	int32_t ___hasThreadAffinity;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle;
	void* ___safeWaitHandle;
	int32_t ___hasThreadAffinity;
};
struct WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0  : public RuntimeObject
{
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField;
	String_t* ___U3CpriceU3Ek__BackingField;
	String_t* ___U3CtitleU3Ek__BackingField;
	String_t* ___U3CdescriptionU3Ek__BackingField;
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CpriceDecimalU3Ek__BackingField;
	String_t* ___U3CreceiptU3Ek__BackingField;
	String_t* ___U3CtransactionIDU3Ek__BackingField;
	bool ___U3CconsumableU3Ek__BackingField;
};
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber;
	String_t* ___lazyIssuer;
	String_t* ___lazySubject;
	String_t* ___lazyKeyAlgorithm;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter;
};
struct NtlmAuthState_t86300FA34030B23F6485BD85BC196D899F5737A9 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	int32_t ___m_AuthenticationLevel;
	int32_t ___m_ImpersonationLevel;
};
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request;
	bool ___isProxy;
	bool ___isCompleted;
	int32_t ___ntlm_auth_state;
};
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_pinvoke
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request;
	int32_t ___isProxy;
	int32_t ___isCompleted;
	int32_t ___ntlm_auth_state;
};
struct AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshaled_com
{
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ___request;
	int32_t ___isProxy;
	int32_t ___isCompleted;
	int32_t ___ntlm_auth_state;
};
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9  : public WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B
{
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___requestUri;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___actualUri;
	bool ___hostChanged;
	bool ___allowAutoRedirect;
	bool ___allowBuffering;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___certificates;
	String_t* ___connectionGroup;
	bool ___haveContentLength;
	int64_t ___contentLength;
	HttpContinueDelegate_t174E5B124FF75DBAC627C6E41A0802A802EAE6D9* ___continueDelegate;
	CookieContainer_t54CCEBC3470E5D0699BB17928C171D7AFCA7614E* ___cookieContainer;
	RuntimeObject* ___credentials;
	bool ___haveResponse;
	bool ___requestSent;
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___webHeaders;
	bool ___keepAlive;
	int32_t ___maxAutoRedirect;
	String_t* ___mediaType;
	String_t* ___method;
	String_t* ___initialMethod;
	bool ___pipelined;
	bool ___preAuthenticate;
	bool ___usedPreAuth;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version;
	bool ___force_version;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___actualVersion;
	RuntimeObject* ___proxy;
	bool ___sendChunked;
	ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29* ___servicePoint;
	int32_t ___timeout;
	int32_t ___continueTimeout;
	WebRequestStream_t731AE4852452BAA73C240BDC7DCBA42ADAD2BAAB* ___writeStream;
	HttpWebResponse_tF287E6CE296D3B6912CDEFEDE8FBF5A27D70AE0A* ___webResponse;
	WebCompletionSource_tA2A9E04ED689218A1B2FAFCFD8F358CE4CBD30C5* ___responseTask;
	WebOperation_t32CC0FAFF5B575DB5E11E5C50A7D7542A70D74C9* ___currentOperation;
	int32_t ___aborted;
	bool ___gotRequestStream;
	int32_t ___redirects;
	bool ___expectContinue;
	bool ___getResponseCalled;
	RuntimeObject* ___locker;
	bool ___finished_reading;
	int32_t ___auto_decomp;
	int32_t ___readWriteTimeout;
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___tlsProvider;
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings;
	ServerCertValidationCallback_tC7A568060163FC6810AF9817F26F986C78CFC27F* ___certValidationCallback;
	bool ___hostHasPort;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___hostUri;
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___auth_state;
	AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32 ___proxy_auth_state;
	Func_2_t378757FF082427448349A80CC63683B50DA787D3* ___ResendContentFactory;
	bool ___U3CThrowOnErrorU3Ek__BackingField;
	bool ___unsafe_auth_blah;
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};
struct WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711  : public MulticastDelegate_t
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	intptr_t ___InvalidHandle;
};
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_StaticFields
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___s_PrefixList;
	RuntimeObject* ___s_InternalSyncObject;
	Queue_t644DC21212BC432819522EDA395EB4562BE2CC47* ___s_DefaultTimerQueue;
	DesignerWebRequestCreate_t75F62E4DEBF416E21EAF6FBB62E43ADB83A0753E* ___webRequestCreate;
	RuntimeObject* ___s_DefaultWebProxy;
	bool ___s_DefaultWebProxyInitialized;
};
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_StaticFields
{
	int32_t ___defaultMaxResponseHeadersLength;
	int32_t ___defaultMaximumErrorResponseLength;
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___defaultCachePolicy;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager_set_ServerCertificateValidationCallback_mF96AEDFB771DB862FB7F71AEFA29471C991B393A (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C (String_t* ___0_requestUriString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitOrTimerCallback__ctor_m846D9468BFEEFAC9C4F4E56FA63276A6620C7175 (WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86* ThreadPool_RegisterWaitForSingleObject_m40964AF3AA4AEE22D1CCB45CBC8C2C130CEB9441 (WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___0_waitObject, WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711* ___1_callBack, RuntimeObject* ___2_state, int32_t ___3_millisecondsTimeOutInterval, bool ___4_executeOnlyOnce, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mE497C87DD06A3DDF6F6C449B85CA249871C31187_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_mD961C93F69EB5EAD70AE91EA423AE2F40B9FE375_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m1BED52EE9E3D051AE2B87BF092611DBE08E0C8B9_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mCD8AACE162A0E66B407FADC3F6263C3389BC4144_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_mA3C1425A7794805A5367C86B50F717DFD48CD5D0_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m20DFCA5462428FA14E12A457B379FA98483A4C07_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m934A4B5C1D4640264D4DC7BC967F5799D2D47BEA_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m41C117FA0752726637A6CDE1F478D132A37194E2_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m6FCA6A52C7B3FEA5706FE31809AB2681126B3732_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, bool ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpManager_GetAsyncHttpWebData_mF9BA87E276260C630C7ABD52AE6D828299BF875D (HttpManager_t4F33452141FC681D8D903E3E2739983F7A507BA1* __this, String_t* ___0_httpAddress, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_asyncCompleate, Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* ___2_asyncTimeout, String_t* ___3_param, String_t* ___4_requestMothod, int32_t ___5_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpManager_VerifyServerCertificate_m900A8C2175F0E289006DBE80A253E1431E6D20AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_0 = (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367(L_0, __this, (intptr_t)((void*)HttpManager_VerifyServerCertificate_m900A8C2175F0E289006DBE80A253E1431E6D20AC_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		ServicePointManager_set_ServerCertificateValidationCallback_mF96AEDFB771DB862FB7F71AEFA29471C991B393A(L_0, NULL);
		String_t* L_1 = ___0_httpAddress;
		String_t* L_2 = ___3_param;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_3 = ___3_param;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B_il2cpp_TypeInfo_var);
		WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* L_5;
		L_5 = WebRequest_Create_mEA404E1E326B2790C70C40894101C6DB41DA8E6C(L_4, NULL);
		V_0 = ((HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9*)IsInstClass((RuntimeObject*)L_5, HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9_il2cpp_TypeInfo_var));
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_6 = V_0;
		String_t* L_7 = ___4_requestMothod;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(9, L_6, L_7);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_8 = V_0;
		int32_t L_9 = ___5_timeout;
		NullCheck(L_8);
		VirtualActionInvoker1< int32_t >::Invoke(17, L_8, L_9);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_10 = V_0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_11 = ___1_asyncCompleate;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_12, L_11, (intptr_t)((void*)Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_RuntimeMethod_var), NULL);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_13 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker2< RuntimeObject*, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(18, L_10, L_12, L_13);
		NullCheck(L_14);
		WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_15;
		L_15 = InterfaceFuncInvoker0< WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* >::Invoke(0, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_14);
		Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* L_16 = ___2_asyncTimeout;
		WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711* L_17 = (WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711*)il2cpp_codegen_object_new(WaitOrTimerCallback_t7F57455D2C211D4751694104BA7DD36A9AB51711_il2cpp_TypeInfo_var);
		WaitOrTimerCallback__ctor_m846D9468BFEEFAC9C4F4E56FA63276A6620C7175(L_17, L_16, (intptr_t)((void*)Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_RuntimeMethod_var), NULL);
		HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* L_18 = V_0;
		int32_t L_19 = ___5_timeout;
		RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86* L_20;
		L_20 = ThreadPool_RegisterWaitForSingleObject_m40964AF3AA4AEE22D1CCB45CBC8C2C130CEB9441(L_15, L_17, L_18, L_19, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpManager_VerifyServerCertificate_m900A8C2175F0E289006DBE80A253E1431E6D20AC (HttpManager_t4F33452141FC681D8D903E3E2739983F7A507BA1* __this, RuntimeObject* ___0_sender, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___1_certificate, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___2_chain, int32_t ___3_sslPolicyErrors, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpManager__ctor_m931AA8F04CCBFDFAD1F5A35B83007699D414ACF6 (HttpManager_t4F33452141FC681D8D903E3E2739983F7A507BA1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Factory_Create_m5811130D2E8C8850CD96C00EEF68E9463399840D (bool ___0_mocked, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Factory_Create_m5811130D2E8C8850CD96C00EEF68E9463399840D_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Factory__ctor_mF8A41E9CB92141D62DBE68523F98C966BA7933A5 (Factory_t844703F9D7E63368D827F3B7A4A673052FAA254D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_platformSpecificID_mFD1D47DF044C617805AE2D4B9C25514E0DF35116 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CplatformSpecificIDU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mE497C87DD06A3DDF6F6C449B85CA249871C31187 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CplatformSpecificIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_price_mD21A1FAEE7932C8E180149C9F7C3633BB4728202 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CpriceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_price_mD961C93F69EB5EAD70AE91EA423AE2F40B9FE375 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CpriceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_title_m7B9C44364924832601B15AFAB938D1A86E29A342 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CtitleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m1BED52EE9E3D051AE2B87BF092611DBE08E0C8B9 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CtitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_description_m73716EC721C79284C77DB9C0454C37B285B8EDB4 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdescriptionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mCD8AACE162A0E66B407FADC3F6263C3389BC4144 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdescriptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_ISOCurrencyCode_m26A919B99B43954429D43CF3BEEBACFB395F685D (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CISOCurrencyCodeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_mA3C1425A7794805A5367C86B50F717DFD48CD5D0 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WinProductDescription_get_priceDecimal_m9336A61B3E3335D532FE5B907DB6DB821E901D03 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CpriceDecimalU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m20DFCA5462428FA14E12A457B379FA98483A4C07 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		__this->___U3CpriceDecimalU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_receipt_m20D4DB83225C2468D2D5D814DAB3B58562F84C90 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CreceiptU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m934A4B5C1D4640264D4DC7BC967F5799D2D47BEA (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CreceiptU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_transactionID_m1ABC201C1B3F7523698B668805A532EE19B8E30A (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CtransactionIDU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m41C117FA0752726637A6CDE1F478D132A37194E2 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CtransactionIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinProductDescription_get_consumable_mC95BE3856A29B65D4A8C1892B9915CA5A7410CD8 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CconsumableU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m6FCA6A52C7B3FEA5706FE31809AB2681126B3732 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CconsumableU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m6931C97F7CDB1DDE58249827449221520CFE5FB4 (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_id, String_t* ___1_price, String_t* ___2_title, String_t* ___3_description, String_t* ___4_isoCode, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___5_priceD, String_t* ___6_receipt, String_t* ___7_transactionId, bool ___8_consumable, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		WinProductDescription_set_platformSpecificID_mE497C87DD06A3DDF6F6C449B85CA249871C31187_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_price;
		WinProductDescription_set_price_mD961C93F69EB5EAD70AE91EA423AE2F40B9FE375_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_title;
		WinProductDescription_set_title_m1BED52EE9E3D051AE2B87BF092611DBE08E0C8B9_inline(__this, L_2, NULL);
		String_t* L_3 = ___3_description;
		WinProductDescription_set_description_mCD8AACE162A0E66B407FADC3F6263C3389BC4144_inline(__this, L_3, NULL);
		String_t* L_4 = ___4_isoCode;
		WinProductDescription_set_ISOCurrencyCode_mA3C1425A7794805A5367C86B50F717DFD48CD5D0_inline(__this, L_4, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___5_priceD;
		WinProductDescription_set_priceDecimal_m20DFCA5462428FA14E12A457B379FA98483A4C07_inline(__this, L_5, NULL);
		String_t* L_6 = ___6_receipt;
		WinProductDescription_set_receipt_m934A4B5C1D4640264D4DC7BC967F5799D2D47BEA_inline(__this, L_6, NULL);
		String_t* L_7 = ___7_transactionId;
		WinProductDescription_set_transactionID_m41C117FA0752726637A6CDE1F478D132A37194E2_inline(__this, L_7, NULL);
		bool L_8 = ___8_consumable;
		WinProductDescription_set_consumable_m6FCA6A52C7B3FEA5706FE31809AB2681126B3732_inline(__this, L_8, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_mE497C87DD06A3DDF6F6C449B85CA249871C31187_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CplatformSpecificIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_mD961C93F69EB5EAD70AE91EA423AE2F40B9FE375_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CpriceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m1BED52EE9E3D051AE2B87BF092611DBE08E0C8B9_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CtitleU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_mCD8AACE162A0E66B407FADC3F6263C3389BC4144_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdescriptionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_mA3C1425A7794805A5367C86B50F717DFD48CD5D0_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_m20DFCA5462428FA14E12A457B379FA98483A4C07_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		__this->___U3CpriceDecimalU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m934A4B5C1D4640264D4DC7BC967F5799D2D47BEA_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CreceiptU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_m41C117FA0752726637A6CDE1F478D132A37194E2_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CtransactionIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m6FCA6A52C7B3FEA5706FE31809AB2681126B3732_inline (WinProductDescription_t463E3758D3B38D7ED2E99A4DFBA08EFFAEB7E9C0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CconsumableU3Ek__BackingField = L_0;
		return;
	}
}
