//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_data>, NSString;

@protocol SiriCoreSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (_Bool)siriCore_supportedByLocalSession;
- (void)siriCore_setSessionRequestId:(NSString *)arg1;
- (NSString *)siriCore_requestId;
- (NSObject<OS_dispatch_data> *)siriCore_serializedAceDataError:(id *)arg1;
- (void)siriCore_logDiagnostics;
- (_Bool)siriCore_canBeRemapped;
- (_Bool)siriCore_isRestartable;
- (_Bool)siriCore_isRetryable;
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;
@end
