//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangReflectAnnotatedElement.h"

@interface JavaLangReflectAccessibleObject : NSObject <JavaLangReflectAnnotatedElement>
{
    _Bool accessible_;
}

+ (void)setAccessibleWithJavaLangReflectAccessibleObjectArray:(id)arg1 withBoolean:(_Bool)arg2;
- (id)toGenericString;
- (id)getAnnotationsFromAccessor:(id)arg1;
- (_Bool)isAnnotationPresentWithIOSClass:(id)arg1;
- (id)getAnnotations;
- (id)getDeclaredAnnotations;
- (id)getAnnotationWithIOSClass:(id)arg1;
- (void)setAccessibleWithBoolean:(_Bool)arg1;
- (_Bool)isAccessible;
- (id)init;

@end
