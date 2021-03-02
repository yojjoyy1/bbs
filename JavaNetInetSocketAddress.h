//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetSocketAddress.h"

@class JavaNetInetAddress, NSString;

@interface JavaNetInetSocketAddress : JavaNetSocketAddress
{
    JavaNetInetAddress *addr_;
    NSString *hostname_;
    int port_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createUnresolvedWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isUnresolved;
- (id)getHostString;
- (id)getHostName;
- (id)getAddress;
- (int)getPort;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (id)initJavaNetInetSocketAddressWithNSString:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (id)initJavaNetInetSocketAddressWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (id)initWithInt:(int)arg1;
- (id)init;

@end
