//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ComparableTimSort.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("JavaUtilComparableTimSort_INCLUDE_ALL")
#ifdef JavaUtilComparableTimSort_RESTRICT
#define JavaUtilComparableTimSort_INCLUDE_ALL 0
#else
#define JavaUtilComparableTimSort_INCLUDE_ALL 1
#endif
#undef JavaUtilComparableTimSort_RESTRICT

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilComparableTimSort_) && (JavaUtilComparableTimSort_INCLUDE_ALL || defined(JavaUtilComparableTimSort_INCLUDE))
#define JavaUtilComparableTimSort_

@class IOSObjectArray;

/*!
 @brief This is a near duplicate of <code>TimSort</code>, modified for use with
 arrays of objects that implement <code>Comparable</code>, instead of using
 explicit comparators.
 <p>If you are using an optimizing VM, you may find that ComparableTimSort
 offers no performance benefit over TimSort in conjunction with a
 comparator that simply returns <code>((Comparable)first).compareTo(Second)</code>.
 If this is the case, you are better off deleting ComparableTimSort to
 eliminate the code duplication.  (See Arrays.java for details.)
 */
@interface JavaUtilComparableTimSort : NSObject

#pragma mark Package-Private

+ (void)sortWithNSObjectArray:(IOSObjectArray *)a;

+ (void)sortWithNSObjectArray:(IOSObjectArray *)a
                      withInt:(jint)lo
                      withInt:(jint)hi;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilComparableTimSort)

FOUNDATION_EXPORT void JavaUtilComparableTimSort_sortWithNSObjectArray_(IOSObjectArray *a);

FOUNDATION_EXPORT void JavaUtilComparableTimSort_sortWithNSObjectArray_withInt_withInt_(IOSObjectArray *a, jint lo, jint hi);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilComparableTimSort)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("JavaUtilComparableTimSort_INCLUDE_ALL")
