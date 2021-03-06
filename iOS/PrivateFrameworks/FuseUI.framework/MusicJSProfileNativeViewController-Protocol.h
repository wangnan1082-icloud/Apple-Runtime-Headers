//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/JSExport-Protocol.h>
#import <FuseUI/MusicJSNativeViewController-Protocol.h>

@class IKDOMDocument, NSArray, NSDictionary, NSString;

@protocol MusicJSProfileNativeViewController <JSExport, MusicJSNativeViewController>
- (_Bool)supportsRelatedContentDocument;
- (void)setSocialHidden:(_Bool)arg1;
- (void)setSelectedSegment:(NSString *)arg1;
- (void)setSegmentDocument:(NSString *)arg1:(IKDOMDocument *)arg2:(NSDictionary *)arg3;
- (void)setReportingInformation:(NSDictionary *)arg1;
- (void)setNumberOfFollowers:(unsigned long long)arg1;
- (void)setFollowerCountText:(NSString *)arg1:(NSString *)arg2;
- (void)setVisibleSegments:(NSArray *)arg1;
- (void)setProfileEntityValueProvider:(NSDictionary *)arg1;
- (void)setRelatedContentDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)setMoreRelatedContentDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)setAvailableContentFlags:(NSDictionary *)arg1;
- (void)presentShareDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)presentBiographyEditorDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
@end

