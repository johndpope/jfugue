//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/InterfaceAddress.java
//

#ifndef _JavaNetInterfaceAddress_H_
#define _JavaNetInterfaceAddress_H_

@class JavaNetInet4Address;
@class JavaNetInet6Address;
@class JavaNetInetAddress;

#import "JreEmulation.h"

@interface JavaNetInterfaceAddress : NSObject {
}

- (instancetype)initWithJavaNetInet4Address:(JavaNetInet4Address *)address
                    withJavaNetInet4Address:(JavaNetInet4Address *)broadcastAddress
                    withJavaNetInet4Address:(JavaNetInet4Address *)mask;

- (instancetype)initWithJavaNetInet6Address:(JavaNetInet6Address *)address
                                  withShort:(jshort)prefixLength;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (JavaNetInetAddress *)getAddress;

- (JavaNetInetAddress *)getBroadcast;

- (jshort)getNetworkPrefixLength;

@end

__attribute__((always_inline)) inline void JavaNetInterfaceAddress_init() {}

#endif // _JavaNetInterfaceAddress_H_
