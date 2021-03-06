//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareServicesCore/NSCopying-Protocol.h>
#import <ShareServicesCore/NSMutableCopying-Protocol.h>

@class NSArray, NSProgress, NSString, RDAlbum, SBLCreateSharedPhotoStreamRequest;

@interface SBLPostVersionsToSharedPhotoStreamRequest : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _allowLocation;
    BOOL _includeVideoComplement;
    NSArray *_versions;
    NSProgress *_progress;
    RDAlbum *_streamAlbum;
    SBLCreateSharedPhotoStreamRequest *_createStreamRequest;
    NSString *_cachedStreamIdentifier;
}

@property(retain) NSString *cachedStreamIdentifier; // @synthesize cachedStreamIdentifier=_cachedStreamIdentifier;
@property(nonatomic) BOOL includeVideoComplement; // @synthesize includeVideoComplement=_includeVideoComplement;
@property(retain) SBLCreateSharedPhotoStreamRequest *createStreamRequest; // @synthesize createStreamRequest=_createStreamRequest;
@property(retain) RDAlbum *streamAlbum; // @synthesize streamAlbum=_streamAlbum;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property BOOL allowLocation; // @synthesize allowLocation=_allowLocation;
@property(retain) NSArray *versions; // @synthesize versions=_versions;
- (void).cxx_destruct;
@property(readonly) NSString *streamIdentifier;
- (BOOL)checkValidRequest:(id *)arg1;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersions:(id)arg1 createStreamRequest:(id)arg2;
- (id)initWithVersions:(id)arg1 albumForSharedPhotoStream:(id)arg2;

@end

