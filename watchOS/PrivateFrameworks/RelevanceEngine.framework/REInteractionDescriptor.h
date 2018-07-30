//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "REIndentedDescription.h"

@class NSString;

@interface REInteractionDescriptor : NSObject <REIndentedDescription, NSCopying>
{
    _Bool _enableExploreExploit;
    NSString *_name;
    float _weight;
    float _exploreBias;
}

@property(nonatomic) float exploreBias; // @synthesize exploreBias=_exploreBias;
@property(nonatomic) _Bool enableExploreExploit; // @synthesize enableExploreExploit=_enableExploreExploit;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
