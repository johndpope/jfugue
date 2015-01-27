//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/Lists.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectLists_RESTRICT
#define ComGoogleCommonCollectLists_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectLists_RESTRICT
#if ComGoogleCommonCollectLists_$2_INCLUDE
#define ComGoogleCommonCollectLists_AbstractListWrapper_INCLUDE 1
#endif
#if ComGoogleCommonCollectLists_$1_INCLUDE
#define ComGoogleCommonCollectLists_RandomAccessListWrapper_INCLUDE 1
#endif
#if ComGoogleCommonCollectLists_RandomAccessListWrapper_INCLUDE
#define ComGoogleCommonCollectLists_AbstractListWrapper_INCLUDE 1
#endif
#if ComGoogleCommonCollectLists_RandomAccessReverseList_INCLUDE
#define ComGoogleCommonCollectLists_ReverseList_INCLUDE 1
#endif
#if ComGoogleCommonCollectLists_RandomAccessPartition_INCLUDE
#define ComGoogleCommonCollectLists_Partition_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectLists_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_INCLUDE)
#define _ComGoogleCommonCollectLists_

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@class JavaUtilArrayList;
@class JavaUtilConcurrentCopyOnWriteArrayList;
@class JavaUtilLinkedList;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;


@interface ComGoogleCommonCollectLists : NSObject {
}

+ (JavaUtilArrayList *)newArrayList OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayList *)newArrayListWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (jint)computeArrayListCapacityWithInt:(jint)arraySize;

+ (JavaUtilArrayList *)newArrayListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayList *)newArrayListWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayList *)newArrayListWithCapacityWithInt:(jint)initialArraySize OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayList *)newArrayListWithExpectedSizeWithInt:(jint)estimatedSize OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilLinkedList *)newLinkedList OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilLinkedList *)newLinkedListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentCopyOnWriteArrayList *)newCopyOnWriteArrayList OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentCopyOnWriteArrayList *)newCopyOnWriteArrayListWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilList>)asListWithId:(id)first
               withNSObjectArray:(IOSObjectArray *)rest;

+ (id<JavaUtilList>)asListWithId:(id)first
                          withId:(id)second
               withNSObjectArray:(IOSObjectArray *)rest;

+ (id<JavaUtilList>)cartesianProductWithJavaUtilList:(id<JavaUtilList>)lists;

+ (id<JavaUtilList>)cartesianProductWithJavaUtilListArray:(IOSObjectArray *)lists;

+ (id<JavaUtilList>)transformWithJavaUtilList:(id<JavaUtilList>)fromList
              withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<JavaUtilList>)partitionWithJavaUtilList:(id<JavaUtilList>)list
                                      withInt:(jint)size;

+ (ComGoogleCommonCollectImmutableList *)charactersOfWithNSString:(NSString *)string;

+ (id<JavaUtilList>)charactersOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

+ (id<JavaUtilList>)reverseWithJavaUtilList:(id<JavaUtilList>)list;

+ (jint)hashCodeImplWithJavaUtilList:(id<JavaUtilList>)list;

+ (jboolean)equalsImplWithJavaUtilList:(id<JavaUtilList>)list
                                withId:(id)object;

+ (jboolean)addAllImplWithJavaUtilList:(id<JavaUtilList>)list
                               withInt:(jint)index
                  withJavaLangIterable:(id<JavaLangIterable>)elements;

+ (jint)indexOfImplWithJavaUtilList:(id<JavaUtilList>)list
                             withId:(id)element;

+ (jint)lastIndexOfImplWithJavaUtilList:(id<JavaUtilList>)list
                                 withId:(id)element;

+ (id<JavaUtilListIterator>)listIteratorImplWithJavaUtilList:(id<JavaUtilList>)list
                                                     withInt:(jint)index;

+ (id<JavaUtilList>)subListImplWithJavaUtilList:(id<JavaUtilList>)list
                                        withInt:(jint)fromIndex
                                        withInt:(jint)toIndex;

