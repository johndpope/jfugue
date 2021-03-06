//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/CodeSource.java
//

#ifndef _JavaSecurityCodeSource_H_
#define _JavaSecurityCodeSource_H_

@class IOSObjectArray;
@class JavaNetURL;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@interface JavaSecurityCodeSource : NSObject < JavaIoSerializable > {
}

- (IOSObjectArray *)getObjects;

- (IOSObjectArray *)getCodeSigners;

- (JavaNetURL *)getLocation;

- (jboolean)impliesWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecurityCodeSource_init() {}

#endif // _JavaSecurityCodeSource_H_
