//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPModelRequest, MPPropertySet, MPSectionedCollection;

@interface MPModelResponse : NSObject
{
    _Bool _valid;
    MPModelRequest *_request;
    MPPropertySet *_deferredSectionProperties;
    MPPropertySet *_deferredItemProperties;
    MPSectionedCollection *_results;
}

@property(copy, nonatomic) MPSectionedCollection *results; // @synthesize results=_results;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) MPPropertySet *deferredItemProperties; // @synthesize deferredItemProperties=_deferredItemProperties;
@property(retain, nonatomic) MPPropertySet *deferredSectionProperties; // @synthesize deferredSectionProperties=_deferredSectionProperties;
@property(readonly, copy, nonatomic) MPModelRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)debugDescription;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end