+ (id<JavaUtilList>)castWithJavaLangIterable:(id<JavaLangIterable>)iterable;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_init() {}
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayList();
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithNSObjectArray_(IOSObjectArray *elements);
FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_computeArrayListCapacityWithInt_(jint arraySize);
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithJavaUtilIterator_(id<JavaUtilIterator> elements);
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithCapacityWithInt_(jint initialArraySize);
FOUNDATION_EXPORT JavaUtilArrayList *ComGoogleCommonCollectLists_newArrayListWithExpectedSizeWithInt_(jint estimatedSize);
FOUNDATION_EXPORT JavaUtilLinkedList *ComGoogleCommonCollectLists_newLinkedList();
FOUNDATION_EXPORT JavaUtilLinkedList *ComGoogleCommonCollectLists_newLinkedListWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *ComGoogleCommonCollectLists_newCopyOnWriteArrayList();
FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *ComGoogleCommonCollectLists_newCopyOnWriteArrayListWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_asListWithId_withNSObjectArray_(id first, IOSObjectArray *rest);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_asListWithId_withId_withNSObjectArray_(id first, id second, IOSObjectArray *rest);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_cartesianProductWithJavaUtilList_(id<JavaUtilList> lists);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_cartesianProductWithJavaUtilListArray_(IOSObjectArray *lists);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_transformWithJavaUtilList_withComGoogleCommonBaseFunction_(id<JavaUtilList> fromList, id<ComGoogleCommonBaseFunction> function);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_partitionWithJavaUtilList_withInt_(id<JavaUtilList> list, jint size);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonCollectLists_charactersOfWithNSString_(NSString *string);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_charactersOfWithJavaLangCharSequence_(id<JavaLangCharSequence> sequence);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_reverseWithJavaUtilList_(id<JavaUtilList> list);
FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_hashCodeImplWithJavaUtilList_(id<JavaUtilList> list);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectLists_equalsImplWithJavaUtilList_withId_(id<JavaUtilList> list, id object);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectLists_addAllImplWithJavaUtilList_withInt_withJavaLangIterable_(id<JavaUtilList> list, jint index, id<JavaLangIterable> elements);
FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_indexOfImplWithJavaUtilList_withId_(id<JavaUtilList> list, id element);
FOUNDATION_EXPORT jint ComGoogleCommonCollectLists_lastIndexOfImplWithJavaUtilList_withId_(id<JavaUtilList> list, id element);
FOUNDATION_EXPORT id<JavaUtilListIterator> ComGoogleCommonCollectLists_listIteratorImplWithJavaUtilList_withInt_(id<JavaUtilList> list, jint index);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_subListImplWithJavaUtilList_withInt_withInt_(id<JavaUtilList> list, jint fromIndex, jint toIndex);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectLists_castWithJavaLangIterable_(id<JavaLangIterable> iterable);
#endif
#if !defined (_ComGoogleCommonCollectLists_OnePlusArrayList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_OnePlusArrayList_INCLUDE)
#define _ComGoogleCommonCollectLists_OnePlusArrayList_

@class IOSObjectArray;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


#define ComGoogleCommonCollectLists_OnePlusArrayList_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_OnePlusArrayList : JavaUtilAbstractList < JavaIoSerializable, JavaUtilRandomAccess > {
 @public
  id first_;
  IOSObjectArray *rest_;
}

- (instancetype)initWithId:(id)first
         withNSObjectArray:(IOSObjectArray *)rest;

- (jint)size;

- (id)getWithInt:(jint)index;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_OnePlusArrayList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_OnePlusArrayList, first_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_OnePlusArrayList, rest_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_OnePlusArrayList, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectLists_TwoPlusArrayList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_TwoPlusArrayList_INCLUDE)
#define _ComGoogleCommonCollectLists_TwoPlusArrayList_

@class IOSObjectArray;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


#define ComGoogleCommonCollectLists_TwoPlusArrayList_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_TwoPlusArrayList : JavaUtilAbstractList < JavaIoSerializable, JavaUtilRandomAccess > {
 @public
  id first_;
  id second_;
  IOSObjectArray *rest_;
}

- (instancetype)initWithId:(id)first
                    withId:(id)second
         withNSObjectArray:(IOSObjectArray *)rest;

- (jint)size;

- (id)getWithInt:(jint)index;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_TwoPlusArrayList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TwoPlusArrayList, first_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TwoPlusArrayList, second_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TwoPlusArrayList, rest_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_TwoPlusArrayList, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectLists_TransformingSequentialList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_TransformingSequentialList_INCLUDE)
#define _ComGoogleCommonCollectLists_TransformingSequentialList_

