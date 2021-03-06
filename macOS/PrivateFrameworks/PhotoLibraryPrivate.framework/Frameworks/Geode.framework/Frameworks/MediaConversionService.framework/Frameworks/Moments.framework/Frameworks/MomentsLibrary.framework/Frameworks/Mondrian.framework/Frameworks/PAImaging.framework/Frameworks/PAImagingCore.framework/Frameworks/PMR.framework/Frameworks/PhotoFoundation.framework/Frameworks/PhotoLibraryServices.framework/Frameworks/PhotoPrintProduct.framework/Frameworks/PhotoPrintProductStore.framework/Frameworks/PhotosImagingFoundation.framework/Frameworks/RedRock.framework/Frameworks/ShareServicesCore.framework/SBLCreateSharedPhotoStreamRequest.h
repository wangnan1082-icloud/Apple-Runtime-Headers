//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareServicesCore/NSCopying-Protocol.h>
#import <ShareServicesCore/NSMutableCopying-Protocol.h>

@class SBLSharedPhotoStreamSettings;

@interface SBLCreateSharedPhotoStreamRequest : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _includeVideoComplement;
    SBLSharedPhotoStreamSettings *_streamSettings;
}

@property(nonatomic) BOOL includeVideoComplement; // @synthesize includeVideoComplement=_includeVideoComplement;
@property(retain) SBLSharedPhotoStreamSettings *streamSettings; // @synthesize streamSettings=_streamSettings;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)checkValidRequest:(id *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithSharedPhotoStreamSettings:(id)arg1;

@end

