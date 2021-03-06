//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

#import "JavaLangComparable.h"

@interface JavaLangByte : NSNumber <JavaLangComparable>
{
    BOOL value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)valueOfWithByte:(BOOL)arg1;
+ (id)valueOfWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)toStringWithByte:(BOOL)arg1;
+ (id)toHexStringWithByte:(BOOL)arg1 withBoolean:(_Bool)arg2;
+ (BOOL)parseByteWithNSString:(id)arg1 withInt:(int)arg2;
+ (BOOL)parseByteWithNSString:(id)arg1;
+ (id)decodeWithNSString:(id)arg1;
+ (int)compareWithByte:(BOOL)arg1 withByte:(BOOL)arg2;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (void)copyAllFieldsTo:(id)arg1;
- (id)description;
- (short)shortValue;
- (long long)longLongValue;
- (int)intValue;
- (unsigned long long)hash;
- (float)floatValue;
- (_Bool)isEqual:(id)arg1;
- (double)doubleValue;
- (int)compareToWithId:(id)arg1;
- (BOOL)charValue;
- (id)initWithNSString:(id)arg1;
- (id)initWithByte:(BOOL)arg1;
- (id)initJavaLangByteWithByte:(BOOL)arg1;

@end

