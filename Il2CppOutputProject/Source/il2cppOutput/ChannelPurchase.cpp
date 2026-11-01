#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D;
struct MethodInfo_t;
struct PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99;
struct PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5;
struct PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0;
struct ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21;
struct U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D;
struct U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D;
struct U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B;
struct U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1;
struct U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral010047133EF47EABB090B874AAD0BC6580635F08;
IL2CPP_EXTERN_C String_t* _stringLiteral0857C01FDAB81F2D043EF8EDCAFF632074E6DF92;
IL2CPP_EXTERN_C String_t* _stringLiteral1B37328B98E3B68A70A3BF5EBBAA729CC56238A0;
IL2CPP_EXTERN_C String_t* _stringLiteral200CA907545A935B48A8BA7A906C00A76FAB1A47;
IL2CPP_EXTERN_C String_t* _stringLiteral239957B1443E67257CCBBDE8882DF1FAB74AE19A;
IL2CPP_EXTERN_C String_t* _stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407;
IL2CPP_EXTERN_C String_t* _stringLiteral5D4792D9BC512CB8EDC6F1632D7E984DF09E1A7B;
IL2CPP_EXTERN_C String_t* _stringLiteral6DFF284CA4538CB7881A6FE0C154715560AC2A3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA691CAF5AF1D1EE29917BD9B32B7E0A19C56D721;
IL2CPP_EXTERN_C String_t* _stringLiteralB055173B7A8D70DC08A1E6B4201BC4248D1A782A;
IL2CPP_EXTERN_C String_t* _stringLiteralB599F7943E63846FF6287E29254EF871F7C11DD9;
IL2CPP_EXTERN_C String_t* _stringLiteralD277996E89A0CA1FDB4ECAF3776C92F57A1426D5;
IL2CPP_EXTERN_C String_t* _stringLiteralD29437EB04FE11E65A278735DE68C3CE2A4935B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA9DBCD385845F338DB7B740114C86B3F544BAF3;
IL2CPP_EXTERN_C String_t* _stringLiteralE0432559822E960F7A08407FF0F7CD0A4DAE9A19;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133;
IL2CPP_EXTERN_C String_t* _stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__0_m9F38B3A4A921291A4D4C44CFDEB178E52DA4633C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__2_m39050021ED03B012078C37827BE91C56FBC06B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_1_U3ConPurchaseFinishedU3Eb__1_mEC29B0574021CA2EE2B6C04DC8ACC057E848BE34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3ConReceiptValidatedU3Eb__0_mB7D3966C00EF0D4B2C3164216D6060A2AE5A9E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_1_U3ConReceiptValidatedU3Eb__1_m50762A2A99E492258A63106547E5FA16828E2C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__0_m48D419B71C8A055EBD054ABD58B404EE21092C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__1_m1EF1A3CE23CF7881F6FCC8BF3A9711D1B3203D7B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t44378FAD359EEA77DCCF6769AF02C103FBEC1BAE 
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5  : public RuntimeObject
{
	String_t* ___U3CproductCodeU3Ek__BackingField;
	String_t* ___U3CgameOrderIdU3Ek__BackingField;
	String_t* ___U3CorderQueryTokenU3Ek__BackingField;
	String_t* ___U3CdeveloperPayloadU3Ek__BackingField;
};
struct PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0  : public RuntimeObject
{
};
struct ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E  : public RuntimeObject
{
	String_t* ___U3CgameOrderIdU3Ek__BackingField;
	String_t* ___U3CsignDataU3Ek__BackingField;
	String_t* ___U3CsignatureU3Ek__BackingField;
};
struct ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006  : public RuntimeObject
{
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
struct U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21  : public RuntimeObject
{
	PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* ___purchaseInfo;
	int32_t ___resultCode;
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* ___U3CU3E4__this;
};
struct U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D  : public RuntimeObject
{
	String_t* ___productCode;
	U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* ___CSU24U3CU3E8__locals1;
};
struct U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D  : public RuntimeObject
{
	ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* ___receiptInfo;
	U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* ___CSU24U3CU3E8__locals1;
};
struct U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B  : public RuntimeObject
{
	String_t* ___orderId;
	U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* ___CSU24U3CU3E8__locals2;
};
struct U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1  : public RuntimeObject
{
	int32_t ___resultCode;
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* ___U3CU3E4__this;
};
struct U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB  : public RuntimeObject
{
	String_t* ___gameOrderId;
	int32_t ___resultCode;
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* ___U3CU3E4__this;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
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
struct PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	RuntimeObject* ___purchaseListener;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___serviceClass;
};
struct ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_StaticFields
{
	int32_t ___SDK_INIT_SUCCESS;
	int32_t ___SDK_INIT_ERROR;
	int32_t ___SDK_NOT_INIT;
	int32_t ___SDK_LOGIN_SUCCESS;
	int32_t ___SDK_LOGIN_CANCEL;
	int32_t ___SDK_LOGIN_FAILED;
	int32_t ___SDK_NOT_LOGIN;
	int32_t ___SDK_PURCHASE_SUCCESS;
	int32_t ___SDK_PURCHASE_FAILED;
	int32_t ___SDK_PURCHASE_CANCEL;
	int32_t ___SDK_PURCHASE_REPEAT;
	int32_t ___SDK_RECEIPT_VALIDATE_SUCCESS;
	int32_t ___SDK_RECEIPT_VALIDATE_FAILED;
	int32_t ___SDK_RECEIPT_VALIDATE_ERROR;
	int32_t ___SDK_CONFIRM_PURCHASE_SUCCESS;
	int32_t ___SDK_CONFIRM_PURCHASE_FAILED;
	int32_t ___SDK_CONFIRM_PURCHASE_ERROR;
	int32_t ___SDK_SERVER_INVALID;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, RuntimeObject* ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseForwardCallback__ctor_mBC85E7E661F043A3A90CFF339EDAD5708AC4EE78 (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* __this, RuntimeObject* ___0_purchaseListener, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, String_t* ___1_val, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___0_fieldName, ___1_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m21E2EADD34F091F2CA39CE8707396AC4AF1ADDB2 (U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo__ctor_mCF85685D9335448CD9909E0D9267BA9B1ACA4340 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) ;
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_productCode_m266C82792EF442EF0765D24A6DF7F6A586326156_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_gameOrderId_m83B94703A8EA6AF483B1C1A8F5C91106D60FE1E9_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_orderQueryToken_m3A61C4A608BCE1A64B2B0DA60E8A53E7C9E68AD1_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_developerPayload_m69C5ABA3441E3EE36FAC10565467AE7C79AF69DE_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_runnable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mB4521C865CE6C89DB871760DF7BDD555F64BB6A0 (U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mFCDD6240082F474A29F4E42375399B131080AE9E (U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1A13D13AC36E4C58CC80AF2B3AE235539B3C657A (U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiptInfo__ctor_m1A68AE3AAE93A594687661F64243FC591F2D1991 (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_gameOrderId_m9606E3FF2CC14038C797B4F5EA1CAC19751CBA1E_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_signData_mCD8C7C763389FD464C21C8AC7044F15FADE7DD50_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_signature_mD7F9FCC16ACD8D05BC90A60088EF73CC8CADD1BC_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_mBD8E6E062E49407C2FF24F909690F4CF1CCBC3E0 (U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF62A0F2ED8C3DACA07AED1F8FF923D521C00170A (U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_Purchase_m98DEB6D499009028177701CEF567C75328A9A82C (String_t* ___0_productCode, String_t* ___1_gameOrderId, RuntimeObject* ___2_listener, String_t* ___3_developerPayload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4792D9BC512CB8EDC6F1632D7E984DF09E1A7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB055173B7A8D70DC08A1E6B4201BC4248D1A782A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB599F7943E63846FF6287E29254EF871F7C11DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD277996E89A0CA1FDB4ECAF3776C92F57A1426D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0432559822E960F7A08407FF0F7CD0A4DAE9A19);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___2_listener;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99*)il2cpp_codegen_object_new(PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_mBC85E7E661F043A3A90CFF339EDAD5708AC4EE78(L_1, L_0, NULL);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteralE0432559822E960F7A08407FF0F7CD0A4DAE9A19, L_2, NULL);
		V_1 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_1;
		String_t* L_5 = ___0_productCode;
		NullCheck(L_4);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_4, _stringLiteral5D4792D9BC512CB8EDC6F1632D7E984DF09E1A7B, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		String_t* L_7 = ___1_gameOrderId;
		NullCheck(L_6);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_6, _stringLiteralD277996E89A0CA1FDB4ECAF3776C92F57A1426D5, L_7, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		String_t* L_8 = ___3_developerPayload;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		String_t* L_12 = ___3_developerPayload;
		NullCheck(L_11);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_11, _stringLiteralB599F7943E63846FF6287E29254EF871F7C11DD9, L_12, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
	}

IL_004f:
	{
		il2cpp_codegen_runtime_class_init_inline(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = ((PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var))->___serviceClass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		NullCheck(L_13);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_13, _stringLiteralB055173B7A8D70DC08A1E6B4201BC4248D1A782A, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_ValidateReceipt_m32770BAA4D4A319F46FFFFE927E7ACC5ADA090E7 (String_t* ___0_gameOrderId, RuntimeObject* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA691CAF5AF1D1EE29917BD9B32B7E0A19C56D721);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_listener;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99*)il2cpp_codegen_object_new(PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_mBC85E7E661F043A3A90CFF339EDAD5708AC4EE78(L_1, L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var))->___serviceClass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_gameOrderId;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteralA691CAF5AF1D1EE29917BD9B32B7E0A19C56D721, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_ConfirmPurchase_m697D3D32CA7ADA592D17771BD4281728FC60FFE4 (String_t* ___0_gameOrderId, RuntimeObject* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DFF284CA4538CB7881A6FE0C154715560AC2A3E);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_listener;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99*)il2cpp_codegen_object_new(PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_mBC85E7E661F043A3A90CFF339EDAD5708AC4EE78(L_1, L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var))->___serviceClass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_gameOrderId;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteral6DFF284CA4538CB7881A6FE0C154715560AC2A3E, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService__ctor_m86A20B196F68E5F5477142D747C8F780ADD0429F (PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService__cctor_m2CA68930922B244296EF6A2B59B08ED521DCE41F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0857C01FDAB81F2D043EF8EDCAFF632074E6DF92);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral0857C01FDAB81F2D043EF8EDCAFF632074E6DF92, NULL);
		((PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var))->___serviceClass = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t752B2EA9D85AE7C403233AF2F2FBAD669AD157E0_il2cpp_TypeInfo_var))->___serviceClass), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_productCode_m44823E345EE39861BD68026A7F842E96F23DA0BC (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CproductCodeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo_set_productCode_m266C82792EF442EF0765D24A6DF7F6A586326156 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CproductCodeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproductCodeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_gameOrderId_mFBE24F5FF114F401C16F9CE10027C1F258503517 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CgameOrderIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo_set_gameOrderId_m83B94703A8EA6AF483B1C1A8F5C91106D60FE1E9 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CgameOrderIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameOrderIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_orderQueryToken_mBA54757A14FF916895275361D2F86E492D5FA073 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CorderQueryTokenU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo_set_orderQueryToken_m3A61C4A608BCE1A64B2B0DA60E8A53E7C9E68AD1 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CorderQueryTokenU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CorderQueryTokenU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_developerPayload_m3152E2278B99A8C3FA5179ABFBEC7D19664088A9 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdeveloperPayloadU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo_set_developerPayload_m69C5ABA3441E3EE36FAC10565467AE7C79AF69DE (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdeveloperPayloadU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeveloperPayloadU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseInfo__ctor_mCF85685D9335448CD9909E0D9267BA9B1ACA4340 (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_gameOrderId_m5A7AD43883F6FDF649BB5375B2CF32B5B5394DAC (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CgameOrderIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiptInfo_set_gameOrderId_m9606E3FF2CC14038C797B4F5EA1CAC19751CBA1E (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CgameOrderIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameOrderIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signData_m1DAC1695A7EB3F2A54643238EC25FA26D1542A89 (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsignDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiptInfo_set_signData_mCD8C7C763389FD464C21C8AC7044F15FADE7DD50 (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsignDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signature_m3E90F5A9098413E1BEFC3D0A55C3FC5969B2012B (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsignatureU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiptInfo_set_signature_mD7F9FCC16ACD8D05BC90A60088EF73CC8CADD1BC (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsignatureU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignatureU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiptInfo__ctor_m1A68AE3AAE93A594687661F64243FC591F2D1991 (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseForwardCallback__ctor_mBC85E7E661F043A3A90CFF339EDAD5708AC4EE78 (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* __this, RuntimeObject* ___0_purchaseListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010047133EF47EABB090B874AAD0BC6580635F08);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral010047133EF47EABB090B874AAD0BC6580635F08, NULL);
		RuntimeObject* L_0 = ___0_purchaseListener;
		__this->___purchaseListener = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___purchaseListener), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseForwardCallback_onPurchaseFinished_m522E5E20519D9E605FE8729BA33DF23EE45E3209 (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* __this, int32_t ___0_resultCode, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_jo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__0_m9F38B3A4A921291A4D4C44CFDEB178E52DA4633C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__2_m39050021ED03B012078C37827BE91C56FBC06B3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_U3ConPurchaseFinishedU3Eb__1_mEC29B0574021CA2EE2B6C04DC8ACC057E848BE34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral239957B1443E67257CCBBDE8882DF1FAB74AE19A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD29437EB04FE11E65A278735DE68C3CE2A4935B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* V_5 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_0 = (U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m21E2EADD34F091F2CA39CE8707396AC4AF1ADDB2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_2 = V_0;
		int32_t L_3 = ___0_resultCode;
		NullCheck(L_2);
		L_2->___resultCode = L_3;
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_4 = V_0;
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_5 = (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5*)il2cpp_codegen_object_new(PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5_il2cpp_TypeInfo_var);
		PurchaseInfo__ctor_mCF85685D9335448CD9909E0D9267BA9B1ACA4340(L_5, NULL);
		NullCheck(L_4);
		L_4->___purchaseInfo = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___purchaseInfo), (void*)L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ___1_jo;
		V_1 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_8 = V_0;
		NullCheck(L_8);
		L_8->___purchaseInfo = (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___purchaseInfo), (void*)(PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5*)NULL);
		goto IL_00a9;
	}

IL_0033:
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_9 = V_0;
		NullCheck(L_9);
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_10 = L_9->___purchaseInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_11);
		String_t* L_13;
		L_13 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_11, _stringLiteral239957B1443E67257CCBBDE8882DF1FAB74AE19A, L_12, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_10);
		PurchaseInfo_set_productCode_m266C82792EF442EF0765D24A6DF7F6A586326156_inline(L_10, L_13, NULL);
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_14 = V_0;
		NullCheck(L_14);
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_15 = L_14->___purchaseInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_16);
		String_t* L_18;
		L_18 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_16, _stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407, L_17, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_15);
		PurchaseInfo_set_gameOrderId_m83B94703A8EA6AF483B1C1A8F5C91106D60FE1E9_inline(L_15, L_18, NULL);
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_19 = V_0;
		NullCheck(L_19);
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_20 = L_19->___purchaseInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_21);
		String_t* L_23;
		L_23 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_21, _stringLiteralD29437EB04FE11E65A278735DE68C3CE2A4935B7, L_22, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_20);
		PurchaseInfo_set_orderQueryToken_m3A61C4A608BCE1A64B2B0DA60E8A53E7C9E68AD1_inline(L_20, L_23, NULL);
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_24 = V_0;
		NullCheck(L_24);
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_25 = L_24->___purchaseInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_26);
		String_t* L_28;
		L_28 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_26, _stringLiteralFCBA8944E223367D783E62BAB112FD4CF35FEA6C, L_27, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_25);
		PurchaseInfo_set_developerPayload_m69C5ABA3441E3EE36FAC10565467AE7C79AF69DE_inline(L_25, L_28, NULL);
	}

IL_00a9:
	{
		RuntimeObject* L_29 = __this->___purchaseListener;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_30 = V_2;
		if (!L_30)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_0148;
	}

IL_00bc:
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___resultCode;
		il2cpp_codegen_runtime_class_init_inline(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		int32_t L_33 = ((ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_StaticFields*)il2cpp_codegen_static_fields_for(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var))->___SDK_PURCHASE_SUCCESS;
		V_3 = (bool)((((int32_t)L_32) == ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_00e3;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_35 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_36 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__0_m9F38B3A4A921291A4D4C44CFDEB178E52DA4633C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_36, NULL);
		goto IL_0148;
	}

IL_00e3:
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___resultCode;
		il2cpp_codegen_runtime_class_init_inline(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		int32_t L_39 = ((ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_StaticFields*)il2cpp_codegen_static_fields_for(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var))->___SDK_PURCHASE_REPEAT;
		V_4 = (bool)((((int32_t)L_38) == ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_4;
		if (!L_40)
		{
			goto IL_0134;
		}
	}
	{
		U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* L_41 = (U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_1__ctor_mB4521C865CE6C89DB871760DF7BDD555F64BB6A0(L_41, NULL);
		V_5 = L_41;
		U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* L_42 = V_5;
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_43 = V_0;
		NullCheck(L_42);
		L_42->___CSU24U3CU3E8__locals1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___CSU24U3CU3E8__locals1), (void*)L_43);
		U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* L_44 = V_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_45);
		String_t* L_47;
		L_47 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_45, _stringLiteral239957B1443E67257CCBBDE8882DF1FAB74AE19A, L_46, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_44);
		L_44->___productCode = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___productCode), (void*)L_47);
		U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* L_48 = V_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_49 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_49, L_48, (intptr_t)((void*)U3CU3Ec__DisplayClass2_1_U3ConPurchaseFinishedU3Eb__1_mEC29B0574021CA2EE2B6C04DC8ACC057E848BE34_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_49, NULL);
		goto IL_0148;
	}

