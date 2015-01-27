//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/Posix.java
//

#ifndef _LibcoreIoPosix_H_
#define _LibcoreIoPosix_H_

@class IOSByteArray;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class LibcoreIoStructAddrinfo;
@class LibcoreIoStructFlock;
@class LibcoreIoStructGroupReq;
@class LibcoreIoStructGroupSourceReq;
@class LibcoreIoStructLinger;
@class LibcoreIoStructStat;
@class LibcoreIoStructStatVfs;
@class LibcoreIoStructTimeval;
@class LibcoreIoStructUtsname;
@class LibcoreUtilMutableInt;
@class LibcoreUtilMutableLong;

#import "JreEmulation.h"
#include "libcore/io/Os.h"

@interface LibcoreIoPosix : NSObject < LibcoreIoOs > {
}

- (instancetype)init;


- (JavaIoFileDescriptor *)acceptWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                            withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)peerAddress;

- (jboolean)accessWithNSString:(NSString *)path
                       withInt:(jint)mode;

- (void)bindWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
              withJavaNetInetAddress:(JavaNetInetAddress *)address
                             withInt:(jint)port;

- (jboolean)canAccessWithNSString:(NSString *)path
                          withInt:(jint)mode;

- (void)chmodWithNSString:(NSString *)path
                  withInt:(jint)mode;

- (void)chownWithNSString:(NSString *)path
                  withInt:(jint)uid
                  withInt:(jint)gid;

- (void)closeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)javaFd;

- (void)connectWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNetInetAddress:(JavaNetInetAddress *)address
                                withInt:(jint)port;

- (JavaIoFileDescriptor *)dupWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)oldFd;

- (JavaIoFileDescriptor *)dup2WithJavaIoFileDescriptor:(JavaIoFileDescriptor *)oldFd
                                               withInt:(jint)newNativeFd;

- (void)fchmodWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                               withInt:(jint)mode;

- (void)fchownWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                               withInt:(jint)uid
                               withInt:(jint)gid;

- (jint)fcntlFlockWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                   withInt:(jint)cmd
                  withLibcoreIoStructFlock:(LibcoreIoStructFlock *)arg;

- (jint)fcntlLongWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                  withInt:(jint)cmd
                                 withLong:(jlong)arg;

- (jint)fcntlVoidWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                  withInt:(jint)cmd;

- (void)fdatasyncWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (LibcoreIoStructStat *)fstatWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)fsyncWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)ftruncateWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                 withLong:(jlong)length;

- (NSString *)gai_strerrorWithInt:(jint)error;

- (IOSObjectArray *)getaddrinfoWithNSString:(NSString *)node
                withLibcoreIoStructAddrinfo:(LibcoreIoStructAddrinfo *)javaHints;

- (NSString *)getnameinfoWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                        withInt:(jint)flags;

- (JavaNetSocketAddress *)getsocknameWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (jint)getsockoptByteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                       withInt:(jint)level
                                       withInt:(jint)option;

- (JavaNetInetAddress *)getsockoptInAddrWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                         withInt:(jint)level
                                                         withInt:(jint)option;

- (jint)getsockoptIntWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                      withInt:(jint)level
                                      withInt:(jint)option;

- (LibcoreIoStructLinger *)getsockoptLingerWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                            withInt:(jint)level
                                                            withInt:(jint)option;

- (LibcoreIoStructTimeval *)getsockoptTimevalWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                              withInt:(jint)level
                                                              withInt:(jint)option;

- (NSString *)if_indextonameWithInt:(jint)index;

- (JavaNetInetAddress *)inet_ptonWithInt:(jint)family
                            withNSString:(NSString *)address;

- (JavaNetInetAddress *)ioctlInetAddressWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                         withInt:(jint)cmd
                                                    withNSString:(NSString *)interfaceName;

- (jint)ioctlIntWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                 withInt:(jint)cmd
               withLibcoreUtilMutableInt:(LibcoreUtilMutableInt *)javaArg;

- (jboolean)isattyWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (jlong)lseekWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                              withLong:(jlong)offset
                               withInt:(jint)whence;

- (LibcoreIoStructStat *)lstatWithNSString:(NSString *)path;

- (void)listenWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                               withInt:(jint)backlog;

- (void)mincoreWithLong:(jlong)address
               withLong:(jlong)byteCount
          withByteArray:(IOSByteArray *)vector;

- (void)mkdirWithNSString:(NSString *)path
                  withInt:(jint)mode;

- (void)mlockWithLong:(jlong)address
             withLong:(jlong)byteCount;

- (jlong)mmapWithLong:(jlong)address
             withLong:(jlong)byteCount
              withInt:(jint)prot
              withInt:(jint)flags
withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
             withLong:(jlong)offset;

- (void)msyncWithLong:(jlong)address
             withLong:(jlong)byteCount
              withInt:(jint)flags;

- (void)munlockWithLong:(jlong)address
               withLong:(jlong)byteCount;

- (void)munmapWithLong:(jlong)address
              withLong:(jlong)byteCount;