@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

#define JavaUtilAbstractSequentialList_RESTRICT 1
#define JavaUtilAbstractSequentialList_INCLUDE 1
#include "java/util/AbstractSequentialList.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectLists_TransformingSequentialList_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_TransformingSequentialList : JavaUtilAbstractSequentialList < JavaIoSerializable > {
 @public
  id<JavaUtilList> fromList_;
  id<ComGoogleCommonBaseFunction> function_;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)fromList
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (void)clear;

- (jint)size;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_TransformingSequentialList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TransformingSequentialList, fromList_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TransformingSequentialList, function_, id<ComGoogleCommonBaseFunction>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_TransformingSequentialList, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectLists_TransformingSequentialList_$1_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_TransformingSequentialList_$1_INCLUDE)
#define _ComGoogleCommonCollectLists_TransformingSequentialList_$1_

@class ComGoogleCommonCollectLists_TransformingSequentialList;
@protocol JavaUtilListIterator;

#define ComGoogleCommonCollectTransformedListIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedListIterator_INCLUDE 1
#include "com/google/common/collect/TransformedListIterator.h"


@interface ComGoogleCommonCollectLists_TransformingSequentialList_$1 : ComGoogleCommonCollectTransformedListIterator {
}

- (id)transformWithId:(id)from;

- (instancetype)initWithComGoogleCommonCollectLists_TransformingSequentialList:(ComGoogleCommonCollectLists_TransformingSequentialList *)outer$
                                                      withJavaUtilListIterator:(id<JavaUtilListIterator>)arg$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_TransformingSequentialList_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_TransformingRandomAccessList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_TransformingRandomAccessList_INCLUDE)
#define _ComGoogleCommonCollectLists_TransformingRandomAccessList_

@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectLists_TransformingRandomAccessList_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_TransformingRandomAccessList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable > {
 @public
  id<JavaUtilList> fromList_;
  id<ComGoogleCommonBaseFunction> function_;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)fromList
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (void)clear;

- (id)getWithInt:(jint)index;

- (jboolean)isEmpty;

- (id)removeWithInt:(jint)index;

- (jint)size;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_TransformingRandomAccessList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TransformingRandomAccessList, fromList_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_TransformingRandomAccessList, function_, id<ComGoogleCommonBaseFunction>)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_TransformingRandomAccessList, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectLists_Partition_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_Partition_INCLUDE)
#define _ComGoogleCommonCollectLists_Partition_

@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"


@interface ComGoogleCommonCollectLists_Partition : JavaUtilAbstractList {
 @public
  id<JavaUtilList> list_;
  jint size__;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)list
                             withInt:(jint)size;

- (id<JavaUtilList>)getWithInt:(jint)index;

- (jint)size;

- (jboolean)isEmpty;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_Partition_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_Partition, list_, id<JavaUtilList>)
#endif
#if !defined (_ComGoogleCommonCollectLists_RandomAccessPartition_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_RandomAccessPartition_INCLUDE)
#define _ComGoogleCommonCollectLists_RandomAccessPartition_

@protocol JavaUtilList;

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


@interface ComGoogleCommonCollectLists_RandomAccessPartition : ComGoogleCommonCollectLists_Partition < JavaUtilRandomAccess > {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)list
                             withInt:(jint)size;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_RandomAccessPartition_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_StringAsImmutableList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_StringAsImmutableList_INCLUDE)
#define _ComGoogleCommonCollectLists_StringAsImmutableList_

@class JavaLangCharacter;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectLists_StringAsImmutableList : ComGoogleCommonCollectImmutableList {
 @public
  jint hash__;
}

- (instancetype)initWithNSString:(NSString *)string;

- (jint)indexOfWithId:(id)object;

- (jint)lastIndexOfWithId:(id)object;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (jboolean)isPartialView;

- (JavaLangCharacter *)getWithInt:(jint)index;

- (jint)size;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_StringAsImmutableList_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_CharSequenceAsList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_CharSequenceAsList_INCLUDE)
#define _ComGoogleCommonCollectLists_CharSequenceAsList_

@class JavaLangCharacter;
@protocol JavaLangCharSequence;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"


