//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LaunchServices/_LSQueryResult.h>

#import <LaunchServices/NSCopying-Protocol.h>
#import <LaunchServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface _UTType : _LSQueryResult <NSSecureCoding, NSCopying>
{
}

+ (struct __CFArray *)_copyIdentifiersWithQuery:(id)arg1;
+ (BOOL)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2;
+ (id)_localizationDictionaryForTypeWithIdentifier:(id)arg1 unit:(unsigned int)arg2 preferredLocalizations:(id)arg3;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_enumerateParentTypesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *_iconURL; // @dynamic _iconURL;
@property(readonly, nonatomic) NSSet *_pedigree; // @dynamic _pedigree;
@property(readonly, nonatomic) NSString *_kernelExtensionName; // @dynamic _kernelExtensionName;
@property(readonly, nonatomic) NSDictionary *_localizedDescriptionDictionary; // @dynamic _localizedDescriptionDictionary;
@property(readonly, nonatomic) NSString *_unlocalizedDescription; // @dynamic _unlocalizedDescription;
@property(readonly, nonatomic, getter=_isAppleInternal) BOOL _appleInternal; // @dynamic _appleInternal;
@property(readonly, nonatomic, getter=_isPublic) BOOL _public; // @dynamic _public;
@property(readonly, nonatomic, getter=_isActive) BOOL _active; // @dynamic _active;
@property(readonly, nonatomic) NSArray *parentIdentifiers; // @dynamic parentIdentifiers;
- (BOOL)conformsToTypeIdentifier:(id)arg1;
- (BOOL)conformsToType:(id)arg1;
@property(readonly, nonatomic) NSURL *referenceURL; // @dynamic referenceURL;
@property(readonly, nonatomic) NSDictionary *tagSpecification; // @dynamic tagSpecification;
@property(readonly, nonatomic, getter=isDeclared) BOOL declared; // @dynamic declared;
@property(readonly, nonatomic, getter=isDynamic) BOOL dynamic; // @dynamic dynamic;
@property(readonly, nonatomic) NSDictionary *declaration; // @dynamic declaration;
@property(readonly, nonatomic) NSURL *declaringBundleURL; // @dynamic declaringBundleURL;
@property(readonly, nonatomic) NSString *localizedDescription; // @dynamic localizedDescription;
@property(readonly, nonatomic) NSNumber *version; // @dynamic version;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic, getter=_isWildcard) BOOL _wildcard;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(BOOL)arg2;

@end