IL_0134:
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_50 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_51 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_51, L_50, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__2_m39050021ED03B012078C37827BE91C56FBC06B3C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_51, NULL);
	}

IL_0148:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseForwardCallback_onReceiptValidated_mBC0B41FEBC7B42DCD1AFDAAEF854341819A224AC (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* __this, int32_t ___0_resultCode, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_jo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3ConReceiptValidatedU3Eb__0_mB7D3966C00EF0D4B2C3164216D6060A2AE5A9E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_U3ConReceiptValidatedU3Eb__1_m50762A2A99E492258A63106547E5FA16828E2C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA9DBCD385845F338DB7B740114C86B3F544BAF3);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* V_3 = NULL;
	U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* V_4 = NULL;
	bool V_5 = false;
	{
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_0 = (U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_2__ctor_mFCDD6240082F474A29F4E42375399B131080AE9E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_2 = V_0;
		int32_t L_3 = ___0_resultCode;
		NullCheck(L_2);
		L_2->___resultCode = L_3;
		RuntimeObject* L_4 = __this->___purchaseListener;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0111;
	}

IL_0028:
	{
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___resultCode;
		il2cpp_codegen_runtime_class_init_inline(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		int32_t L_8 = ((ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_StaticFields*)il2cpp_codegen_static_fields_for(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var))->___SDK_RECEIPT_VALIDATE_SUCCESS;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_10 = (U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m1A13D13AC36E4C58CC80AF2B3AE235539B3C657A(L_10, NULL);
		V_3 = L_10;
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_11 = V_3;
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_12 = V_0;
		NullCheck(L_11);
		L_11->___CSU24U3CU3E8__locals1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___CSU24U3CU3E8__locals1), (void*)L_12);
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_13 = V_3;
		ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* L_14 = (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E*)il2cpp_codegen_object_new(ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E_il2cpp_TypeInfo_var);
		ReceiptInfo__ctor_m1A68AE3AAE93A594687661F64243FC591F2D1991(L_14, NULL);
		NullCheck(L_13);
		L_13->___receiptInfo = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___receiptInfo), (void*)L_14);
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_15 = V_3;
		NullCheck(L_15);
		ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* L_16 = L_15->___receiptInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_17);
		String_t* L_19;
		L_19 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_17, _stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407, L_18, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_16);
		ReceiptInfo_set_gameOrderId_m9606E3FF2CC14038C797B4F5EA1CAC19751CBA1E_inline(L_16, L_19, NULL);
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_20 = V_3;
		NullCheck(L_20);
		ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* L_21 = L_20->___receiptInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_22);
		String_t* L_24;
		L_24 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_22, _stringLiteralDA9DBCD385845F338DB7B740114C86B3F544BAF3, L_23, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_21);
		ReceiptInfo_set_signData_mCD8C7C763389FD464C21C8AC7044F15FADE7DD50_inline(L_21, L_24, NULL);
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_25 = V_3;
		NullCheck(L_25);
		ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* L_26 = L_25->___receiptInfo;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_27);
		String_t* L_29;
		L_29 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_27, _stringLiteral450C8EF3D0450ABCD23C53730AAA221835C6A350, L_28, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_26);
		ReceiptInfo_set_signature_mD7F9FCC16ACD8D05BC90A60088EF73CC8CADD1BC_inline(L_26, L_29, NULL);
		U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* L_30 = V_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3ConReceiptValidatedU3Eb__0_mB7D3966C00EF0D4B2C3164216D6060A2AE5A9E65_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_31, NULL);
		goto IL_0111;
	}

