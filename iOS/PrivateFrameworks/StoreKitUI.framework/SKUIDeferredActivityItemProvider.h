//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider
{
    SKUIProductPageItem *_productPageItem;
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _itemProvider;
}

+ (id)placeholderItem;
@property(copy) CDUnknownBlockType itemProvider; // @synthesize itemProvider=_itemProvider;
@property(retain) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
@property(readonly, copy) SKUIProductPageItem *productPageItem; // @synthesize productPageItem=_productPageItem;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3;

@end
