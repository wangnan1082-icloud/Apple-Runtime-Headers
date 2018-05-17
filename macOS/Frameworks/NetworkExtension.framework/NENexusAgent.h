//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWNetworkAgent.h"

@class NSObject<NENexusAgentDelegate>, NSString, NSUUID, NWNetworkAgentRegistration;

@interface NENexusAgent : NSObject <NWNetworkAgent>
{
    BOOL active;
    BOOL supportsBrowseRequests;
    BOOL nexusProvider;
    unsigned int _frameType;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
@property __weak NSObject<NENexusAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned int frameType; // @synthesize frameType=_frameType;
@property(retain) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isNexusProvider) BOOL nexusProvider; // @synthesize nexusProvider;
@property(nonatomic) BOOL supportsBrowseRequests; // @synthesize supportsBrowseRequests;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void).cxx_destruct;
- (void)unassertAgentWithOptions:(id)arg1;
- (BOOL)assertAgentWithOptions:(id)arg1;
- (BOOL)startAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (BOOL)requestNexusWithOptions:(id)arg1;
@property(nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property(nonatomic, getter=isUserActivated) BOOL userActivated;
@property(nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property(nonatomic, getter=isVoluntary) BOOL voluntary;
- (id)copyAgentData;

@end
