//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilIllegalFormatException.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaUtilIllegalFormatFlagsException : JavaUtilIllegalFormatException <JavaIoSerializable>
{
    NSString *flags_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getMessage;
- (id)getFlags;
- (id)initWithNSString:(id)arg1;

@end

