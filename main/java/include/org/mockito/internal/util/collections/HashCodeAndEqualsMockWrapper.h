//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/collections/HashCodeAndEqualsMockWrapper.java
//

#ifndef _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_H_
#define _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_H_

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper : NSObject {
 @public
  id mockInstance_;
}

- (instancetype)initWithId:(id)mockInstance;

- (id)get;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

+ (OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *)ofWithId:(id)mock;

- (NSString *)description;

- (NSString *)typeInstanceString;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper, mockInstance_, id)
FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper *OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_ofWithId_(id mock);

#endif // _OrgMockitoInternalUtilCollectionsHashCodeAndEqualsMockWrapper_H_