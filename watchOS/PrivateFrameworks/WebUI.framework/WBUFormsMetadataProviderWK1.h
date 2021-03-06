//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/WBSFormsMetadataProvider-Protocol.h>

@class NSArray, NSString;

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider>
{
    NSArray *_framesForAllForms;
    NSArray *_metadataForAllForms;
}

+ (id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2;
- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int formCount;
- (id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