- (JavaIoFileDescriptor *)openWithNSString:(NSString *)path
                                   withInt:(jint)flags
                                   withInt:(jint)mode;

- (IOSObjectArray *)pipe;

- (jint)pollWithLibcoreIoStructPollfdArray:(IOSObjectArray *)fds
                                   withInt:(jint)timeoutMs;

- (jint)preadWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                             withLong:(jlong)offset;

- (jint)preadWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                        withByteArray:(IOSByteArray *)bytes
                              withInt:(jint)byteOffset
                              withInt:(jint)byteCount
                             withLong:(jlong)offset;

- (jint)pwriteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                              withLong:(jlong)offset;

- (jint)pwriteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)byteOffset
                               withInt:(jint)byteCount
                              withLong:(jlong)offset;

- (jint)readWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
               withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)readWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                       withByteArray:(IOSByteArray *)bytes
                             withInt:(jint)byteOffset
                             withInt:(jint)byteCount;

- (jint)readvWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                    withNSObjectArray:(IOSObjectArray *)buffers
                         withIntArray:(IOSIntArray *)offsets
                         withIntArray:(IOSIntArray *)byteCounts;

- (NSString *)realpathWithNSString:(NSString *)path;

- (jint)recvfromWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                   withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                                 withInt:(jint)flags
            withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)srcAddress;

- (jint)recvfromWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                           withByteArray:(IOSByteArray *)bytes
                                 withInt:(jint)byteOffset
                                 withInt:(jint)byteCount
                                 withInt:(jint)flags
            withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)srcAddress;

- (void)removeWithNSString:(NSString *)path;

- (void)renameWithNSString:(NSString *)oldPath
              withNSString:(NSString *)newPath;

- (jlong)sendfileWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)outFd
                 withJavaIoFileDescriptor:(JavaIoFileDescriptor *)inFd
               withLibcoreUtilMutableLong:(LibcoreUtilMutableLong *)inOffset
                                 withLong:(jlong)byteCount;

- (jint)sendtoWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                               withInt:(jint)flags
                withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                               withInt:(jint)port;

- (jint)sendtoWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)byteOffset
                               withInt:(jint)byteCount
                               withInt:(jint)flags
                withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                               withInt:(jint)port;

- (void)setsockoptByteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                       withInt:(jint)level
                                       withInt:(jint)option
                                       withInt:(jint)value;

- (void)setsockoptGroupReqWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                           withInt:(jint)level
                                           withInt:(jint)option
                       withLibcoreIoStructGroupReq:(LibcoreIoStructGroupReq *)structGroupReq;

- (void)setsockoptGroupSourceReqWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                 withInt:(jint)level
                                                 withInt:(jint)option
                       withLibcoreIoStructGroupSourceReq:(LibcoreIoStructGroupSourceReq *)structGroupSourceReq;

- (void)setsockoptIfreqWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                        withInt:(jint)level
                                        withInt:(jint)option
                                   withNSString:(NSString *)interfaceName;

- (void)setsockoptIntWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                      withInt:(jint)level
                                      withInt:(jint)option
                                      withInt:(jint)value;

- (void)setsockoptIpMreqnWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                          withInt:(jint)level
                                          withInt:(jint)option
                                          withInt:(jint)value;

- (void)setsockoptLingerWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                         withInt:(jint)level
                                         withInt:(jint)option
                       withLibcoreIoStructLinger:(LibcoreIoStructLinger *)structLinger;

- (void)setsockoptTimevalWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                          withInt:(jint)level
                                          withInt:(jint)option
                       withLibcoreIoStructTimeval:(LibcoreIoStructTimeval *)structTimeval;

- (void)shutdownWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                 withInt:(jint)how;

- (JavaIoFileDescriptor *)socketWithInt:(jint)domain
                                withInt:(jint)type
                                withInt:(jint)protocol;

- (void)socketpairWithInt:(jint)domain
                  withInt:(jint)type
                  withInt:(jint)protocol
 withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd1
 withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd2;

- (LibcoreIoStructStat *)statWithNSString:(NSString *)path;

- (LibcoreIoStructStatVfs *)statvfsWithNSString:(NSString *)path;

- (NSString *)strerrorWithInt:(jint)errno_;

- (jlong)sysconfWithInt:(jint)name;

- (void)symlinkWithNSString:(NSString *)oldPath
               withNSString:(NSString *)newPath;

- (void)tcdrainWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (LibcoreIoStructUtsname *)uname;

- (jint)writeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)writeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                        withByteArray:(IOSByteArray *)bytes
                              withInt:(jint)byteOffset
                              withInt:(jint)byteCount;

- (jint)writevWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                     withNSObjectArray:(IOSObjectArray *)buffers
                          withIntArray:(IOSIntArray *)offsets
                          withIntArray:(IOSIntArray *)byteCounts;

@end

__attribute__((always_inline)) inline void LibcoreIoPosix_init() {}

#endif // _LibcoreIoPosix_H_
