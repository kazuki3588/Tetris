#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>
struct Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector3>
struct KeyCollection_t1D0351E51DC9046614511F1FE31A2A8980018BF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector3>
struct ValueCollection_t8301D8E3E21D289F07BAF2F253BE39A360CE838C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector3>[]
struct EntryU5BU5D_t3F6DC7E786472258EC3C650DE0846B75CAA40135;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Hold
struct Hold_t1D231417C94CDA47827A53613150C8D23B4376ED;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Mino
struct Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SpawnMino
struct SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// GameManager/<ReStart>d__6
struct U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0311DC51CB10ADBFFEFA2B65699592FE92A94D01;
IL2CPP_EXTERN_C String_t* _stringLiteral595AE6B61BAF560050B87BD2BD092DFC560DD4AB;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8AEA2E0E402032E343E78F4B3569A18DB30B429A;
IL2CPP_EXTERN_C String_t* _stringLiteral8FFD569399499B548F81C2A4F945F6DCD428B426;
IL2CPP_EXTERN_C String_t* _stringLiteral90286CDC2C8576383A683349086763F1543B5025;
IL2CPP_EXTERN_C String_t* _stringLiteralB3BC9013C67B87E6A063201A073952079AF8FCC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DD13374B2E7F66B24468018DD0BAF8C6B761E6;
IL2CPP_EXTERN_C String_t* _stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReStartU3Ed__6_System_Collections_IEnumerator_Reset_m0BCE5EB1BF53B1E0F09481A0B219E33005627348_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>
struct Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3F6DC7E786472258EC3C650DE0846B75CAA40135* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1D0351E51DC9046614511F1FE31A2A8980018BF3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8301D8E3E21D289F07BAF2F253BE39A360CE838C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___entries_1)); }
	inline EntryU5BU5D_t3F6DC7E786472258EC3C650DE0846B75CAA40135* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3F6DC7E786472258EC3C650DE0846B75CAA40135** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3F6DC7E786472258EC3C650DE0846B75CAA40135* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___keys_7)); }
	inline KeyCollection_t1D0351E51DC9046614511F1FE31A2A8980018BF3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1D0351E51DC9046614511F1FE31A2A8980018BF3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1D0351E51DC9046614511F1FE31A2A8980018BF3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ___values_8)); }
	inline ValueCollection_t8301D8E3E21D289F07BAF2F253BE39A360CE838C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8301D8E3E21D289F07BAF2F253BE39A360CE838C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8301D8E3E21D289F07BAF2F253BE39A360CE838C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameManager/<ReStart>d__6
struct U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<ReStart>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<ReStart>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameManager::gameStateText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gameStateText_4;
	// UnityEngine.UI.Text GameManager::socreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___socreText_5;
	// System.Int32 GameManager::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_gameStateText_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameStateText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gameStateText_4() const { return ___gameStateText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gameStateText_4() { return &___gameStateText_4; }
	inline void set_gameStateText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gameStateText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameStateText_4), (void*)value);
	}

	inline static int32_t get_offset_of_socreText_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___socreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_socreText_5() const { return ___socreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_socreText_5() { return &___socreText_5; }
	inline void set_socreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___socreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};


// Hold
struct Hold_t1D231417C94CDA47827A53613150C8D23B4376ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Hold::currentMinos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___currentMinos_4;
	// UnityEngine.GameObject[] Hold::holdMinos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___holdMinos_5;
	// UnityEngine.Vector3 Hold::middlePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___middlePosition_6;
	// UnityEngine.Quaternion Hold::escapeQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___escapeQuaternion_7;
	// System.Boolean Hold::firstClick
	bool ___firstClick_8;
	// System.Boolean Hold::overHang
	bool ___overHang_9;

public:
	inline static int32_t get_offset_of_currentMinos_4() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___currentMinos_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_currentMinos_4() const { return ___currentMinos_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_currentMinos_4() { return &___currentMinos_4; }
	inline void set_currentMinos_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___currentMinos_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMinos_4), (void*)value);
	}

	inline static int32_t get_offset_of_holdMinos_5() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___holdMinos_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_holdMinos_5() const { return ___holdMinos_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_holdMinos_5() { return &___holdMinos_5; }
	inline void set_holdMinos_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___holdMinos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holdMinos_5), (void*)value);
	}

	inline static int32_t get_offset_of_middlePosition_6() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___middlePosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_middlePosition_6() const { return ___middlePosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_middlePosition_6() { return &___middlePosition_6; }
	inline void set_middlePosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___middlePosition_6 = value;
	}

	inline static int32_t get_offset_of_escapeQuaternion_7() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___escapeQuaternion_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_escapeQuaternion_7() const { return ___escapeQuaternion_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_escapeQuaternion_7() { return &___escapeQuaternion_7; }
	inline void set_escapeQuaternion_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___escapeQuaternion_7 = value;
	}

	inline static int32_t get_offset_of_firstClick_8() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___firstClick_8)); }
	inline bool get_firstClick_8() const { return ___firstClick_8; }
	inline bool* get_address_of_firstClick_8() { return &___firstClick_8; }
	inline void set_firstClick_8(bool value)
	{
		___firstClick_8 = value;
	}

	inline static int32_t get_offset_of_overHang_9() { return static_cast<int32_t>(offsetof(Hold_t1D231417C94CDA47827A53613150C8D23B4376ED, ___overHang_9)); }
	inline bool get_overHang_9() const { return ___overHang_9; }
	inline bool* get_address_of_overHang_9() { return &___overHang_9; }
	inline void set_overHang_9(bool value)
	{
		___overHang_9 = value;
	}
};


// Mino
struct Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Mino::deleteLineCont
	int32_t ___deleteLineCont_5;
	// System.Single Mino::bottomMovePreviousTime
	float ___bottomMovePreviousTime_6;
	// System.Single Mino::movePreviousTime
	float ___movePreviousTime_7;
	// System.Single Mino::fallTime
	float ___fallTime_8;
	// System.Single Mino::moveSensitivity
	float ___moveSensitivity_9;
	// System.Single Mino::touchFirstTime
	float ___touchFirstTime_10;
	// System.Single Mino::leaveTime
	float ___leaveTime_11;
	// System.Boolean Mino::maxMino
	bool ___maxMino_12;
	// UnityEngine.Vector3 Mino::spawnPositon
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___spawnPositon_13;
	// UnityEngine.GameObject[] Mino::nextMinos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___nextMinos_17;
	// System.Boolean Mino::<NextFlag>k__BackingField
	bool ___U3CNextFlagU3Ek__BackingField_18;
	// System.Boolean Mino::<HoldFlag>k__BackingField
	bool ___U3CHoldFlagU3Ek__BackingField_19;
	// System.Boolean Mino::<OverMinoFlag>k__BackingField
	bool ___U3COverMinoFlagU3Ek__BackingField_20;
	// System.Boolean Mino::iscallOnce
	bool ___iscallOnce_21;

