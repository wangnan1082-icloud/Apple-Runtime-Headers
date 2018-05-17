//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSBackgroundEligibilityServiceProtocol.h"
#import "CSLSBackgroundServiceDelegate.h"

@class CSLSBackgroundServiceConnection, NSObject<OS_os_log>, NSString, Protocol<CSLSBackgroundServiceAutoConnecting>;

@interface CSLSBackgroundEligibilityService : NSObject <CSLSBackgroundServiceDelegate, CSLSBackgroundEligibilityServiceProtocol>
{
    CSLSBackgroundServiceConnection *_connection;
}

+ (id)sharedEligibilityService;
@property(readonly, nonatomic) CSLSBackgroundServiceConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)isBundleIDEligibleForBackgroundWork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_init;
- (id)init;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) Protocol<CSLSBackgroundServiceAutoConnecting> *remoteInterface;
@property(readonly, nonatomic) NSObject<OS_os_log> *log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
