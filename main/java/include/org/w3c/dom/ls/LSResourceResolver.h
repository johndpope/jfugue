//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSResourceResolver.java
//

#ifndef _OrgW3cDomLsLSResourceResolver_H_
#define _OrgW3cDomLsLSResourceResolver_H_

@protocol OrgW3cDomLsLSInput;

#import "JreEmulation.h"

@protocol OrgW3cDomLsLSResourceResolver < NSObject, JavaObject >

- (id<OrgW3cDomLsLSInput>)resolveResourceWithNSString:(NSString *)type
                                         withNSString:(NSString *)namespaceURI
                                         withNSString:(NSString *)publicId
                                         withNSString:(NSString *)systemId
                                         withNSString:(NSString *)baseURI;

@end

__attribute__((always_inline)) inline void OrgW3cDomLsLSResourceResolver_init() {}

#endif // _OrgW3cDomLsLSResourceResolver_H_
