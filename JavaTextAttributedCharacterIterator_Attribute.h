//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaTextAttributedCharacterIterator_Attribute : NSObject <JavaIoSerializable>
{
    NSString *name_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)readResolve;
- (unsigned long long)hash;
- (id)getName;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNSString:(id)arg1;

@end