public:
	inline static int32_t get_offset_of_deleteLineCont_5() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___deleteLineCont_5)); }
	inline int32_t get_deleteLineCont_5() const { return ___deleteLineCont_5; }
	inline int32_t* get_address_of_deleteLineCont_5() { return &___deleteLineCont_5; }
	inline void set_deleteLineCont_5(int32_t value)
	{
		___deleteLineCont_5 = value;
	}

	inline static int32_t get_offset_of_bottomMovePreviousTime_6() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___bottomMovePreviousTime_6)); }
	inline float get_bottomMovePreviousTime_6() const { return ___bottomMovePreviousTime_6; }
	inline float* get_address_of_bottomMovePreviousTime_6() { return &___bottomMovePreviousTime_6; }
	inline void set_bottomMovePreviousTime_6(float value)
	{
		___bottomMovePreviousTime_6 = value;
	}

	inline static int32_t get_offset_of_movePreviousTime_7() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___movePreviousTime_7)); }
	inline float get_movePreviousTime_7() const { return ___movePreviousTime_7; }
	inline float* get_address_of_movePreviousTime_7() { return &___movePreviousTime_7; }
	inline void set_movePreviousTime_7(float value)
	{
		___movePreviousTime_7 = value;
	}

	inline static int32_t get_offset_of_fallTime_8() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___fallTime_8)); }
	inline float get_fallTime_8() const { return ___fallTime_8; }
	inline float* get_address_of_fallTime_8() { return &___fallTime_8; }
	inline void set_fallTime_8(float value)
	{
		___fallTime_8 = value;
	}

	inline static int32_t get_offset_of_moveSensitivity_9() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___moveSensitivity_9)); }
	inline float get_moveSensitivity_9() const { return ___moveSensitivity_9; }
	inline float* get_address_of_moveSensitivity_9() { return &___moveSensitivity_9; }
	inline void set_moveSensitivity_9(float value)
	{
		___moveSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_touchFirstTime_10() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___touchFirstTime_10)); }
	inline float get_touchFirstTime_10() const { return ___touchFirstTime_10; }
	inline float* get_address_of_touchFirstTime_10() { return &___touchFirstTime_10; }
	inline void set_touchFirstTime_10(float value)
	{
		___touchFirstTime_10 = value;
	}

	inline static int32_t get_offset_of_leaveTime_11() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___leaveTime_11)); }
	inline float get_leaveTime_11() const { return ___leaveTime_11; }
	inline float* get_address_of_leaveTime_11() { return &___leaveTime_11; }
	inline void set_leaveTime_11(float value)
	{
		___leaveTime_11 = value;
	}

	inline static int32_t get_offset_of_maxMino_12() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___maxMino_12)); }
	inline bool get_maxMino_12() const { return ___maxMino_12; }
	inline bool* get_address_of_maxMino_12() { return &___maxMino_12; }
	inline void set_maxMino_12(bool value)
	{
		___maxMino_12 = value;
	}

	inline static int32_t get_offset_of_spawnPositon_13() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___spawnPositon_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_spawnPositon_13() const { return ___spawnPositon_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_spawnPositon_13() { return &___spawnPositon_13; }
	inline void set_spawnPositon_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___spawnPositon_13 = value;
	}

	inline static int32_t get_offset_of_nextMinos_17() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___nextMinos_17)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_nextMinos_17() const { return ___nextMinos_17; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_nextMinos_17() { return &___nextMinos_17; }
	inline void set_nextMinos_17(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___nextMinos_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextMinos_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNextFlagU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___U3CNextFlagU3Ek__BackingField_18)); }
	inline bool get_U3CNextFlagU3Ek__BackingField_18() const { return ___U3CNextFlagU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CNextFlagU3Ek__BackingField_18() { return &___U3CNextFlagU3Ek__BackingField_18; }
	inline void set_U3CNextFlagU3Ek__BackingField_18(bool value)
	{
		___U3CNextFlagU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHoldFlagU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___U3CHoldFlagU3Ek__BackingField_19)); }
	inline bool get_U3CHoldFlagU3Ek__BackingField_19() const { return ___U3CHoldFlagU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CHoldFlagU3Ek__BackingField_19() { return &___U3CHoldFlagU3Ek__BackingField_19; }
	inline void set_U3CHoldFlagU3Ek__BackingField_19(bool value)
	{
		___U3CHoldFlagU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COverMinoFlagU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___U3COverMinoFlagU3Ek__BackingField_20)); }
	inline bool get_U3COverMinoFlagU3Ek__BackingField_20() const { return ___U3COverMinoFlagU3Ek__BackingField_20; }
	inline bool* get_address_of_U3COverMinoFlagU3Ek__BackingField_20() { return &___U3COverMinoFlagU3Ek__BackingField_20; }
	inline void set_U3COverMinoFlagU3Ek__BackingField_20(bool value)
	{
		___U3COverMinoFlagU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_iscallOnce_21() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9, ___iscallOnce_21)); }
	inline bool get_iscallOnce_21() const { return ___iscallOnce_21; }
	inline bool* get_address_of_iscallOnce_21() { return &___iscallOnce_21; }
	inline void set_iscallOnce_21(bool value)
	{
		___iscallOnce_21 = value;
	}
};

struct Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields
{
public:
	// System.Int32 Mino::width
	int32_t ___width_14;
	// System.Int32 Mino::height
	int32_t ___height_15;
	// UnityEngine.Transform[0...,0...] Mino::grid
	TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* ___grid_16;

public:
	inline static int32_t get_offset_of_width_14() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields, ___width_14)); }
	inline int32_t get_width_14() const { return ___width_14; }
	inline int32_t* get_address_of_width_14() { return &___width_14; }
	inline void set_width_14(int32_t value)
	{
		___width_14 = value;
	}

	inline static int32_t get_offset_of_height_15() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields, ___height_15)); }
	inline int32_t get_height_15() const { return ___height_15; }
	inline int32_t* get_address_of_height_15() { return &___height_15; }
	inline void set_height_15(int32_t value)
	{
		___height_15 = value;
	}

	inline static int32_t get_offset_of_grid_16() { return static_cast<int32_t>(offsetof(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields, ___grid_16)); }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* get_grid_16() const { return ___grid_16; }
	inline TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14** get_address_of_grid_16() { return &___grid_16; }
	inline void set_grid_16(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* value)
	{
		___grid_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_16), (void*)value);
	}
};


// SpawnMino
struct SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] SpawnMino::Minos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Minos_4;
	// UnityEngine.Vector3 SpawnMino::nextMinoPosi
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextMinoPosi_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3> SpawnMino::nextPosition
	Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * ___nextPosition_6;

