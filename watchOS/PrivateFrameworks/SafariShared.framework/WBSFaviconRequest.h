//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

#import "WBSIconRequest.h"

@class NSString;

@interface WBSFaviconRequest : WBSSiteMetadataRequest <WBSIconRequest>
{
}

@property(readonly, nonatomic) struct CGSize sizeForDrawing;
@property(readonly, nonatomic) _Bool isURLTypedByUser;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) unsigned int fallbackType;
@property(readonly, nonatomic) struct CGSize iconSize;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
- (id)_initWithURL:(id)arg1 type:(unsigned int)arg2 iconSize:(struct CGSize)arg3 fallbackType:(unsigned int)arg4 isURLTypedByUser:(_Bool)arg5;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned int)arg3 isURLTypedByUser:(_Bool)arg4;
- (id)initWithURL:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned int)arg3;
- (id)initWithDomain:(id)arg1 iconSize:(struct CGSize)arg2 fallbackType:(unsigned int)arg3;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
