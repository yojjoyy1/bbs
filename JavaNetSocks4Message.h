//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSByteArray;

@interface JavaNetSocks4Message : NSObject
{
    IOSByteArray *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)setVersionNumberWithInt:(int)arg1;
- (void)setStringWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (int)getVersionNumber;
- (id)getStringWithInt:(int)arg1 withInt:(int)arg2;
- (id)getBytes;
- (id)getErrorStringWithInt:(int)arg1;
- (int)getLength;
- (id)description;
- (void)setUserIdWithNSString:(id)arg1;
- (id)getUserId;
- (void)setIPWithByteArray:(id)arg1;
- (int)getIP;
- (void)setPortWithInt:(int)arg1;
- (int)getPort;
- (void)setCommandOrResultWithInt:(int)arg1;
- (int)getCommandOrResult;
- (id)init;

@end
