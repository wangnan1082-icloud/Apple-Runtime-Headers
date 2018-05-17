//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _backgroundDownloadTaskIdentifier;
    _Bool _generateDerivative;
    _Bool _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    NSString *_itemIdentifier;
    unsigned int _resourceType;
}

+ (float)derivativeGenerationThreshold;
+ (unsigned int)maxPixelSizeForResourceType:(unsigned int)arg1;
+ (_Bool)hasPriorityBoostForResourceType:(unsigned int)arg1;
+ (id)shortDescriptionForResourceType:(unsigned int)arg1;
+ (id)descriptionForResourceType:(unsigned int)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool canGenerateDerivative; // @synthesize canGenerateDerivative=_canGenerateDerivative;
@property(nonatomic) _Bool generateDerivative; // @synthesize generateDerivative=_generateDerivative;
@property(nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (void)_setBackgroundDownloadTaskIdentifier:(unsigned int)arg1;
- (unsigned int)_backgroundDownloadTaskIdentifier;
- (_Bool)shouldApplyDataProtection;
- (_Bool)shouldCopy;
- (unsigned long long)estimatedResourceSize;
- (_Bool)isTrackedForUpload;
- (id)bestFileNameForResource;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned int)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
