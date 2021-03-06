//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelectionKey.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("JavaNioChannelsSpiAbstractSelectionKey_INCLUDE_ALL")
#ifdef JavaNioChannelsSpiAbstractSelectionKey_RESTRICT
#define JavaNioChannelsSpiAbstractSelectionKey_INCLUDE_ALL 0
#else
#define JavaNioChannelsSpiAbstractSelectionKey_INCLUDE_ALL 1
#endif
#undef JavaNioChannelsSpiAbstractSelectionKey_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSpiAbstractSelectionKey_) && (JavaNioChannelsSpiAbstractSelectionKey_INCLUDE_ALL || defined(JavaNioChannelsSpiAbstractSelectionKey_INCLUDE))
#define JavaNioChannelsSpiAbstractSelectionKey_

#define JavaNioChannelsSelectionKey_RESTRICT 1
#define JavaNioChannelsSelectionKey_INCLUDE 1
#include "../../../../java/nio/channels/SelectionKey.h"

/*!
 @brief <code>AbstractSelectionKey</code> is the base implementation class for selection keys.
 It implements validation and cancellation methods.
 */
@interface JavaNioChannelsSpiAbstractSelectionKey : JavaNioChannelsSelectionKey {
 @public
  jboolean isValid_;
}

#pragma mark Public

/*!
 @brief Cancels this key.
 <p>
 A key that has been canceled is no longer valid. Calling this method on
 an already canceled key does nothing.
 */
- (void)cancel;

/*!
 @brief Indicates whether this key is valid.
 A key is valid as long as it has not
 been canceled.
 @return <code>true</code> if this key has not been canceled, <code>false</code>
 otherwise.
 */
- (jboolean)isValid;

#pragma mark Protected

/*!
 @brief Constructs a new <code>AbstractSelectionKey</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelectionKey)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelectionKey_init(JavaNioChannelsSpiAbstractSelectionKey *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelectionKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaNioChannelsSpiAbstractSelectionKey_INCLUDE_ALL")
