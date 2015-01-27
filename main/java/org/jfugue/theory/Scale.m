//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/theory/Scale.java
//

#include "org/jfugue/theory/Intervals.h"
#include "org/jfugue/theory/Scale.h"

BOOL OrgJfugueTheoryScale_initialized = NO;

@implementation OrgJfugueTheoryScale

OrgJfugueTheoryScale * OrgJfugueTheoryScale_MAJOR_;
OrgJfugueTheoryScale * OrgJfugueTheoryScale_MINOR_;
OrgJfugueTheoryScale * OrgJfugueTheoryScale_CIRCLE_OF_FIFTHS_;

- (instancetype)initWithNSString:(NSString *)intervalString {
  return [self initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:[[OrgJfugueTheoryIntervals alloc] initWithNSString:intervalString]];
}

- (instancetype)initWithNSString:(NSString *)intervalString
                    withNSString:(NSString *)name {
  return [self initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:[[OrgJfugueTheoryIntervals alloc] initWithNSString:intervalString] withNSString:name];
}

- (instancetype)initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)pattern {
  if (self = [super init]) {
    self->intervals_ = pattern;
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)pattern {
  return [self initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:pattern];
}

- (instancetype)initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)pattern
                                                        withNSString:(NSString *)name {
  if (self = [super init]) {
    self->intervals_ = pattern;
    self->name_ = name;
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)pattern
                                    withNSString:(NSString *)name {
  return [self initOrgJfugueTheoryScaleWithOrgJfugueTheoryIntervals:pattern withNSString:name];
}

- (OrgJfugueTheoryScale *)setNameWithNSString:(NSString *)name {
  self->name_ = name;
  return self;
}

- (NSString *)getName {
  return self->name_;
}

- (OrgJfugueTheoryIntervals *)getIntervals {
  return self->intervals_;
}

- (OrgJfugueTheoryScale *)setMajorOrMinorIndicatorWithByte:(jbyte)indicator {
  self->majorMinorIndicator_ = indicator;
  return self;
}

- (jbyte)getMajorOrMinorIndicator {
  return self->majorMinorIndicator_;
}

- (NSString *)description {
  if (self->majorMinorIndicator_ == OrgJfugueTheoryScale_MAJOR_INDICATOR) {
    return @"maj";
  }
  else if (self->majorMinorIndicator_ == OrgJfugueTheoryScale_MINOR_INDICATOR) {
    return @"min";
  }
  else {
    return self->name_;
  }
}

- (void)copyAllFieldsTo:(OrgJfugueTheoryScale *)other {
  [super copyAllFieldsTo:other];
  other->intervals_ = intervals_;
  other->name_ = name_;
  other->majorMinorIndicator_ = majorMinorIndicator_;
}

+ (void)initialize {
  if (self == [OrgJfugueTheoryScale class]) {
    OrgJfugueTheoryScale_MAJOR_ = [((OrgJfugueTheoryScale *) [[OrgJfugueTheoryScale alloc] initWithOrgJfugueTheoryIntervals:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 2 3 4 5 6 7"]]) setMajorOrMinorIndicatorWithByte:OrgJfugueTheoryScale_MAJOR_INDICATOR];
    OrgJfugueTheoryScale_MINOR_ = [((OrgJfugueTheoryScale *) [[OrgJfugueTheoryScale alloc] initWithOrgJfugueTheoryIntervals:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 2 b3 4 5 b6 b7"]]) setMajorOrMinorIndicatorWithByte:OrgJfugueTheoryScale_MINOR_INDICATOR];
    OrgJfugueTheoryScale_CIRCLE_OF_FIFTHS_ = [[OrgJfugueTheoryScale alloc] initWithOrgJfugueTheoryIntervals:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 2 3b 4 5 6 7b"]];
    J2OBJC_SET_INITIALIZED(OrgJfugueTheoryScale)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:", "Scale", NULL, 0x1, NULL },
    { "initWithNSString:withNSString:", "Scale", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryIntervals:", "Scale", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryIntervals:withNSString:", "Scale", NULL, 0x1, NULL },
    { "setNameWithNSString:", "setName", "Lorg.jfugue.theory.Scale;", 0x1, NULL },
    { "getName", NULL, "Ljava.lang.String;", 0x1, NULL },
    { "getIntervals", NULL, "Lorg.jfugue.theory.Intervals;", 0x1, NULL },
    { "setMajorOrMinorIndicatorWithByte:", "setMajorOrMinorIndicator", "Lorg.jfugue.theory.Scale;", 0x1, NULL },
    { "getMajorOrMinorIndicator", NULL, "B", 0x1, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "intervals_", NULL, 0x2, "Lorg.jfugue.theory.Intervals;", NULL,  },
    { "name_", NULL, 0x2, "Ljava.lang.String;", NULL,  },
    { "majorMinorIndicator_", NULL, 0x2, "B", NULL,  },
    { "MAJOR_", NULL, 0x19, "Lorg.jfugue.theory.Scale;", &OrgJfugueTheoryScale_MAJOR_,  },
    { "MINOR_", NULL, 0x19, "Lorg.jfugue.theory.Scale;", &OrgJfugueTheoryScale_MINOR_,  },
    { "CIRCLE_OF_FIFTHS_", NULL, 0x19, "Lorg.jfugue.theory.Scale;", &OrgJfugueTheoryScale_CIRCLE_OF_FIFTHS_,  },
    { "MAJOR_INDICATOR_", NULL, 0x19, "B", NULL, .constantValue.asChar = OrgJfugueTheoryScale_MAJOR_INDICATOR },
    { "MINOR_INDICATOR_", NULL, 0x19, "B", NULL, .constantValue.asChar = OrgJfugueTheoryScale_MINOR_INDICATOR },
  };
  static const J2ObjcClassInfo _OrgJfugueTheoryScale = { "Scale", "org.jfugue.theory", NULL, 0x1, 10, methods, 8, fields, 0, NULL};
  return &_OrgJfugueTheoryScale;
}

@end