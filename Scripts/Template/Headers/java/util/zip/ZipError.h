//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipError.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaUtilZipZipError_INCLUDE_ALL")
#ifdef JavaUtilZipZipError_RESTRICT
#define JavaUtilZipZipError_INCLUDE_ALL 0
#else
#define JavaUtilZipZipError_INCLUDE_ALL 1
#endif
#undef JavaUtilZipZipError_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipError_) && (JavaUtilZipZipError_INCLUDE_ALL || defined(JavaUtilZipZipError_INCLUDE))
#define JavaUtilZipZipError_

#define JavaLangInternalError_RESTRICT 1
#define JavaLangInternalError_INCLUDE 1
#include "../../../java/lang/InternalError.h"

/*!
 @brief Thrown when an unrecoverable zip error has occurred.
 @since 1.6
 */
@interface JavaUtilZipZipError : JavaLangInternalError

#pragma mark Public

/*!
 @brief Constructs a ZipError with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipError)

FOUNDATION_EXPORT void JavaUtilZipZipError_initWithNSString_(JavaUtilZipZipError *self, NSString *s);

FOUNDATION_EXPORT JavaUtilZipZipError *new_JavaUtilZipZipError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilZipZipError_INCLUDE_ALL")