IL_00c1:
	{
		U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* L_32 = (U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_1__ctor_mBD8E6E062E49407C2FF24F909690F4CF1CCBC3E0(L_32, NULL);
		V_4 = L_32;
		U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* L_33 = V_4;
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_34 = V_0;
		NullCheck(L_33);
		L_33->___CSU24U3CU3E8__locals2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___CSU24U3CU3E8__locals2), (void*)L_34);
		U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* L_35 = V_4;
		NullCheck(L_35);
		L_35->___orderId = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___orderId), (void*)(String_t*)NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___1_jo;
		V_5 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_00fd;
		}
	}
	{
		U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* L_38 = V_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39 = ___1_jo;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_39);
		String_t* L_41;
		L_41 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_39, _stringLiteral5D1B0B2C761E451E89E4488820A455631CE80407, L_40, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_38);
		L_38->___orderId = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___orderId), (void*)L_41);
	}

IL_00fd:
	{
		U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* L_42 = V_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass3_1_U3ConReceiptValidatedU3Eb__1_m50762A2A99E492258A63106547E5FA16828E2C84_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_43, NULL);
	}

IL_0111:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseForwardCallback_onPurchaseConfirmed_m808AA80EDF206E2B3982C6075F731662D600D58A (PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* __this, int32_t ___0_resultCode, String_t* ___1_gameOrderId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__0_m48D419B71C8A055EBD054ABD58B404EE21092C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__1_m1EF1A3CE23CF7881F6FCC8BF3A9711D1B3203D7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_0 = (U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mF62A0F2ED8C3DACA07AED1F8FF923D521C00170A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_2 = V_0;
		String_t* L_3 = ___1_gameOrderId;
		NullCheck(L_2);
		L_2->___gameOrderId = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___gameOrderId), (void*)L_3);
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_4 = V_0;
		int32_t L_5 = ___0_resultCode;
		NullCheck(L_4);
		L_4->___resultCode = L_5;
		RuntimeObject* L_6 = __this->___purchaseListener;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0067;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___resultCode;
		il2cpp_codegen_runtime_class_init_inline(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_StaticFields*)il2cpp_codegen_static_fields_for(ResultCode_t81AA6C91EC1C8B4B74EC8C50DF4FC16DB5F41006_il2cpp_TypeInfo_var))->___SDK_CONFIRM_PURCHASE_SUCCESS;
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__0_m48D419B71C8A055EBD054ABD58B404EE21092C38_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_13, NULL);
		goto IL_0067;
	}

