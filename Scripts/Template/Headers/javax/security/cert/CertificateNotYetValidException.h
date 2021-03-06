//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/CertificateNotYetValidException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("JavaxSecurityCertCertificateNotYetValidException_INCLUDE_ALL")
#ifdef JavaxSecurityCertCertificateNotYetValidException_RESTRICT
#define JavaxSecurityCertCertificateNotYetValidException_INCLUDE_ALL 0
#else
#define JavaxSecurityCertCertificateNotYetValidException_INCLUDE_ALL 1
#endif
#undef JavaxSecurityCertCertificateNotYetValidException_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxSecurityCertCertificateNotYetValidException_) && (JavaxSecurityCertCertificateNotYetValidException_INCLUDE_ALL || defined(JavaxSecurityCertCertificateNotYetValidException_INCLUDE))
#define JavaxSecurityCertCertificateNotYetValidException_

#define JavaxSecurityCertCertificateException_RESTRICT 1
#define JavaxSecurityCertCertificateException_INCLUDE 1
#include "../../../javax/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when a <code>Certificate</code> is not yet valid.
 <p>
 Note: This package is provided only for compatibility reasons. It contains a
 simplified version of the java.security.cert package that was previously used
 by JSSE (Java SSL package). All applications that do not have to be
 compatible with older versions of JSSE (that is before Java SDK 1.5) should
 only use java.security.cert.
 */
@interface JavaxSecurityCertCertificateNotYetValidException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code> with the specified
 message.
 @param msg
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateNotYetValidException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(JavaxSecurityCertCertificateNotYetValidException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_init(JavaxSecurityCertCertificateNotYetValidException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateNotYetValidException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaxSecurityCertCertificateNotYetValidException_INCLUDE_ALL")
