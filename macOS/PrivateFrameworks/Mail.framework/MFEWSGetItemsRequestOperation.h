//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetItemsResponseOperation, NSArray;

@interface MFEWSGetItemsRequestOperation : MFEWSRequestOperation
{
    NSArray *_EWSItemIds;
    NSArray *_additionalProperties;
}

@property(readonly, copy, nonatomic) NSArray *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, copy, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
- (void).cxx_destruct;
- (id)prepareRequest;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSGetItemsResponseOperation *responseOperation;
- (id)activityString;
- (id)description;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithEWSItemIds:(id)arg1 additionalProperties:(id)arg2 gateway:(id)arg3 errorHandler:(id)arg4;

@end

