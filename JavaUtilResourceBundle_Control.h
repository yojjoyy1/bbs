//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaUtilResourceBundle_Control : NSObject
{
    id <JavaUtilList> format_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getNoFallbackControlWithJavaUtilList:(id)arg1;
+ (id)getControlWithJavaUtilList:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)toResourceNameWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)toBundleNameWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (_Bool)needsReloadWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withNSString:(id)arg3 withJavaLangClassLoader:(id)arg4 withJavaUtilResourceBundle:(id)arg5 withLong:(long long)arg6;
- (long long)getTimeToLiveWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)newBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withNSString:(id)arg3 withJavaLangClassLoader:(id)arg4 withBoolean:(_Bool)arg5;
- (id)getFallbackLocaleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)getFormatsWithNSString:(id)arg1;
- (id)getCandidateLocalesWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)init;

@end
