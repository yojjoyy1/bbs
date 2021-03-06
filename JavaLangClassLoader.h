//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaLangClassLoader : NSObject
{
    JavaLangClassLoader *parent_;
    id <JavaUtilMap> packages_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_defineClassWithByteArray_withInt_withInt_;
+ (id)getSystemResourceAsStreamWithNSString:(id)arg1;
+ (id)getSystemResourcesWithNSString:(id)arg1;
+ (id)getSystemResourceWithNSString:(id)arg1;
+ (id)getSystemClassLoader;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)clearAssertionStatus;
- (void)setDefaultAssertionStatusWithBoolean:(_Bool)arg1;
- (void)setPackageAssertionStatusWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (void)setClassAssertionStatusWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (void)setSignersWithIOSClass:(id)arg1 withNSObjectArray:(id)arg2;
- (id)definePackageWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withJavaNetURL:(id)arg8;
- (id)getPackages;
- (id)getPackageWithNSString:(id)arg1;
- (id)findLibraryWithNSString:(id)arg1;
- (id)findResourcesWithNSString:(id)arg1;
- (id)findResourceWithNSString:(id)arg1;
- (void)resolveClassWithIOSClass:(id)arg1;
- (id)loadClassWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)loadClassWithNSString:(id)arg1;
- (id)getResourceAsStreamWithNSString:(id)arg1;
- (id)getResourcesWithNSString:(id)arg1;
- (id)getResourceWithNSString:(id)arg1;
- (id)getParent;
- (id)findSystemClassWithNSString:(id)arg1;
- (id)findLoadedClassWithNSString:(id)arg1;
- (id)findClassWithNSString:(id)arg1;
- (id)defineClassWithNSString:(id)arg1 withJavaNioByteBuffer:(id)arg2 withJavaSecurityProtectionDomain:(id)arg3;
- (id)defineClassWithNSString:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaSecurityProtectionDomain:(id)arg5;
- (id)defineClassWithNSString:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)defineClassWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithJavaLangClassLoader:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initJavaLangClassLoaderWithJavaLangClassLoader:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaLangClassLoader:(id)arg1;
- (id)init;

@end

