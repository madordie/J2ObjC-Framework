//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/MGF1ParameterSpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaSecuritySpecMGF1ParameterSpec_INCLUDE_ALL")
#ifdef JavaSecuritySpecMGF1ParameterSpec_RESTRICT
#define JavaSecuritySpecMGF1ParameterSpec_INCLUDE_ALL 0
#else
#define JavaSecuritySpecMGF1ParameterSpec_INCLUDE_ALL 1
#endif
#undef JavaSecuritySpecMGF1ParameterSpec_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecMGF1ParameterSpec_) && (JavaSecuritySpecMGF1ParameterSpec_INCLUDE_ALL || defined(JavaSecuritySpecMGF1ParameterSpec_INCLUDE))
#define JavaSecuritySpecMGF1ParameterSpec_

#define JavaSecuritySpecAlgorithmParameterSpec_RESTRICT 1
#define JavaSecuritySpecAlgorithmParameterSpec_INCLUDE 1
#include "../../../java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief The parameter specification for the Mask Generation Function (MGF1) in
 the RSA-PSS Signature and OAEP Padding scheme.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard
 */
@interface JavaSecuritySpecMGF1ParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA1;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA256;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA384;

+ (JavaSecuritySpecMGF1ParameterSpec *)SHA512;

#pragma mark Public

/*!
 @brief Creates a new <code>MGF1ParameterSpec</code> with the specified message digest
 algorithm name.
 @param mdName
 the name of the message digest algorithm.
 */
- (instancetype)initWithNSString:(NSString *)mdName;

/*!
 @brief Returns the name of the message digest algorithm.
 @return the name of the message digest algorithm.
 */
- (NSString *)getDigestAlgorithm;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecMGF1ParameterSpec)

/*!
 @brief The predefined MGF1 parameter specification with an "SHA-1" message
 digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA1();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA1, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The predefined MGF1 parameter specification with an "SHA-256" message
 digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA256();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA256;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA256, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The predefined MGF1 parameter specification with an "SHA-384" message
 digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA384();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA384;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA384, JavaSecuritySpecMGF1ParameterSpec *)

/*!
 @brief The predefined MGF1 parameter specification with an "SHA-512" message
 digest.
 */
inline JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_get_SHA512();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA512;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecMGF1ParameterSpec, SHA512, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(JavaSecuritySpecMGF1ParameterSpec *self, NSString *mdName);

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *new_JavaSecuritySpecMGF1ParameterSpec_initWithNSString_(NSString *mdName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecMGF1ParameterSpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaSecuritySpecMGF1ParameterSpec_INCLUDE_ALL")
