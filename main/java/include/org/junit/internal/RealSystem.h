//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/internal/RealSystem.java
//

#ifndef _OrgJunitInternalRealSystem_H_
#define _OrgJunitInternalRealSystem_H_

@class JavaIoPrintStream;

#import "JreEmulation.h"
#include "org/junit/internal/JUnitSystem.h"

@interface OrgJunitInternalRealSystem : NSObject < OrgJunitInternalJUnitSystem > {
}

- (void)exitWithInt:(jint)code;

- (JavaIoPrintStream *)out;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitInternalRealSystem_init() {}

#endif // _OrgJunitInternalRealSystem_H_
