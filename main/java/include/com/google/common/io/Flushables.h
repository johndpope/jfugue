//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/io/Flushables.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoFlushables_RESTRICT
#define ComGoogleCommonIoFlushables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoFlushables_RESTRICT
#if !defined (_ComGoogleCommonIoFlushables_) && (ComGoogleCommonIoFlushables_INCLUDE_ALL || ComGoogleCommonIoFlushables_INCLUDE)
#define _ComGoogleCommonIoFlushables_

@class JavaUtilLoggingLogger;
@protocol JavaIoFlushable;


@interface ComGoogleCommonIoFlushables : NSObject {
}

+ (void)flushWithJavaIoFlushable:(id<JavaIoFlushable>)flushable
                     withBoolean:(jboolean)swallowIOException;

+ (void)flushQuietlyWithJavaIoFlushable:(id<JavaIoFlushable>)flushable;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonIoFlushables_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonIoFlushables)
FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushWithJavaIoFlushable_withBoolean_(id<JavaIoFlushable> flushable, jboolean swallowIOException);
FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushQuietlyWithJavaIoFlushable_(id<JavaIoFlushable> flushable);

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonIoFlushables_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoFlushables, logger_, JavaUtilLoggingLogger *)
#endif