public:
	inline static int32_t get_offset_of_Minos_4() { return static_cast<int32_t>(offsetof(SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE, ___Minos_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Minos_4() const { return ___Minos_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Minos_4() { return &___Minos_4; }
	inline void set_Minos_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Minos_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Minos_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextMinoPosi_5() { return static_cast<int32_t>(offsetof(SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE, ___nextMinoPosi_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_nextMinoPosi_5() const { return ___nextMinoPosi_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_nextMinoPosi_5() { return &___nextMinoPosi_5; }
	inline void set_nextMinoPosi_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___nextMinoPosi_5 = value;
	}

	inline static int32_t get_offset_of_nextPosition_6() { return static_cast<int32_t>(offsetof(SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE, ___nextPosition_6)); }
	inline Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * get_nextPosition_6() const { return ___nextPosition_6; }
	inline Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE ** get_address_of_nextPosition_6() { return &___nextPosition_6; }
	inline void set_nextPosition_6(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * value)
	{
		___nextPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextPosition_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[0...,0...]
struct TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC_gshared (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D_gshared (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_gshared (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, int32_t ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void GameManager/<ReStart>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReStartU3Ed__6__ctor_m1BB2DE5F4C0C9977972FBF2F851070CB879545C7 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Mino>()
inline Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean Mino::get_OverMinoFlag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_OverMinoFlag_m55A79334D14D8FE4F28A427B696B7DD0AC2BB4FF_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Boolean Mino::get_HoldFlag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_HoldFlag_m9AEE6BA4B50CD964D54FEBE5D38C6438329AB448_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean Mino::get_NextFlag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Boolean Mino::ValidMouvement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Void Mino::set_OverMinoFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_OverMinoFlag_m0285848605D1621387238B7F7C46009E3C33D4A5_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Mino::set_NextFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mino::set_HoldFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<SpawnMino>()
inline SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E (const RuntimeMethod* method)
{
	return ((  SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void SpawnMino::NextMinoCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino_NextMinoCreate_m28C0FA7446819CFC42F7D56984F6DF328B01EC43 (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method);
// System.Void Mino::bottomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_bottomMove_mEB7EB7E71A2C5E1347FE036CE4E43F3B729EEE34 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Void Mino::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_Click_m6FF95F68F9F0C55469193872E57DCEB2195C674A (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Void Mino::LeftOrRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_LeftOrRight_m02A8AB43A9234E3A522293100D8DAA3B88BDD6B9 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void Mino::RightMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_RightMove_mAA0666AC0DF872AD88A02B2FCBED9D56A78ECAAD (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Void Mino::LeftMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_LeftMove_mBC8EE167CEA7A48706F69BCF3BB8970E93869DA9 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Mino::AddToGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_AddToGrid_m4E228DCA0E69E351A30F1A91EE0A90AB6424E9EA (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Void Mino::CheckLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_CheckLines_mB36BB019217935859ABACEF1070CC7921411C52A (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59 (const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean Mino::HasLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_HasLine_m265ADFE0AC5B3B600A4F3A5394E16E5CF9EE24E6 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void Mino::DeleteLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_DeleteLine_m39220816BE773805376EA8E8A083C84F76D65CD3 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void Mino::RowDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_RowDown_m436363373428ADD0BBF3B3E7AB6D5923E9681CBD (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___deleteCount0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void SpawnMino::FirstMino()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino_FirstMino_m90AF34EDACFF37A450CEB7202E879496144A5CC7 (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::get_Item(!0)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::.ctor()
inline void Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE *, const RuntimeMethod*))Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>::Add(!0,!1)
inline void Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063 (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * __this, int32_t ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE *, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// score = 0;//スコアの初期化
		__this->set_score_6(0);
		// }
		return;
	}
}
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___deleteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___deleteCount0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_0067;
	}

IL_001c:
	{
		// score += 100;
		int32_t L_1 = __this->get_score_6();
		__this->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)100))));
		// break;
		goto IL_0067;
	}

IL_002d:
	{
		// score += 200;
		int32_t L_2 = __this->get_score_6();
		__this->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)200))));
		// break;
		goto IL_0067;
	}

IL_0041:
	{
		// score += 400;
		int32_t L_3 = __this->get_score_6();
		__this->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)400))));
		// break;
		goto IL_0067;
	}

IL_0055:
	{
		// score += 600;
		int32_t L_4 = __this->get_score_6();
		__this->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)600))));
	}

IL_0067:
	{
		// socreText.text = score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_socreText_5();
		int32_t* L_6 = __this->get_address_of_score_6();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0311DC51CB10ADBFFEFA2B65699592FE92A94D01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AEA2E0E402032E343E78F4B3569A18DB30B429A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameStateText.text = "ゲームオーバー";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_gameStateText_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral0311DC51CB10ADBFFEFA2B65699592FE92A94D01);
		// StartCoroutine("ReStart");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral8AEA2E0E402032E343E78F4B3569A18DB30B429A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::ReStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_ReStart_m0D4ABB43709E1E57A0343C5F06AE773E6FB4E368 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * L_0 = (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F *)il2cpp_codegen_object_new(U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F_il2cpp_TypeInfo_var);
		U3CReStartU3Ed__6__ctor_m1BB2DE5F4C0C9977972FBF2F851070CB879545C7(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Hold::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hold_Update_m313B1842619B3E047A76C21BA6B2D36E69A1771C (Hold_t1D231417C94CDA47827A53613150C8D23B4376ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if (!overHang) return;
		bool L_0 = __this->get_overHang_9();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!overHang) return;
		return;
	}

IL_0009:
	{
		// holdMinos = GameObject.FindGameObjectsWithTag("Mino");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830, /*hidden argument*/NULL);
		__this->set_holdMinos_5(L_1);
		// foreach(var holmino in holdMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_holdMinos_5();
		V_0 = L_2;
		V_1 = 0;
		goto IL_0074;
	}

IL_0024:
	{
		// foreach(var holmino in holdMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (holmino.GetComponent<Mino>().OverMinoFlag == false && holmino.GetComponent<Mino>().HoldFlag == true)//オーバーしたミノ以外かつhold可能(つまり、ネクストミノと、下にいる動けないミノを除外)なミノを取り出す処理
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		NullCheck(L_7);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_8;
		L_8 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_7, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9;
		L_9 = Mino_get_OverMinoFlag_m55A79334D14D8FE4F28A427B696B7DD0AC2BB4FF_inline(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0070;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		NullCheck(L_10);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_11;
		L_11 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_10, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_12;
		L_12 = Mino_get_HoldFlag_m9AEE6BA4B50CD964D54FEBE5D38C6438329AB448_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// holmino.transform.position = middlePosition;//クリックした時の場所かつ動いている時のミノ位置移動
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_2;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_middlePosition_6();
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_15, /*hidden argument*/NULL);
		// holmino.transform.localRotation = escapeQuaternion;//クリックした時の場所かつ動いている時のミノ角度に変更(エラーになる例、動いているミノがデフォルトの角度だとエラーになる位置にいて、なおかつholdミノ変えた時エラーが出るパターン）
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = __this->get_escapeQuaternion_7();
		NullCheck(L_17);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_17, L_18, /*hidden argument*/NULL);
		// holmino.GetComponent<Mino>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		NullCheck(L_19);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_20;
		L_20 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_19, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)1, /*hidden argument*/NULL);
	}

