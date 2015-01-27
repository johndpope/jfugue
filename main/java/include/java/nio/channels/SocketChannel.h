//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/SocketChannel.java
//

#ifndef _JavaNioChannelsSocketChannel_H_
#define _JavaNioChannelsSocketChannel_H_

@class IOSObjectArray;
@class JavaNetSocket;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/nio/channels/ByteChannel.h"
#include "java/nio/channels/GatheringByteChannel.h"
#include "java/nio/channels/NetworkChannel.h"
#include "java/nio/channels/ScatteringByteChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@interface JavaNioChannelsSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel > {
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

+ (JavaNioChannelsSocketChannel *)open;

+ (JavaNioChannelsSocketChannel *)openWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (jint)validOps;

- (JavaNetSocket *)socket;

- (JavaNioChannelsSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (JavaNioChannelsSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                            withId:(id)value;

- (id<JavaUtilSet>)supportedOptions;

- (jboolean)isConnected;

- (jboolean)isConnectionPending;

- (jboolean)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (jboolean)finishConnect;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)source;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources;

@end

__attribute__((always_inline)) inline void JavaNioChannelsSocketChannel_init() {}
FOUNDATION_EXPORT JavaNioChannelsSocketChannel *JavaNioChannelsSocketChannel_open();
FOUNDATION_EXPORT JavaNioChannelsSocketChannel *JavaNioChannelsSocketChannel_openWithJavaNetSocketAddress_(JavaNetSocketAddress *address);

#endif // _JavaNioChannelsSocketChannel_H_
