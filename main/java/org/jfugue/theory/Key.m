//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/theory/Key.java
//

#include "org/jfugue/provider/KeyProvider.h"
#include "org/jfugue/provider/KeyProviderFactory.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Key.h"
#include "org/jfugue/theory/Note.h"
#include "org/jfugue/theory/Scale.h"

BOOL OrgJfugueTheoryKey_initialized = NO;

@implementation OrgJfugueTheoryKey

OrgJfugueTheoryKey * OrgJfugueTheoryKey_DEFAULT_KEY_;

- (instancetype)initWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)root
                   withOrgJfugueTheoryScale:(OrgJfugueTheoryScale *)scale_ {
  if (self = [super init]) {
    self->root_ = root;
    self->scale__ = scale_;
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  if (self = [super init]) {
    self->root_ = [((OrgJfugueTheoryChord *) nil_chk(chord)) getRoot];
    if ([chord isMajor]) {
      self->scale__ = OrgJfugueTheoryScale_get_MAJOR_();
    }
    else if ([chord isMinor]) {
      self->scale__ = OrgJfugueTheoryScale_get_MINOR_();
    }
  }
  return self;
}

- (instancetype)initWithNSString:(NSString *)keySignature {
  return [self initOrgJfugueTheoryKeyWithOrgJfugueTheoryKey:[((id<OrgJfugueProviderKeyProvider>) nil_chk(OrgJfugueProviderKeyProviderFactory_getKeyProvider())) createKeyWithNSString:keySignature]];
}

- (instancetype)initOrgJfugueTheoryKeyWithOrgJfugueTheoryKey:(OrgJfugueTheoryKey *)key {
  if (self = [super init]) {
    self->root_ = ((OrgJfugueTheoryKey *) nil_chk(key))->root_;
    self->scale__ = key->scale__;
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryKey:(OrgJfugueTheoryKey *)key {
  return [self initOrgJfugueTheoryKeyWithOrgJfugueTheoryKey:key];
}

- (NSString *)getKeySignature {
  return JreStrcat("$$", [((OrgJfugueTheoryNote *) nil_chk(self->root_)) description], [((OrgJfugueTheoryScale *) nil_chk(self->scale__)) description]);
}

- (OrgJfugueTheoryNote *)getRootNote {
  return self->root_;
}

- (OrgJfugueTheoryScale *)getScale {
  return self->scale__;
}

- (void)copyAllFieldsTo:(OrgJfugueTheoryKey *)other {
  [super copyAllFieldsTo:other];
  other->root_ = root_;
  other->scale__ = scale__;
}

+ (void)initialize {
  if (self == [OrgJfugueTheoryKey class]) {
    OrgJfugueTheoryKey_DEFAULT_KEY_ = [[OrgJfugueTheoryKey alloc] initWithNSString:@"C4maj"];
    J2OBJC_SET_INITIALIZED(OrgJfugueTheoryKey)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTheoryNote:withOrgJfugueTheoryScale:", "Key", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryChord:", "Key", NULL, 0x1, NULL },
    { "initWithNSString:", "Key", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryKey:", "Key", NULL, 0x1, NULL },
    { "getKeySignature", NULL, "Ljava.lang.String;", 0x1, NULL },
    { "getRootNote", NULL, "Lorg.jfugue.theory.Note;", 0x1, NULL },
    { "getScale", NULL, "Lorg.jfugue.theory.Scale;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "root_", NULL, 0x2, "Lorg.jfugue.theory.Note;", NULL,  },
    { "scale__", "scale", 0x2, "Lorg.jfugue.theory.Scale;", NULL,  },
    { "DEFAULT_KEY_", NULL, 0x19, "Lorg.jfugue.theory.Key;", &OrgJfugueTheoryKey_DEFAULT_KEY_,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTheoryKey = { "Key", "org.jfugue.theory", NULL, 0x1, 7, methods, 3, fields, 0, NULL};
  return &_OrgJfugueTheoryKey;
}

@end