IL_0053:
	{
		U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* L_14 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__1_m1EF1A3CE23CF7881F6FCC8BF3A9711D1B3203D7B_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t23F08C6A2DF1B080E3FAA6C77079C01382AE92B1_il2cpp_TypeInfo_var);
		MainThreadDispatcher_RunOnMainThread_m43F65D62E225FDD0B10C059C6ED7DE2E8972C9B7(L_15, NULL);
	}

IL_0067:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m21E2EADD34F091F2CA39CE8707396AC4AF1ADDB2 (U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__0_m9F38B3A4A921291A4D4C44CFDEB178E52DA4633C (U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___purchaseListener;
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_2 = __this->___purchaseInfo;
		NullCheck(L_1);
		InterfaceActionInvoker1< PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* >::Invoke(0, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConPurchaseFinishedU3Eb__2_m39050021ED03B012078C37827BE91C56FBC06B3C (U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___purchaseListener;
		int32_t* L_2 = (int32_t*)(&__this->___resultCode);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEFB356A915A161FCC6E252A3196747FCBBDB0133, L_3, NULL);
		PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* L_5 = __this->___purchaseInfo;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* >::Invoke(1, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_1, L_4, L_5);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mB4521C865CE6C89DB871760DF7BDD555F64BB6A0 (U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1_U3ConPurchaseFinishedU3Eb__1_mEC29B0574021CA2EE2B6C04DC8ACC057E848BE34 (U3CU3Ec__DisplayClass2_1_t2639D22CB7F7B6C40F9964D50E7247312880FE8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass2_0_tF9FCAB0BFBD3DE7C7F331CE2464CA80A8BACBE21* L_0 = __this->___CSU24U3CU3E8__locals1;
		NullCheck(L_0);
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = L_0->___U3CU3E4__this;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___purchaseListener;
		String_t* L_3 = __this->___productCode;
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(2, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_2, L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1A13D13AC36E4C58CC80AF2B3AE235539B3C657A (U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConReceiptValidatedU3Eb__0_mB7D3966C00EF0D4B2C3164216D6060A2AE5A9E65 (U3CU3Ec__DisplayClass3_0_tCA66D1FE32F6C6F65F3C6B4F39918242A14A689D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_0 = __this->___CSU24U3CU3E8__locals1;
		NullCheck(L_0);
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = L_0->___U3CU3E4__this;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___purchaseListener;
		ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* L_3 = __this->___receiptInfo;
		NullCheck(L_2);
		InterfaceActionInvoker1< ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* >::Invoke(3, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_2, L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1__ctor_mBD8E6E062E49407C2FF24F909690F4CF1CCBC3E0 (U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_1_U3ConReceiptValidatedU3Eb__1_m50762A2A99E492258A63106547E5FA16828E2C84 (U3CU3Ec__DisplayClass3_1_t2F39AFDCF7FC070948A6564950A3712E8D9BF12B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral200CA907545A935B48A8BA7A906C00A76FAB1A47);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_0 = __this->___CSU24U3CU3E8__locals2;
		NullCheck(L_0);
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_1 = L_0->___U3CU3E4__this;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___purchaseListener;
		String_t* L_3 = __this->___orderId;
		U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* L_4 = __this->___CSU24U3CU3E8__locals2;
		NullCheck(L_4);
		int32_t* L_5 = (int32_t*)(&L_4->___resultCode);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral200CA907545A935B48A8BA7A906C00A76FAB1A47, L_6, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_2, L_3, L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_2__ctor_mFCDD6240082F474A29F4E42375399B131080AE9E (U3CU3Ec__DisplayClass3_2_t85C82EF453E1D8F6B04B878237793AC7A29198E1* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mF62A0F2ED8C3DACA07AED1F8FF923D521C00170A (U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__0_m48D419B71C8A055EBD054ABD58B404EE21092C38 (U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___purchaseListener;
		String_t* L_2 = __this->___gameOrderId;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(5, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3ConPurchaseConfirmedU3Eb__1_m1EF1A3CE23CF7881F6FCC8BF3A9711D1B3203D7B (U3CU3Ec__DisplayClass4_0_t7555572D34354DE350ED0C0231032FDA27F4CEAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B37328B98E3B68A70A3BF5EBBAA729CC56238A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchaseForwardCallback_tC2ECB32254BD4E737EC84E380F7A397002A91A99* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___purchaseListener;
		String_t* L_2 = __this->___gameOrderId;
		int32_t* L_3 = (int32_t*)(&__this->___resultCode);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B37328B98E3B68A70A3BF5EBBAA729CC56238A0, L_4, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6, IPurchaseListener_t469C6D23282B9F78C4BEBDE77C4DFB2683DB1B5D_il2cpp_TypeInfo_var, L_1, L_2, L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_productCode_m266C82792EF442EF0765D24A6DF7F6A586326156_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CproductCodeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproductCodeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_gameOrderId_m83B94703A8EA6AF483B1C1A8F5C91106D60FE1E9_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CgameOrderIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameOrderIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_orderQueryToken_m3A61C4A608BCE1A64B2B0DA60E8A53E7C9E68AD1_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CorderQueryTokenU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CorderQueryTokenU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchaseInfo_set_developerPayload_m69C5ABA3441E3EE36FAC10565467AE7C79AF69DE_inline (PurchaseInfo_t35F947700F1AEFD34B0CA3B38CBBEEE65E41B2E5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdeveloperPayloadU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeveloperPayloadU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_gameOrderId_m9606E3FF2CC14038C797B4F5EA1CAC19751CBA1E_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CgameOrderIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameOrderIdU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_signData_mCD8C7C763389FD464C21C8AC7044F15FADE7DD50_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsignDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReceiptInfo_set_signature_mD7F9FCC16ACD8D05BC90A60088EF73CC8CADD1BC_inline (ReceiptInfo_t1200EB4E8133FF833BAD426DCB64549A4053583E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsignatureU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignatureU3Ek__BackingField), (void*)L_0);
		return;
	}
}
