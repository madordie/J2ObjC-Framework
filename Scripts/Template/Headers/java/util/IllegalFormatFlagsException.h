//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatFlagsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilIllegalFormatFlagsException_INCLUDE_ALL")
#ifdef JavaUtilIllegalFormatFlagsException_RESTRICT
#define JavaUtilIllegalFormatFlagsException_INCLUDE_ALL 0
#else
#define JavaUtilIllegalFormatFlagsException_INCLUDE_ALL 1
#endif
#undef JavaUtilIllegalFormatFlagsException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllegalFormatFlagsException_) && (JavaUtilIllegalFormatFlagsException_INCLUDE_ALL || defined(JavaUtilIllegalFormatFlagsException_INCLUDE))
#define JavaUtilIllegalFormatFlagsException_

#define JavaUtilIllegalFormatException_RESTRICT 1
#define JavaUtilIllegalFormatException_INCLUDE 1
#include "../../java/util/IllegalFormatException.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "../../java/io/Serializable.h"

/*!
 @brief An <code>IllegalFormatFlagsException</code> will be thrown if the combination of
 the format flags is illegal.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilIllegalFormatFlagsException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalFormatFlagsException</code> with the specified
 flags.
 @param flags
 the specified flags.
 */
- (instancetype)initWithNSString:(NSString *)flags;

/*!
 @brief Returns the flags that are illegal.
 @return the flags that are illegal.
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatFlagsException_initWithNSString_(JavaUtilIllegalFormatFlagsException *self, NSString *flags);

FOUNDATION_EXPORT JavaUtilIllegalFormatFlagsException *new_JavaUtilIllegalFormatFlagsException_initWithNSString_(NSString *flags) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatFlagsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilIllegalFormatFlagsException_INCLUDE_ALL")
