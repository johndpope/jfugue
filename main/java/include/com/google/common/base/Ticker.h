//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/base/Ticker.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseTicker_RESTRICT
#define ComGoogleCommonBaseTicker_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseTicker_RESTRICT
#if ComGoogleCommonBaseTicker_$1_INCLUDE
#define ComGoogleCommonBaseTicker_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonBaseTicker_) && (ComGoogleCommonBaseTicker_INCLUDE_ALL || ComGoogleCommonBaseTicker_INCLUDE)
#define _ComGoogleCommonBaseTicker_


@interface ComGoogleCommonBaseTicker : NSObject {
}

- (instancetype)init;

- (jlong)read;

+ (ComGoogleCommonBaseTicker *)systemTicker;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonBaseTicker_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonBaseTicker)
FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonBaseTicker_systemTicker();

FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonBaseTicker_SYSTEM_TICKER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseTicker, SYSTEM_TICKER_, ComGoogleCommonBaseTicker *)
#endif
#if !defined (_ComGoogleCommonBaseTicker_$1_) && (ComGoogleCommonBaseTicker_INCLUDE_ALL || ComGoogleCommonBaseTicker_$1_INCLUDE)
#define _ComGoogleCommonBaseTicker_$1_


@interface ComGoogleCommonBaseTicker_$1 : ComGoogleCommonBaseTicker {
}

- (jlong)read;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseTicker_$1_init() {}
#endif