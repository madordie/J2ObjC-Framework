//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/annotation/Resources.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaxAnnotationResources_INCLUDE_ALL")
#ifdef JavaxAnnotationResources_RESTRICT
#define JavaxAnnotationResources_INCLUDE_ALL 0
#else
#define JavaxAnnotationResources_INCLUDE_ALL 1
#endif
#undef JavaxAnnotationResources_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationResources_) && (JavaxAnnotationResources_INCLUDE_ALL || defined(JavaxAnnotationResources_INCLUDE))
#define JavaxAnnotationResources_

#define JavaLangAnnotationAnnotation_RESTRICT 1
#define JavaLangAnnotationAnnotation_INCLUDE 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSObjectArray;

/*!
 @brief javax.annotation.Resources annotation.
 No code was referenced,
 created using just its public API.
 */
@protocol JavaxAnnotationResources < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaxAnnotationResources : NSObject < JavaxAnnotationResources > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationResources)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResources)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxAnnotationResources_INCLUDE_ALL")