IL_0070:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0074:
	{
		// foreach(var holmino in holdMinos)
		int32_t L_22 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		// overHang = false;
		__this->set_overHang_9((bool)0);
		// }
		return;
	}
}
// System.Void Hold::PushHoldButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hold_PushHoldButton_m6C6074C8F94501D6765473452171F070237441D1 (Hold_t1D231417C94CDA47827A53613150C8D23B4376ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595AE6B61BAF560050B87BD2BD092DFC560DD4AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FFD569399499B548F81C2A4F945F6DCD428B426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90286CDC2C8576383A683349086763F1543B5025);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3BC9013C67B87E6A063201A073952079AF8FCC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8DD13374B2E7F66B24468018DD0BAF8C6B761E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	String_t* V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// currentMinos = GameObject.FindGameObjectsWithTag("Mino");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830, /*hidden argument*/NULL);
		__this->set_currentMinos_4(L_0);
		// foreach(var activeMino in currentMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_currentMinos_4();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0041;
	}

IL_001b:
	{
		// foreach(var activeMino in currentMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if(activeMino.GetComponent<Mino>().enabled == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
		NullCheck(L_6);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_7;
		L_7 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_6, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8;
		L_8 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// middlePosition = activeMino.transform.position;//事前にポジション取得
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		__this->set_middlePosition_6(L_11);
	}

IL_003d:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0041:
	{
		// foreach(var activeMino in currentMinos)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// foreach(var _ctMino in currentMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_currentMinos_4();
		V_0 = L_15;
		V_1 = 0;
		goto IL_02d4;
	}

IL_0055:
	{
		// foreach(var _ctMino in currentMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		// if (_ctMino.GetComponent<Mino>().enabled == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_3;
		NullCheck(L_20);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_21;
		L_21 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_20, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_22;
		L_22 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_01b9;
		}
	}
	{
		// _ctMino.GetComponent<Mino>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_3;
		NullCheck(L_23);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_24;
		L_24 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_23, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_24);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)0, /*hidden argument*/NULL);
		// escapeQuaternion = _ctMino.transform.localRotation;//現在の角度を逃がす
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_3;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_26, /*hidden argument*/NULL);
		__this->set_escapeQuaternion_7(L_27);
		// _ctMino.transform.localRotation = Quaternion.Euler(0, 0, 0);//デフォルトの角度にする
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_3;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_29, L_30, /*hidden argument*/NULL);
		// switch (_ctMino.name)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		String_t* L_33 = V_4;
		if (!L_33)
		{
			goto IL_02d0;
		}
	}
	{
		String_t* L_34 = V_4;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteral595AE6B61BAF560050B87BD2BD092DFC560DD4AB, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_36 = V_4;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral8FFD569399499B548F81C2A4F945F6DCD428B426, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0129;
		}
	}
	{
		String_t* L_38 = V_4;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral90286CDC2C8576383A683349086763F1543B5025, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_014d;
		}
	}
	{
		String_t* L_40 = V_4;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteralB8DD13374B2E7F66B24468018DD0BAF8C6B761E6, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0171;
		}
	}
	{
		String_t* L_42 = V_4;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralB3BC9013C67B87E6A063201A073952079AF8FCC7, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0195;
		}
	}
	{
		goto IL_02d0;
	}

IL_0105:
	{
		// _ctMino.transform.position = new Vector3(9.1f, 22f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_3;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), (9.10000038f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_45, L_46, /*hidden argument*/NULL);
		// break;
		goto IL_02d0;
	}

IL_0129:
	{
		// _ctMino.transform.position = new Vector3(9.2f, 20.3f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_3;
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), (9.19999981f), (20.2999992f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_48, L_49, /*hidden argument*/NULL);
		// break;
		goto IL_02d0;
	}

IL_014d:
	{
		// _ctMino.transform.position = new Vector3(9.1f, 21f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_3;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), (9.10000038f), (21.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_51, L_52, /*hidden argument*/NULL);
		// break;
		goto IL_02d0;
	}

IL_0171:
	{
		// _ctMino.transform.position = new Vector3(9.09f, 22f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = V_3;
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), (9.09000015f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_54, L_55, /*hidden argument*/NULL);
		// break;
		goto IL_02d0;
	}

IL_0195:
	{
		// _ctMino.transform.position = new Vector3(9.7f, 22f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = V_3;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), (9.69999981f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_57, L_58, /*hidden argument*/NULL);
		// break;
		goto IL_02d0;
	}

IL_01b9:
	{
		// else if (_ctMino.GetComponent<Mino>().enabled == false && _ctMino.GetComponent<Mino>().NextFlag == false && _ctMino.GetComponent<Mino>().HoldFlag == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_3;
		NullCheck(L_59);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_60;
		L_60 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_59, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_60);
		bool L_61;
		L_61 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0270;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = V_3;
		NullCheck(L_62);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_63;
		L_63 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_62, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_63);
		bool L_64;
		L_64 = Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2_inline(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_0270;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = V_3;
		NullCheck(L_65);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_66;
		L_66 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_65, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_66);
		bool L_67;
		L_67 = Mino_get_HoldFlag_m9AEE6BA4B50CD964D54FEBE5D38C6438329AB448_inline(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0270;
		}
	}
	{
		// var holdCurrentPosi = _ctMino.transform.position;//holdの位置を逃がしておく
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = V_3;
		NullCheck(L_68);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_69, /*hidden argument*/NULL);
		V_5 = L_70;
		// _ctMino.transform.position = middlePosition;//クリックした時かつ動いている時のミノ位置を移動
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = V_3;
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = __this->get_middlePosition_6();
		NullCheck(L_72);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_72, L_73, /*hidden argument*/NULL);
		// _ctMino.GetComponent<Mino>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = V_3;
		NullCheck(L_74);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_75;
		L_75 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_74, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_75);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_75, (bool)1, /*hidden argument*/NULL);
		// if (!_ctMino.GetComponent<Mino>().ValidMouvement())//ミノを交換して、はみ出た場合の処理
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = V_3;
		NullCheck(L_76);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_77;
		L_77 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_76, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_77);
		bool L_78;
		L_78 = Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114(L_77, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_02d0;
		}
	}
	{
		// overHang = true;//処理を１回に限定するため。
		__this->set_overHang_9((bool)1);
		// _ctMino.GetComponent<Mino>().OverMinoFlag = true;//オーバしたやつを除外するため。
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_3;
		NullCheck(L_79);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_80;
		L_80 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_79, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_80);
		Mino_set_OverMinoFlag_m0285848605D1621387238B7F7C46009E3C33D4A5_inline(L_80, (bool)1, /*hidden argument*/NULL);
		// _ctMino.transform.position = holdCurrentPosi;//holdの場所に戻す
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = V_3;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_5;
		NullCheck(L_82);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_82, L_83, /*hidden argument*/NULL);
		// _ctMino.transform.localRotation = Quaternion.Euler(0, 0, 0);//念の為角度もデフォルトに戻しておく
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = V_3;
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_84, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_86;
		L_86 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_85, L_86, /*hidden argument*/NULL);
		// _ctMino.GetComponent<Mino>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = V_3;
		NullCheck(L_87);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_88;
		L_88 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_87, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_88);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_88, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02d0;
	}

