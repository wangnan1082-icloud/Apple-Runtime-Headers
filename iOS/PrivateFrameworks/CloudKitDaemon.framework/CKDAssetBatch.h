//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDAssetTokenRequest, CKDAssetZone, NSArray, NSData, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDAssetBatch : NSObject
{
    _Bool _isFailed;
    NSMutableArray *_assetRecords;
    CKDAssetZone *_assetZone;
    NSData *_authPutRequest;
    NSData *_authPutResponse;
    NSDictionary *_authPutResponseHeaders;
    CKDAssetTokenRequest *_assetTokenRequest;
}

@property(nonatomic) __weak CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(retain, nonatomic) NSDictionary *authPutResponseHeaders; // @synthesize authPutResponseHeaders=_authPutResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) CKDAssetZone *assetZone; // @synthesize assetZone=_assetZone;
@property(retain, nonatomic) NSMutableArray *assetRecords; // @synthesize assetRecords=_assetRecords;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isEmpty;
- (_Bool)isPackageSectionBatch;
- (id)firstMMCSItemError;
- (id)allMMCSAndSectionItems;
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int size;
@property(readonly) unsigned int sizeUpperBound;
- (void)addAssetRecord:(id)arg1;
- (id)initWithAssetZone:(id)arg1;

@end
