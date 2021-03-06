//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/crypto/ShortBufferException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaxCryptoShortBufferException_INCLUDE_ALL")
#ifdef JavaxCryptoShortBufferException_RESTRICT
#define JavaxCryptoShortBufferException_INCLUDE_ALL 0
#else
#define JavaxCryptoShortBufferException_INCLUDE_ALL 1
#endif
#undef JavaxCryptoShortBufferException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

/*!
 @author Vera Y. Petrashkova
 @version $Revision$
 */

#if !defined (JavaxCryptoShortBufferException_) && (JavaxCryptoShortBufferException_INCLUDE_ALL || defined(JavaxCryptoShortBufferException_INCLUDE))
#define JavaxCryptoShortBufferException_

#define JavaSecurityGeneralSecurityException_RESTRICT 1
#define JavaSecurityGeneralSecurityException_INCLUDE 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief The exception that is thrown when the result of an operation is attempted to
 store in a user provided buffer that is too small.
 */
@interface JavaxCryptoShortBufferException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new instance of <code>ShortBufferException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new instance of <code>ShortBufferException</code> with the
 specified message
 @param msg
 the exception message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoShortBufferException)

FOUNDATION_EXPORT void JavaxCryptoShortBufferException_initWithNSString_(JavaxCryptoShortBufferException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoShortBufferException *new_JavaxCryptoShortBufferException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxCryptoShortBufferException_init(JavaxCryptoShortBufferException *self);

FOUNDATION_EXPORT JavaxCryptoShortBufferException *new_JavaxCryptoShortBufferException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoShortBufferException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxCryptoShortBufferException_INCLUDE_ALL")