IL_0270:
	{
		// else if (_ctMino.GetComponent<Mino>().NextFlag == true && !firstClick)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = V_3;
		NullCheck(L_89);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_90;
		L_90 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_89, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_90);
		bool L_91;
		L_91 = Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2_inline(L_90, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_02d0;
		}
	}
	{
		bool L_92 = __this->get_firstClick_8();
		if (L_92)
		{
			goto IL_02d0;
		}
	}
	{
		// firstClick = true;
		__this->set_firstClick_8((bool)1);
		// _ctMino.GetComponent<Mino>().transform.position = middlePosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = V_3;
		NullCheck(L_93);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_94;
		L_94 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_93, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = __this->get_middlePosition_6();
		NullCheck(L_95);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_95, L_96, /*hidden argument*/NULL);
		// _ctMino.GetComponent<Mino>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = V_3;
		NullCheck(L_97);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_98;
		L_98 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_97, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_98);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_98, (bool)1, /*hidden argument*/NULL);
		// _ctMino.GetComponent<Mino>().NextFlag = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = V_3;
		NullCheck(L_99);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_100;
		L_100 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_99, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_100);
		Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline(L_100, (bool)0, /*hidden argument*/NULL);
		// _ctMino.GetComponent<Mino>().HoldFlag = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = V_3;
		NullCheck(L_101);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_102;
		L_102 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_101, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_102);
		Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline(L_102, (bool)1, /*hidden argument*/NULL);
		// FindObjectOfType<SpawnMino>().NextMinoCreate();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * L_103;
		L_103 = Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E(/*hidden argument*/Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E_RuntimeMethod_var);
		NullCheck(L_103);
		SpawnMino_NextMinoCreate_m28C0FA7446819CFC42F7D56984F6DF328B01EC43(L_103, /*hidden argument*/NULL);
	}

IL_02d0:
	{
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_02d4:
	{
		// foreach(var _ctMino in currentMinos)
		int32_t L_105 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_106 = V_0;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Hold::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hold__ctor_m8EC1C0263FFD6E33C3AA0AF31B03018008A065A4 (Hold_t1D231417C94CDA47827A53613150C8D23B4376ED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean Mino::get_NextFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool NextFlag { get; set; }//次のミノかどうかを判定するフラグ
		bool L_0 = __this->get_U3CNextFlagU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Mino::set_NextFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NextFlag { get; set; }//次のミノかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3CNextFlagU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Boolean Mino::get_HoldFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_get_HoldFlag_m9AEE6BA4B50CD964D54FEBE5D38C6438329AB448 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool HoldFlag { get; set; }//holdみのかどうかを判定するフラグ
		bool L_0 = __this->get_U3CHoldFlagU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Mino::set_HoldFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HoldFlag { get; set; }//holdみのかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3CHoldFlagU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean Mino::get_OverMinoFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_get_OverMinoFlag_m55A79334D14D8FE4F28A427B696B7DD0AC2BB4FF (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool OverMinoFlag { get; set; }//オーバーしたミノかどうかを判定するフラグ
		bool L_0 = __this->get_U3COverMinoFlagU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Mino::set_OverMinoFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_set_OverMinoFlag_m0285848605D1621387238B7F7C46009E3C33D4A5 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OverMinoFlag { get; set; }//オーバーしたミノかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3COverMinoFlagU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void Mino::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_Update_m5EDE52FC64D7358DC8F84C3E32475ABFE1BEFCFD (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// bottomMove();//落下処理
		Mino_bottomMove_mEB7EB7E71A2C5E1347FE036CE4E43F3B729EEE34(__this, /*hidden argument*/NULL);
		// Click();//クリック処理
		Mino_Click_m6FF95F68F9F0C55469193872E57DCEB2195C674A(__this, /*hidden argument*/NULL);
		// LeftOrRight();//左右移動(スワイプ)
		Mino_LeftOrRight_m02A8AB43A9234E3A522293100D8DAA3B88BDD6B9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Mino::ValidMouvement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (Transform children in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_000e:
		{
			// foreach (Transform children in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// int roundX = Mathf.RoundToInt(children.transform.position.x);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			NullCheck(L_4);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
			float L_7 = L_6.get_x_2();
			int32_t L_8;
			L_8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_7, /*hidden argument*/NULL);
			V_1 = L_8;
			// int roundY = Mathf.RoundToInt(children.transform.position.y);
			NullCheck(L_4);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
			NullCheck(L_9);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
			float L_11 = L_10.get_y_3();
			int32_t L_12;
			L_12 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			// if (roundX < 0 || roundX >= width || roundY < 0 || roundY >= height + 3)
			int32_t L_13 = V_1;
			if ((((int32_t)L_13) < ((int32_t)0)))
			{
				goto IL_005e;
			}
		}

IL_0048:
		{
			int32_t L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
			int32_t L_15 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_width_14();
			if ((((int32_t)L_14) >= ((int32_t)L_15)))
			{
				goto IL_005e;
			}
		}

IL_0050:
		{
			int32_t L_16 = V_2;
			if ((((int32_t)L_16) < ((int32_t)0)))
			{
				goto IL_005e;
			}
		}

IL_0054:
		{
			int32_t L_17 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
			int32_t L_18 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_height_15();
			if ((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)3)))))
			{
				goto IL_0062;
			}
		}

IL_005e:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_0084);
		}

IL_0062:
		{
			// else if(grid[roundX,roundY] != null)//グリッドに登録されていたら、falseを返す;
			IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
			TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_19 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
			int32_t L_20 = V_1;
			int32_t L_21 = V_2;
			NullCheck(L_19);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
			L_22 = (L_19)->GetAt(L_20, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_23;
			L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_007a;
			}
		}

IL_0076:
		{
			// return false;
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_0084);
		}

