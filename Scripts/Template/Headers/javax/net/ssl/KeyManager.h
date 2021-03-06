//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/KeyManager.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxNetSslKeyManager_INCLUDE_ALL")
#ifdef JavaxNetSslKeyManager_RESTRICT
#define JavaxNetSslKeyManager_INCLUDE_ALL 0
#else
#define JavaxNetSslKeyManager_INCLUDE_ALL 1
#endif
#undef JavaxNetSslKeyManager_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslKeyManager_) && (JavaxNetSslKeyManager_INCLUDE_ALL || defined(JavaxNetSslKeyManager_INCLUDE))
#define JavaxNetSslKeyManager_

/*!
 @brief This is the interface to implement in order to mark a class as a JSSE key
 managers so that key managers can be easily grouped.
 The key managers are
 responsible for handling the keys used to authenticate the local side to its
 peer,
 */
@protocol JavaxNetSslKeyManager < NSObject, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslKeyManager)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslKeyManager)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxNetSslKeyManager_INCLUDE_ALL")
