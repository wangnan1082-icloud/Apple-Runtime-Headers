//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IAPNavigationAccessory : NSObject
{
    _Bool __wasFoundInLastUpdate;
    unsigned int _identifier;
    NSSet *_components;
}

@property _Bool _wasFoundInLastUpdate; // @synthesize _wasFoundInLastUpdate=__wasFoundInLastUpdate;
@property(retain) NSSet *components; // @synthesize components=_components;
@property unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (_Bool)requestedSourceNameForAnyComponent;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