IL_007a:
		{
			// foreach (Transform children in transform)
			RuntimeObject* L_24 = V_0;
			NullCheck(L_24);
			bool L_25;
			L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_000e;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x98, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_0;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_27 = V_4;
			if (!L_27)
			{
				goto IL_0097;
			}
		}

IL_0090:
		{
			RuntimeObject* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(132)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// return true;
		return (bool)1;
	}

IL_009a:
	{
		// }
		bool L_29 = V_3;
		return L_29;
	}
}
// System.Void Mino::RightMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_RightMove_mAA0666AC0DF872AD88A02B2FCBED9D56A78ECAAD (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// transform.position += new Vector3(1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_4, /*hidden argument*/NULL);
		// if (!ValidMouvement())
		bool L_5;
		L_5 = Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		// transform.position -= new Vector3(1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_10, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Mino::LeftMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_LeftMove_mBC8EE167CEA7A48706F69BCF3BB8970E93869DA9 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// transform.position += new Vector3(-1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_4, /*hidden argument*/NULL);
		// if (!ValidMouvement())
		bool L_5;
		L_5 = Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		// transform.position -= new Vector3(-1, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_10, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Mino::LeftOrRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_LeftOrRight_m02A8AB43A9234E3A522293100D8DAA3B88BDD6B9 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (Time.time - movePreviousTime > moveSensitivity)
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_movePreviousTime_7();
		float L_3 = __this->get_moveSensitivity_9();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))) > ((float)L_3))))
		{
			goto IL_0052;
		}
	}
	{
		// if (mouseX > 0)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// RightMove();
		Mino_RightMove_mAA0666AC0DF872AD88A02B2FCBED9D56A78ECAAD(__this, /*hidden argument*/NULL);
		// movePreviousTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_movePreviousTime_7(L_5);
		// }
		return;
	}

IL_0039:
	{
		// else if (mouseX < 0)
		float L_6 = V_0;
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// LeftMove();
		Mino_LeftMove_mBC8EE167CEA7A48706F69BCF3BB8970E93869DA9(__this, /*hidden argument*/NULL);
		// movePreviousTime = Time.time;
		float L_7;
		L_7 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_movePreviousTime_7(L_7);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Mino::bottomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_bottomMove_mEB7EB7E71A2C5E1347FE036CE4E43F3B729EEE34 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.DownArrow) || Time.time - bottomMovePreviousTime >= fallTime)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)274), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_bottomMovePreviousTime_6();
		float L_3 = __this->get_fallTime_8();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))) >= ((float)L_3))))
		{
			goto IL_012b;
		}
	}

IL_0023:
	{
		// transform.position += new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// if (!ValidMouvement())
		bool L_9;
		L_9 = Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114(__this, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0120;
		}
	}
	{
		// transform.position -= new Vector3(0, -1, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// NextFlag = false;
		Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline(__this, (bool)0, /*hidden argument*/NULL);
		// HoldFlag = false;
		Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline(__this, (bool)0, /*hidden argument*/NULL);
		// AddToGrid();//動けない状態になったらすぐグリッドに登録
		Mino_AddToGrid_m4E228DCA0E69E351A30F1A91EE0A90AB6424E9EA(__this, /*hidden argument*/NULL);
		// CheckLines();
		Mino_CheckLines_mB36BB019217935859ABACEF1070CC7921411C52A(__this, /*hidden argument*/NULL);
		// nextMinos = GameObject.FindGameObjectsWithTag("Mino");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15;
		L_15 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralE13BA4D280B74B302533843CDF16B65F3F000830, /*hidden argument*/NULL);
		__this->set_nextMinos_17(L_15);
		// foreach (var nxMino in nextMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = __this->get_nextMinos_17();
		V_0 = L_16;
		V_1 = 0;
		goto IL_011a;
	}

IL_00be:
	{
		// foreach (var nxMino in nextMinos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_2 = L_20;
		// if (nxMino.GetComponent<Mino>().NextFlag == true && !maxMino)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_2;
		NullCheck(L_21);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_22;
		L_22 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_21, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23;
		L_23 = Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2_inline(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0116;
		}
	}
	{
		bool L_24 = __this->get_maxMino_12();
		if (L_24)
		{
			goto IL_0116;
		}
	}
	{
		// nxMino.transform.position = spawnPositon;//nextMinoの待機場所を変更
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_spawnPositon_13();
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
		// nxMino.GetComponent<Mino>().NextFlag = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_2;
		NullCheck(L_28);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_29;
		L_29 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_28, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_29);
		Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline(L_29, (bool)0, /*hidden argument*/NULL);
		// nxMino.GetComponent<Mino>().HoldFlag = true;//Hold可能にする
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_31;
		L_31 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_30, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_31);
		Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline(L_31, (bool)1, /*hidden argument*/NULL);
		// nxMino.GetComponent<Mino>().enabled = true;//Minoを動かせる状態にする
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_2;
		NullCheck(L_32);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_33;
		L_33 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_32, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_33);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_33, (bool)1, /*hidden argument*/NULL);
		// FindObjectOfType<SpawnMino>().NextMinoCreate();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * L_34;
		L_34 = Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E(/*hidden argument*/Object_FindObjectOfType_TisSpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE_m83B123DD8F6E3AB1EF3720FBF5B8B10A8950470E_RuntimeMethod_var);
		NullCheck(L_34);
		SpawnMino_NextMinoCreate_m28C0FA7446819CFC42F7D56984F6DF328B01EC43(L_34, /*hidden argument*/NULL);
	}

IL_0116:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_011a:
	{
		// foreach (var nxMino in nextMinos)
		int32_t L_36 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_00be;
		}
	}

IL_0120:
	{
		// bottomMovePreviousTime = Time.time;
		float L_38;
		L_38 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_bottomMovePreviousTime_6(L_38);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void Mino::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_Click_m6FF95F68F9F0C55469193872E57DCEB2195C674A (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// touchFirstTime = Time.time;//画面に触れた瞬間の経過時間を代入
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_touchFirstTime_10(L_1);
	}

IL_0013:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_2;
		L_2 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// iscallOnce = true;//処理を１回に制限するため
		__this->set_iscallOnce_21((bool)1);
		// leaveTime = Time.time;//画面に離れた瞬間の経過時間を代入
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_leaveTime_11(L_3);
	}