@interface ComGoogleCommonCollectLists_CharSequenceAsList : JavaUtilAbstractList {
}

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (JavaLangCharacter *)getWithInt:(jint)index;

- (jboolean)containsWithId:(id)o;

- (jint)indexOfWithId:(id)o;

- (jint)lastIndexOfWithId:(id)o;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)o;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_CharSequenceAsList_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_ReverseList_$1_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_ReverseList_$1_INCLUDE)
#define _ComGoogleCommonCollectLists_ReverseList_$1_

@class ComGoogleCommonCollectLists_ReverseList;

#define JavaUtilListIterator_RESTRICT 1
#define JavaUtilListIterator_INCLUDE 1
#include "java/util/ListIterator.h"


@interface ComGoogleCommonCollectLists_ReverseList_$1 : NSObject < JavaUtilListIterator > {
 @public
  jboolean canRemove_;
  jboolean canSet_;
}

- (void)addWithId:(id)e;

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)remove;

- (void)setWithId:(id)e;

- (instancetype)initWithComGoogleCommonCollectLists_ReverseList:(ComGoogleCommonCollectLists_ReverseList *)outer$
                                       withJavaUtilListIterator:(id<JavaUtilListIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_ReverseList_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_ReverseList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_ReverseList_INCLUDE)
#define _ComGoogleCommonCollectLists_ReverseList_

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"


@interface ComGoogleCommonCollectLists_ReverseList : JavaUtilAbstractList {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)forwardList;

- (id<JavaUtilList>)getForwardList;

- (void)addWithInt:(jint)index
            withId:(id)element;

- (void)clear;

- (id)removeWithInt:(jint)index;

- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (id)getWithInt:(jint)index;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (jint)indexOfWithId:(id)o;

- (jint)lastIndexOfWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_ReverseList_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_RandomAccessReverseList_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_RandomAccessReverseList_INCLUDE)
#define _ComGoogleCommonCollectLists_RandomAccessReverseList_

@protocol JavaUtilList;

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


@interface ComGoogleCommonCollectLists_RandomAccessReverseList : ComGoogleCommonCollectLists_ReverseList < JavaUtilRandomAccess > {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)forwardList;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_RandomAccessReverseList_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_AbstractListWrapper_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_AbstractListWrapper_INCLUDE)
#define _ComGoogleCommonCollectLists_AbstractListWrapper_

@protocol JavaUtilCollection;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"


@interface ComGoogleCommonCollectLists_AbstractListWrapper : JavaUtilAbstractList {
 @public
  id<JavaUtilList> backingList_;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)backingList;

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id)getWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (jboolean)containsWithId:(id)o;

- (jint)size;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_AbstractListWrapper_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLists_AbstractListWrapper, backingList_, id<JavaUtilList>)
#endif
#if !defined (_ComGoogleCommonCollectLists_RandomAccessListWrapper_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_RandomAccessListWrapper_INCLUDE)
#define _ComGoogleCommonCollectLists_RandomAccessListWrapper_

@protocol JavaUtilList;

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


@interface ComGoogleCommonCollectLists_RandomAccessListWrapper : ComGoogleCommonCollectLists_AbstractListWrapper < JavaUtilRandomAccess > {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)backingList;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_RandomAccessListWrapper_init() {}
#endif
#if !defined (_ComGoogleCommonCollectLists_$1_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_$1_INCLUDE)
#define _ComGoogleCommonCollectLists_$1_

@protocol JavaUtilList;
@protocol JavaUtilListIterator;


#define ComGoogleCommonCollectLists_$1_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_$1 : ComGoogleCommonCollectLists_RandomAccessListWrapper {
}

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)arg$0;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_$1_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_$1, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectLists_$2_) && (ComGoogleCommonCollectLists_INCLUDE_ALL || ComGoogleCommonCollectLists_$2_INCLUDE)
#define _ComGoogleCommonCollectLists_$2_

@protocol JavaUtilList;
@protocol JavaUtilListIterator;


#define ComGoogleCommonCollectLists_$2_serialVersionUID 0LL

@interface ComGoogleCommonCollectLists_$2 : ComGoogleCommonCollectLists_AbstractListWrapper {
}

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)arg$0;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectLists_$2_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectLists_$2, serialVersionUID, jlong)
#endif
