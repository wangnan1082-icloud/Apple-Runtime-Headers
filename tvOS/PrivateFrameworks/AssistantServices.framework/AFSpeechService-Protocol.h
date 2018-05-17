//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, SiriCoreLocalSpeechDESRecord, SiriCoreLocalSpeechUserData;

@protocol AFSpeechService <NSObject>
- (oneway void)purgeInstalledAssetsWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)getInstalledAssetSizeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 localSpeechDESRecord:(SiriCoreLocalSpeechDESRecord *)arg2 attachments:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg4;
- (oneway void)fetchUserDataForLanguage:(NSString *)arg1 completion:(void (^)(SiriCoreLocalSpeechUserData *))arg2;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)updateSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 existingAssetPath:(NSString *)arg3 completion:(void (^)(NSData *, NSString *, NSError *))arg4;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 existingProfile:(NSData *)arg2 userData:(SiriCoreLocalSpeechUserData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 JSONData:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)finishAudio;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)startSpeechRecognitionWithLanguage:(NSString *)arg1 task:(NSString *)arg2 context:(NSArray *)arg3 profile:(NSData *)arg4 narrowband:(_Bool)arg5 detectUtterances:(_Bool)arg6 censorSpeech:(_Bool)arg7 maximumRecognitionDuration:(double)arg8 farField:(_Bool)arg9 overrides:(NSDictionary *)arg10 modelOverrideURL:(NSURL *)arg11 didStartHandler:(void (^)(NSString *, NSError *))arg12;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
- (oneway void)preheatSpeechRecognitionWithLanguage:(NSString *)arg1;
@end