IL_002d:
	{
		// var touchTime = leaveTime - touchFirstTime;//触れた瞬間から離れた時間の差分
		float L_4 = __this->get_leaveTime_11();
		float L_5 = __this->get_touchFirstTime_10();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		// if (iscallOnce)
		bool L_6 = __this->get_iscallOnce_21();
		if (!L_6)
		{
			goto IL_00aa;
		}
	}
	{
		// iscallOnce = false;
		__this->set_iscallOnce_21((bool)0);
		// if (touchTime > 0.1 && touchTime < 0.3)//クリック処理
		float L_7 = V_0;
		if ((!(((double)((double)((double)L_7))) > ((double)(0.10000000000000001)))))
		{
			goto IL_00aa;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((double)((double)((double)L_8))) < ((double)(0.29999999999999999)))))
		{
			goto IL_00aa;
		}
	}
	{
		// transform.Rotate(new Vector3(0, 0, -90));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_9, L_10, /*hidden argument*/NULL);
		// if (!ValidMouvement())
		bool L_11;
		L_11 = Mino_ValidMouvement_mC07A376457189DA75E4433DD3BB6D29DF7584114(__this, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00aa;
		}
	}
	{
		// transform.Rotate(new Vector3(0, 0, 90));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_12, L_13, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void Mino::AddToGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_AddToGrid_m4E228DCA0E69E351A30F1A91EE0A90AB6424E9EA (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Transform children in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_000e:
		{
			// foreach(Transform children in transform)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// int roundX = Mathf.RoundToInt(children.transform.position.x);//minoブロックの子オブジェクトのx座標を取得
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_1;
			NullCheck(L_4);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
			float L_7 = L_6.get_x_2();
			int32_t L_8;
			L_8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			// int roundY = Mathf.RoundToInt(children.transform.position.y);//minoブロックの子オブジェクトのy座標を取得
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
			NullCheck(L_9);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
			float L_12 = L_11.get_y_3();
			int32_t L_13;
			L_13 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			// grid[roundX, roundY] = children;//minoブロックの子オブジェクトをグリッド配列に一つ一つ登録
			IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
			TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_14 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
			int32_t L_15 = V_2;
			int32_t L_16 = V_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_1;
			NullCheck(L_14);
			(L_14)->SetAt(L_15, L_16, L_17);
			// if(roundY >= height - 1)
			int32_t L_18 = V_3;
			int32_t L_19 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_height_15();
			if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))))
			{
				goto IL_006e;
			}
		}

IL_005d:
		{
			// maxMino = true;
			__this->set_maxMino_12((bool)1);
			// FindObjectOfType<GameManager>().GameOver();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20;
			L_20 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
			NullCheck(L_20);
			GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_20, /*hidden argument*/NULL);
		}

IL_006e:
		{
			// foreach(Transform children in transform)
			RuntimeObject* L_21 = V_0;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_000e;
			}
		}

IL_0076:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_0;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_008b;
			}
		}

IL_0084:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(120)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Mino::CheckLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_CheckLines_mB36BB019217935859ABACEF1070CC7921411C52A (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = height -1; i >= 0; i--)//0から19行のラインを確認(縦)
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_height_15();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0033;
	}

