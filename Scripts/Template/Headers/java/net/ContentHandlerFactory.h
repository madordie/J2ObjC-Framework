//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ContentHandlerFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaNetContentHandlerFactory_INCLUDE_ALL")
#ifdef JavaNetContentHandlerFactory_RESTRICT
#define JavaNetContentHandlerFactory_INCLUDE_ALL 0
#else
#define JavaNetContentHandlerFactory_INCLUDE_ALL 1
#endif
#undef JavaNetContentHandlerFactory_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetContentHandlerFactory_) && (JavaNetContentHandlerFactory_INCLUDE_ALL || defined(JavaNetContentHandlerFactory_INCLUDE))
#define JavaNetContentHandlerFactory_

@class JavaNetContentHandler;

/*!
 @brief Defines a factory which is responsible for creating a <code>ContentHandler</code>.
 - seealso: ContentHandler
 */
@protocol JavaNetContentHandlerFactory < NSObject, JavaObject >

/*!
 @brief Creates a content handler to handle <code>contentType</code>.
 @param contentType
 specifies the content type which is handled by the returned
 <code>ContentHandler</code>.
 @return content handler object for a specific content type.
 */
- (JavaNetContentHandler *)createContentHandlerWithNSString:(NSString *)contentType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetContentHandlerFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetContentHandlerFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNetContentHandlerFactory_INCLUDE_ALL")
