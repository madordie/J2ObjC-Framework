//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/TransformerHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("JavaxXmlTransformSaxTransformerHandler_INCLUDE_ALL")
#ifdef JavaxXmlTransformSaxTransformerHandler_RESTRICT
#define JavaxXmlTransformSaxTransformerHandler_INCLUDE_ALL 0
#else
#define JavaxXmlTransformSaxTransformerHandler_INCLUDE_ALL 1
#endif
#undef JavaxXmlTransformSaxTransformerHandler_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformSaxTransformerHandler_) && (JavaxXmlTransformSaxTransformerHandler_INCLUDE_ALL || defined(JavaxXmlTransformSaxTransformerHandler_INCLUDE))
#define JavaxXmlTransformSaxTransformerHandler_

#define OrgXmlSaxContentHandler_RESTRICT 1
#define OrgXmlSaxContentHandler_INCLUDE 1
#include "../../../../org/xml/sax/ContentHandler.h"

#define OrgXmlSaxExtLexicalHandler_RESTRICT 1
#define OrgXmlSaxExtLexicalHandler_INCLUDE 1
#include "../../../../org/xml/sax/ext/LexicalHandler.h"

#define OrgXmlSaxDTDHandler_RESTRICT 1
#define OrgXmlSaxDTDHandler_INCLUDE 1
#include "../../../../org/xml/sax/DTDHandler.h"

@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformResult;

/*!
 @brief A TransformerHandler
 listens for SAX ContentHandler parse events and transforms
 them to a Result.
 */
@protocol JavaxXmlTransformSaxTransformerHandler < OrgXmlSaxContentHandler, OrgXmlSaxExtLexicalHandler, OrgXmlSaxDTDHandler, NSObject, JavaObject >

/*!
 @brief <p>Set  the <code>Result</code> associated with this
 <code>TransformerHandler</code> to be used for the transformation.
 </p>
 @param result A <code>Result</code> instance, should not be
 <code>null</code>.
 @throws IllegalArgumentException if result is invalid for some reason.
 */
- (void)setResultWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)result;

/*!
 @brief Set the base ID (URI or system ID) from where relative
 URLs will be resolved.
 @param systemID Base URI for the source tree.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

/*!
 @brief Get the base ID (URI or system ID) from where relative
 URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief <p>Get the <code>Transformer</code> associated with this handler, which
 is needed in order to set parameters and output properties.
 </p>
 @return <code>Transformer</code> associated with this
 <code>TransformerHandler</code>.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxTransformerHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxTransformerHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxXmlTransformSaxTransformerHandler_INCLUDE_ALL")