IL_000a:
	{
		// if (HasLine(i))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = Mino_HasLine_m265ADFE0AC5B3B600A4F3A5394E16E5CF9EE24E6(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// deleteLineCont++;
		int32_t L_3 = __this->get_deleteLineCont_5();
		__this->set_deleteLineCont_5(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// DeleteLine(i);
		int32_t L_4 = V_0;
		Mino_DeleteLine_m39220816BE773805376EA8E8A083C84F76D65CD3(__this, L_4, /*hidden argument*/NULL);
		// RowDown(i);
		int32_t L_5 = V_0;
		Mino_RowDown_m436363373428ADD0BBF3B3E7AB6D5923E9681CBD(__this, L_5, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// for(int i = height -1; i >= 0; i--)//0から19行のラインを確認(縦)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_0033:
	{
		// for(int i = height -1; i >= 0; i--)//0から19行のラインを確認(縦)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// FindObjectOfType<GameManager>().AddScore(deleteLineCont);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8;
		L_8 = Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59(/*hidden argument*/Object_FindObjectOfType_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_m0CA667585A308591EA2D034698E634A8DEC4AA59_RuntimeMethod_var);
		int32_t L_9 = __this->get_deleteLineCont_5();
		NullCheck(L_8);
		GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Mino::HasLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mino_HasLine_m265ADFE0AC5B3B600A4F3A5394E16E5CF9EE24E6 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int j = 0; j < width; j++)//0から10列のラインを確認(横）
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (grid[j, i] == null) return false;
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_0 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_1 = V_0;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// if (grid[j, i] == null) return false;
		return (bool)0;
	}

IL_001a:
	{
		// for(int j = 0; j < width; j++)//0から10列のラインを確認(横）
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		// for(int j = 0; j < width; j++)//0から10列のラインを確認(横）
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_width_14();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Mino::DeleteLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_DeleteLine_m39220816BE773805376EA8E8A083C84F76D65CD3 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int j = 0; j <　width; j++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// Destroy(grid[j, i].gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_0 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_1 = V_0;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// grid[j, i] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_5 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_6 = V_0;
		int32_t L_7 = ___i0;
		NullCheck(L_5);
		(L_5)->SetAt(L_6, L_7, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// for(int j = 0; j <　width; j++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002b:
	{
		// for(int j = 0; j <　width; j++)
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_width_14();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mino::RowDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino_RowDown_m436363373428ADD0BBF3B3E7AB6D5923E9681CBD (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for(int y = i; y < height; y++)//消された行から最大行まで調べる
		int32_t L_0 = ___i0;
		V_0 = L_0;
		goto IL_008d;
	}

IL_0007:
	{
		// for(int j = 0; j < width; j++)//横の列すべて調べる
		V_1 = 0;
		goto IL_0081;
	}

IL_000b:
	{
		// if(grid[j,y] != null)//参照されていれば
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_1 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// grid[j, y - 1] = grid[j, y];//参照を１行下げる
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_6 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_9 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_6);
		(L_6)->SetAt(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), L_12);
		// grid[j, y] = null;
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_13 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(L_14, L_15, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// grid[j, y - 1].transform.position -= new Vector3(0, 1, 0);//ミノを一段下げる
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_16 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_grid_16();
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = (L_16)->GetAt(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)));
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = L_20;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_24, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// for(int j = 0; j < width; j++)//横の列すべて調べる
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0081:
	{
		// for(int j = 0; j < width; j++)//横の列すべて調べる
		int32_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		int32_t L_27 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_width_14();
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_000b;
		}
	}
	{
		// for(int y = i; y < height; y++)//消された行から最大行まで調べる
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008d:
	{
		// for(int y = i; y < height; y++)//消された行から最大行まで調べる
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		int32_t L_30 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_height_15();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mino::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino__ctor_mBA703411B01233B9FC9AD52DA837BAB79E38DC33 (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// float fallTime = 1f;//minoが落ちる時間
		__this->set_fallTime_8((1.0f));
		// float moveSensitivity = 0.5f;//ミノの移動感度
		__this->set_moveSensitivity_9((0.5f));
		// Vector3 spawnPositon = new Vector3(5f, 19f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (5.0f), (19.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_spawnPositon_13(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mino::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mino__cctor_mBC674F3E904C5783DEB48FA74A8A05A4E82826D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int width = 10;//ステージの横幅
		((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->set_width_14(((int32_t)10));
		// static int height = 20;//ステージの縦幅
		((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->set_height_15(((int32_t)20));
		// static Transform[,] grid = new Transform[width, height + allowableToerance];//ミノを積み上げるためのグリッド２次元配列
		int32_t L_0 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_width_14();
		int32_t L_1 = ((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->get_height_15();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)3)) };
		TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14* L_2 = (TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14*)GenArrayNew(TransformU5BU2CU5D_t3E38D1E921EAD91947752EE0A559511559A82D14_il2cpp_TypeInfo_var, L_3);
		((Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_StaticFields*)il2cpp_codegen_static_fields_for(Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_il2cpp_TypeInfo_var))->set_grid_16(L_2);
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
// System.Void SpawnMino::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino_Start_m7FF027E896445621FCB1600E079D0C561C175579 (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method)
{
	{
		// FirstMino();
		SpawnMino_FirstMino_m90AF34EDACFF37A450CEB7202E879496144A5CC7(__this, /*hidden argument*/NULL);
		// NextMinoCreate();
		SpawnMino_NextMinoCreate_m28C0FA7446819CFC42F7D56984F6DF328B01EC43(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnMino::FirstMino()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino_FirstMino_m90AF34EDACFF37A450CEB7202E879496144A5CC7 (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject firstMino =  Instantiate(Minos[Random.Range(0, Minos.Length)], transform.position, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Minos_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_Minos_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// firstMino.GetComponent<Mino>().HoldFlag = true;
		NullCheck(L_8);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_9;
		L_9 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_8, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_9);
		Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnMino::NextMinoCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino_NextMinoCreate_m28C0FA7446819CFC42F7D56984F6DF328B01EC43 (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int minoNum = Random.Range(0, Minos.Length);//次のミノのインデックスを取得
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Minos_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// GameObject nextObj = Instantiate(Minos[minoNum],nextPosition[minoNum],Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Minos_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_6 = __this->get_nextPosition_6();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m0F82A3C7863F14B58E645A095E032F971E9A2DCC_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// nextObj.GetComponent<Mino>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		NullCheck(L_11);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_12;
		L_12 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_11, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		// nextObj.GetComponent<Mino>().NextFlag = true;
		NullCheck(L_11);
		Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * L_13;
		L_13 = GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317(L_11, /*hidden argument*/GameObject_GetComponent_TisMino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9_m1871A17ADAF53576DBF8E89D2CB1CAE11A67D317_RuntimeMethod_var);
		NullCheck(L_13);
		Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnMino::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnMino__ctor_m338CCC4DA000E16A94DA4BC21D58859DE0925F8B (SpawnMino_t6CE6E8D92F5F21DA3D97CD1982F56522064CEFAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<int,Vector3> nextPosition = new Dictionary<int, Vector3>()
		// {
		//     {0, new Vector3(0.4f,22f,0f)},
		//     {1, new Vector3(0.2f,20.3f,0f)},
		//     {2, new Vector3(0.1f,21f,0f)},
		//     {3, new Vector3(0.5f,22f,0f)},
		//     {4, new Vector3(0.8f,22f,0f)},
		// };
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_0 = (Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE *)il2cpp_codegen_object_new(Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D(L_0, /*hidden argument*/Dictionary_2__ctor_m78B469506B3EFD0A6E02F637C2C7BFCF2F90C82D_RuntimeMethod_var);
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.400000006f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063(L_1, 0, L_2, /*hidden argument*/Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.200000003f), (20.2999992f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063(L_3, 1, L_4, /*hidden argument*/Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.100000001f), (21.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063(L_5, 2, L_6, /*hidden argument*/Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_7 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.5f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063(L_7, 3, L_8, /*hidden argument*/Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		Dictionary_2_t6DF6FE1AA1445C26924BEAA8800CB1085EAC74FE * L_9 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.800000012f), (22.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063(L_9, 4, L_10, /*hidden argument*/Dictionary_2_Add_m6BE4CC089CAF935BEEE6A786577507477347F063_RuntimeMethod_var);
		__this->set_nextPosition_6(L_9);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager/<ReStart>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReStartU3Ed__6__ctor_m1BB2DE5F4C0C9977972FBF2F851070CB879545C7 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<ReStart>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReStartU3Ed__6_System_IDisposable_Dispose_mEE81628236C59478A1FF135C8190841B2222ABA4 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<ReStart>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReStartU3Ed__6_MoveNext_m0F3C541CF9D46943FB9E9989C9FC4812620D6CE8 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<ReStart>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReStartU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73106FC3A1D7748F680B7B69F5F75EFBFE3C603A (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<ReStart>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReStartU3Ed__6_System_Collections_IEnumerator_Reset_m0BCE5EB1BF53B1E0F09481A0B219E33005627348 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReStartU3Ed__6_System_Collections_IEnumerator_Reset_m0BCE5EB1BF53B1E0F09481A0B219E33005627348_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<ReStart>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReStartU3Ed__6_System_Collections_IEnumerator_get_Current_mDED6FFAE9EAAA26B9096D9EB6836CFD406EE8918 (U3CReStartU3Ed__6_tF4ED5B8587540AF1B54A631700AE472195783D2F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_OverMinoFlag_m55A79334D14D8FE4F28A427B696B7DD0AC2BB4FF_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool OverMinoFlag { get; set; }//オーバーしたミノかどうかを判定するフラグ
		bool L_0 = __this->get_U3COverMinoFlagU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_HoldFlag_m9AEE6BA4B50CD964D54FEBE5D38C6438329AB448_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool HoldFlag { get; set; }//holdみのかどうかを判定するフラグ
		bool L_0 = __this->get_U3CHoldFlagU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mino_get_NextFlag_m9FBE6D66566DE089945B3B61248453B5B8A4D9D2_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, const RuntimeMethod* method)
{
	{
		// public bool NextFlag { get; set; }//次のミノかどうかを判定するフラグ
		bool L_0 = __this->get_U3CNextFlagU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_OverMinoFlag_m0285848605D1621387238B7F7C46009E3C33D4A5_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OverMinoFlag { get; set; }//オーバーしたミノかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3COverMinoFlagU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_NextFlag_m01909F3372FA8DD0C3DB0838A6B7EFEF8D531955_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NextFlag { get; set; }//次のミノかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3CNextFlagU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mino_set_HoldFlag_m143A61091389B1A3D534EB00121204077E73E4FE_inline (Mino_t104A22D894A2AB406766B5C315EF4A1EF53B3CF9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool HoldFlag { get; set; }//holdみのかどうかを判定するフラグ
		bool L_0 = ___value0;
		__this->set_U3CHoldFlagU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
