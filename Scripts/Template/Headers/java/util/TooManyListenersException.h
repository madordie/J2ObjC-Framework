//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TooManyListenersException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilTooManyListenersException_INCLUDE_ALL")
#ifdef JavaUtilTooManyListenersException_RESTRICT
#define JavaUtilTooManyListenersException_INCLUDE_ALL 0
#else
#define JavaUtilTooManyListenersException_INCLUDE_ALL 1
#endif
#undef JavaUtilTooManyListenersException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilTooManyListenersException_) && (JavaUtilTooManyListenersException_INCLUDE_ALL || defined(JavaUtilTooManyListenersException_INCLUDE))
#define JavaUtilTooManyListenersException_

#define JavaLangException_RESTRICT 1
#define JavaLangException_INCLUDE 1
#include "../../java/lang/Exception.h"

/*!
 @brief A <code>TooManyListenersException</code> is thrown when an attempt is made to add
 more than one listener to an event source which only supports a single
 listener.
 It is also thrown when the same listener is added more than once.
 */
@interface JavaUtilTooManyListenersException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>TooManyListenersException</code> with the current stack
 trace filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>TooManyListenersException</code> with the stack trace
 and message filled in.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTooManyListenersException)

FOUNDATION_EXPORT void JavaUtilTooManyListenersException_init(JavaUtilTooManyListenersException *self);

FOUNDATION_EXPORT JavaUtilTooManyListenersException *new_JavaUtilTooManyListenersException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilTooManyListenersException_initWithNSString_(JavaUtilTooManyListenersException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilTooManyListenersException *new_JavaUtilTooManyListenersException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTooManyListenersException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilTooManyListenersException_INCLUDE_ALL")
