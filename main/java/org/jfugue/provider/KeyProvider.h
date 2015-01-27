//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/provider/KeyProvider.java
//

#ifndef _OrgJfugueProviderKeyProvider_H_
#define _OrgJfugueProviderKeyProvider_H_

@class OrgJfugueTheoryKey;

#import "JreEmulation.h"

@protocol OrgJfugueProviderKeyProvider < NSObject, JavaObject >

- (OrgJfugueTheoryKey *)createKeyWithNSString:(NSString *)keySignature;

- (NSString *)createKeyStringWithByte:(jbyte)key
                             withByte:(jbyte)scale_;

- (jbyte)convertKeyToByteWithOrgJfugueTheoryKey:(OrgJfugueTheoryKey *)key;

@end

__attribute__((always_inline)) inline void OrgJfugueProviderKeyProvider_init() {}

#endif // _OrgJfugueProviderKeyProvider_H_