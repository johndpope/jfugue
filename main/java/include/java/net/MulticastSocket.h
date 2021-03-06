//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/MulticastSocket.java
//

#ifndef _JavaNetMulticastSocket_H_
#define _JavaNetMulticastSocket_H_

@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

#import "JreEmulation.h"
#include "java/net/DatagramSocket.h"

@interface JavaNetMulticastSocket : JavaNetDatagramSocket {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)port;

- (instancetype)initWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddress;

- (JavaNetInetAddress *)getInterface;

- (JavaNetNetworkInterface *)getNetworkInterface;

- (jint)getTimeToLive;

- (jbyte)getTTL;

- (void)joinGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)leaveGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet
                             withByte:(jbyte)ttl;

- (void)setInterfaceWithJavaNetInetAddress:(JavaNetInetAddress *)address;

- (void)setNetworkInterfaceWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)networkInterface;

- (void)setTimeToLiveWithInt:(jint)ttl;

- (void)setTTLWithByte:(jbyte)ttl;

- (void)createSocketWithInt:(jint)aPort
     withJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (jboolean)getLoopbackMode;

- (void)setLoopbackModeWithBoolean:(jboolean)disable;

@end

__attribute__((always_inline)) inline void JavaNetMulticastSocket_init() {}

#endif // _JavaNetMulticastSocket_H_
