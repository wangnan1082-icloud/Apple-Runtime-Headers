//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItemCollection, NSArray, NSFileProviderDomain, NSFileProviderManager, NSString, NSURL;

@interface FPProvider : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_storageURL;
    FPItemCollection *_itemCollection;
    _Bool _enabled;
    _Bool _empty;
    _Bool _isReadOnly;
    _Bool _usesUniqueItemIdentifiersAcrossDevices;
    NSString *_identifier;
    NSFileProviderDomain *_domain;
    NSString *_localizedName;
    long long _type;
    NSArray *_supportedSortDescriptors;
    NSArray *_supportedFileTypes;
    NSFileProviderManager *_manager;
    NSString *_providerIdentifier;
}

+ (void)fetchProviderWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)localizedTitleForSortDescriptor:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (void)fetchProviderForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchProviderForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchProviderWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) NSFileProviderManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool usesUniqueItemIdentifiersAcrossDevices; // @synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices;
@property(readonly, nonatomic) NSArray *supportedFileTypes; // @synthesize supportedFileTypes=_supportedFileTypes;
@property(readonly, nonatomic) NSArray *supportedSortDescriptors; // @synthesize supportedSortDescriptors=_supportedSortDescriptors;
@property(readonly, nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isiCloudDriveProvider;
- (void)setEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_initWithIdentifier:(id)arg1 domain:(id)arg2 localizedName:(id)arg3 storageURL:(id)arg4 supportedFileTypes:(id)arg5 type:(long long)arg6 isReadOnly:(_Bool)arg7 isEnabled:(_Bool)arg8 usesUniqueItemIdentifiers:(_Bool)arg9;
- (id)init;
@property(readonly, nonatomic) _Bool supportsEnumeration;
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@property(readonly, nonatomic) _Bool isAvailableSystemWide;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSURL *storageURL;
- (void)setStorageURL:(id)arg1;

@end

