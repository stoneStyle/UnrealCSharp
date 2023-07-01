﻿#pragma once

#define COMBINE_GENERIC(Type, Arguments) FString::Printf(TEXT("%s`%s"), *Type, *Arguments)

#define CLASS_UTILS FString(TEXT("Utils"))

#define CLASS_ASSEMBLY_UTIL FString(TEXT("AssemblyUtil"))

#define CLASS_SYNCHRONIZATION_CONTEXT FString(TEXT("SynchronizationContext"))

#define CLASS_U_CLASS_ATTRIBUTE FString(TEXT("UClassAttribute"))

#define CLASS_U_STRUCT_ATTRIBUTE FString(TEXT("UStructAttribute"))

#define CLASS_U_ENUM_ATTRIBUTE FString(TEXT("UEnumAttribute"))

#define CLASS_U_FUNCTION_ATTRIBUTE FString(TEXT("UFunctionAttribute"))

#define CLASS_F_STRING FString(TEXT("FString"))

#define CLASS_F_NAME FString(TEXT("FName"))

#define CLASS_F_TEXT FString(TEXT("FText"))

#define TEMPLATE_T_ARRAY FString(TEXT("TArray"))

#define GENERIC_T_ARRAY COMBINE_GENERIC(TEMPLATE_T_ARRAY, FString(TEXT("1")))

#define CLASS_T_MAP FString(TEXT("TMap`2"))

#define CLASS_T_SET FString(TEXT("TSet`1"))

#define TEMPLATE_T_SUB_CLASS_OF FString(TEXT("TSubclassOf"))

#define GENERIC_T_SUB_CLASS_OF COMBINE_GENERIC(TEMPLATE_T_SUB_CLASS_OF, FString(TEXT("1")))

#define TEMPLATE_T_SCRIPT_INTERFACE FString(TEXT("TScriptInterface"))

#define GENERIC_T_SCRIPT_INTERFACE COMBINE_GENERIC(TEMPLATE_T_SCRIPT_INTERFACE, FString(TEXT("1")))

#define TEMPLATE_T_WEAK_OBJECT_PTR FString(TEXT("TWeakObjectPtr"))

#define GENERIC_T_WEAK_OBJECT_PTR COMBINE_GENERIC(TEMPLATE_T_WEAK_OBJECT_PTR, FString(TEXT("1")))

#define TEMPLATE_T_LAZY_OBJECT_PTR FString(TEXT("TLazyObjectPtr"))

#define GENERIC_T_LAZY_OBJECT_PTR COMBINE_GENERIC(TEMPLATE_T_LAZY_OBJECT_PTR, FString(TEXT("1")))

#define TEMPLATE_T_SOFT_OBJECT_PTR FString(TEXT("TSoftObjectPtr"))

#define GENERIC_T_SOFT_OBJECT_PTR COMBINE_GENERIC(TEMPLATE_T_SOFT_OBJECT_PTR, FString(TEXT("1")))

#define TEMPLATE_T_SOFT_CLASS_PTR FString(TEXT("TSoftClassPtr"))

#define GENERIC_T_SOFT_CLASS_PTR COMBINE_GENERIC(TEMPLATE_T_SOFT_CLASS_PTR, FString(TEXT("1")))
