//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangReflectAnnotatedElement.h"
#import "JavaLangReflectGenericDeclaration.h"
#import "JavaLangReflectType.h"
#import "NSCopying.h"

@class Protocol;

@interface IOSClass : NSObject <JavaLangReflectAnnotatedElement, JavaLangReflectGenericDeclaration, JavaIoSerializable, JavaLangReflectType, NSCopying>
{
}

+ (struct J2ObjcClassInfo *)__metadata;
+ (long long)serialVersionUID;
+ (void)initialize;
+ (id)forName:(id)arg1 initialize:(_Bool)arg2 classLoader:(id)arg3;
+ (id)forName:(id)arg1;
+ (id)primitiveClassForChar:(unsigned short)arg1;
+ (id)classForIosName:(id)arg1;
+ (id)stringClass;
+ (id)objectClass;
+ (id)voidClass;
+ (id)booleanClass;
+ (id)shortClass;
+ (id)longClass;
+ (id)intClass;
+ (id)floatClass;
+ (id)doubleClass;
+ (id)charClass;
+ (id)byteClass;
+ (id)arrayClassWithComponentType:(id)arg1;
+ (id)classWithProtocol:(id)arg1;
+ (id)classWithClass:(Class)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)__convertRawValue:(CDUnion_f43d4af3 *)arg1 toType:(id)arg2;
- (void)__writeRawValue:(CDUnion_f43d4af3 *)arg1 toAddress:(const void *)arg2;
- (void)__readRawValue:(CDUnion_f43d4af3 *)arg1 fromAddress:(const void *)arg2;
- (_Bool)__unboxValue:(id)arg1 toRawValue:(CDUnion_f43d4af3 *)arg2;
- (id)__boxValue:(CDUnion_f43d4af3 *)arg1;
- (id)getResourceAsStream:(id)arg1;
- (id)getResource:(id)arg1;
- (id)getEnumConstants;
- (_Bool)desiredAssertionStatus;
- (_Bool)isAnonymousClass;
- (id)getEnclosingConstructor;
- (id)getEnclosingMethod;
- (id)getFields;
- (id)getDeclaredFields;
- (id)getField:(id)arg1;
- (id)getDeclaredField:(id)arg1;
- (id)getClassLoader;
- (id)getPackage;
- (id)getMetadata;
- (id)getDeclaredAnnotations;
- (id)getAnnotations;
- (_Bool)isAnnotationPresentWithIOSClass:(id)arg1;
- (id)getAnnotationWithIOSClass:(id)arg1;
- (id)getTypeParameters;
- (id)getGenericInterfaces;
- (id)getInterfaces;
- (id)getInterfacesWithArrayType:(id)arg1;
- (_Bool)isSynthetic;
- (_Bool)isLocalClass;
- (_Bool)isMemberClass;
- (_Bool)isAnnotation;
- (_Bool)isPrimitive;
- (_Bool)isInterface;
- (_Bool)isEnum;
- (_Bool)isArray;
- (id)getEnclosingClass;
- (id)cast:(id)arg1;
- (id)binaryName;
- (id)description;
- (id)asSubclass:(id)arg1;
- (_Bool)isAssignableFrom:(id)arg1;
- (id)getDeclaredConstructor:(id)arg1;
- (id)getConstructor:(id)arg1;
- (id)getComponentType;
- (id)findMethodWithTranslatedName:(id)arg1;
- (id)getDeclaredMethod:(id)arg1 parameterTypes:(id)arg2;
- (id)getMethod:(id)arg1 parameterTypes:(id)arg2;
- (id)getConstructors;
- (id)getMethods;
- (id)getDeclaredConstructors;
- (id)getDeclaredMethods;
- (void)collectMethods:(id)arg1 publicOnly:(_Bool)arg2;
- (int)getModifiers;
- (id)objcName;
- (id)getCanonicalName;
- (id)getSimpleName;
- (id)getName;
- (_Bool)isInstance:(id)arg1;
- (id)getGenericSuperclass;
- (id)getSuperclass;
- (id)newInstance;
@property(readonly) Protocol *objcProtocol;
@property(readonly) Class objcClass;
- (id)init;

@end

