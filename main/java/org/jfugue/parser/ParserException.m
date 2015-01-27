//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/parser/ParserException.java
//

#include "org/jfugue/parser/ParserException.h"

@implementation OrgJfugueParserParserException

- (instancetype)initWithNSString:(NSString *)exception
                    withNSString:(NSString *)errantString {
  if (self = [super initWithNSString:JreStrcat("$$$", exception, @": ", errantString)]) {
    position_ = -1;
    self->exception_ = exception;
    self->errantString_ = errantString;
  }
  return self;
}

- (void)setPositionWithInt:(jint)position {
  self->position_ = position;
}

- (jint)getPosition {
  return self->position_;
}

- (NSString *)getMessage {
  if (position_ > -1) {
    return [NSString stringWithString:JreStrcat("$$$$IC", self->exception_, @": ", errantString_, @" (Position ", position_, ')')];
  }
  else {
    return [NSString stringWithString:JreStrcat("$$$", self->exception_, @": ", errantString_)];
  }
}

- (void)copyAllFieldsTo:(OrgJfugueParserParserException *)other {
  [super copyAllFieldsTo:other];
  other->exception_ = exception_;
  other->errantString_ = errantString_;
  other->position_ = position_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:withNSString:", "ParserException", NULL, 0x1, NULL },
    { "setPositionWithInt:", "setPosition", "V", 0x1, NULL },
    { "getPosition", NULL, "I", 0x1, NULL },
    { "getMessage", NULL, "Ljava.lang.String;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "serialVersionUID_", NULL, 0x1a, "J", NULL, .constantValue.asLong = OrgJfugueParserParserException_serialVersionUID },
    { "exception_", NULL, 0x2, "Ljava.lang.String;", NULL,  },
    { "errantString_", NULL, 0x2, "Ljava.lang.String;", NULL,  },
    { "position_", NULL, 0x2, "I", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueParserParserException = { "ParserException", "org.jfugue.parser", NULL, 0x1, 4, methods, 4, fields, 0, NULL};
  return &_OrgJfugueParserParserException;
}

@end
