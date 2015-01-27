//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/InetSocketAddress.java
//

#ifndef _JavaNetInetSocketAddress_H_
#define _JavaNetInetSocketAddress_H_

@class JavaIoObjectInputStream;
@class JavaNetInetAddress;

#import "JreEmulation.h"
#include "java/net/SocketAddress.h"

#define JavaNetInetSocketAddress_serialVersionUID 5076001401234631237LL

@interface JavaNetInetSocketAddress : JavaNetSocketAddress {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)port;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                   withInt:(jint)port;

- (instancetype)initWithNSString:(NSString *)host
                         withInt:(jint)port;

- (instancetype)initWithNSString:(NSString *)hostname
                         withInt:(jint)port
                     withBoolean:(jboolean)needResolved;

+ (JavaNetInetSocketAddress *)createUnresolvedWithNSString:(NSString *)host
                                                   withInt:(jint)port;

- (jint)getPort;

- (JavaNetInetAddress *)getAddress;

- (NSString *)getHostName;

- (NSString *)getHostString;

- (jboolean)isUnresolved;

- (NSString *)description;

- (jboolean)isEqual:(id)socketAddr;

- (NSUInteger)hash;

@end

__attribute__((always_inline)) inline void JavaNetInetSocketAddress_init() {}
FOUNDATION_EXPORT JavaNetInetSocketAddress *JavaNetInetSocketAddress_createUnresolvedWithNSString_withInt_(NSString *host, jint port);

J2OBJC_STATIC_FIELD_GETTER(JavaNetInetSocketAddress, serialVersionUID, jlong)

#endif // _JavaNetInetSocketAddress_H_
