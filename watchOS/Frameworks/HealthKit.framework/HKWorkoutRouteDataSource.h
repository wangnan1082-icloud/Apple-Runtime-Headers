//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKWorkoutDataSource.h"
#import "HKWorkoutRouteDataSourceClientInterface.h"
#import "_HKXPCExportable.h"

@class HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKWorkoutRouteDataSource : NSObject <_HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource>
{
    id <HKWorkoutRouteDataSourceDelegate> _delegate;
    NSUUID *_identifier;
    NSUUID *_sessionIdentifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)serverIdentifier;
@property(readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HKWorkoutRouteDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)clientRemote_didUpdateRoute:(id)arg1;
- (void)clientRemote_didUpdateElevation:(id)arg1;
- (void)workoutBuilderDidFinish;
- (id)initWithWorkoutSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
