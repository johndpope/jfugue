//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/cache/RemovalNotification.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCacheRemovalNotification_RESTRICT
#define ComGoogleCommonCacheRemovalNotification_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheRemovalNotification_RESTRICT
#if !defined (_ComGoogleCommonCacheRemovalNotification_) && (ComGoogleCommonCacheRemovalNotification_INCLUDE_ALL || ComGoogleCommonCacheRemovalNotification_INCLUDE)
#define _ComGoogleCommonCacheRemovalNotification_

@class ComGoogleCommonCacheRemovalCauseEnum;

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_Entry_INCLUDE 1
#include "java/util/Map.h"


#define ComGoogleCommonCacheRemovalNotification_serialVersionUID 0LL

@interface ComGoogleCommonCacheRemovalNotification : NSObject < JavaUtilMap_Entry > {
}

- (instancetype)initWithId:(id)key
                    withId:(id)value
withComGoogleCommonCacheRemovalCauseEnum:(ComGoogleCommonCacheRemovalCauseEnum *)cause;

- (ComGoogleCommonCacheRemovalCauseEnum *)getCause;

- (jboolean)wasEvicted;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCacheRemovalNotification_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheRemovalNotification, serialVersionUID, jlong)
#endif
