//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Inet4Address.java
//

#ifndef _JavaNetInet4Address_H_
#define _JavaNetInet4Address_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/net/InetAddress.h"

#define JavaNetInet4Address_serialVersionUID 3286316764910316507LL

@interface JavaNetInet4Address : JavaNetInetAddress {
}

- (instancetype)initWithByteArray:(IOSByteArray *)ipaddress
                     withNSString:(NSString *)hostName;

- (jboolean)isAnyLocalAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

@end

FOUNDATION_EXPORT BOOL JavaNetInet4Address_initialized;
J2OBJC_STATIC_INIT(JavaNetInet4Address)

J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ANY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, ANY_, JavaNetInetAddress *)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ALL_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, ALL_, JavaNetInetAddress *)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_LOOPBACK_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, LOOPBACK_, JavaNetInetAddress *)

#endif // _JavaNetInet4Address_H_
