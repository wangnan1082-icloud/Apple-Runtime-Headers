//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ManagedPlugIn, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ManagedPlugInHostPolicy : NSObject
{
    ManagedPlugIn *_plugIn;
    NSString *_hostname;
    NSDate *_lastVisitedDate;
    int _policy;
    BOOL _runUnsandboxed;
    BOOL _webPageIsOpen;
    BOOL _policyIsManuallySetByUser;
    BOOL _managedByAdmin;
    BOOL _explicitlyCreatedByAdmin;
    BOOL _knownToUsePlugIn;
    BOOL _isUsedForSingleVisit;
    NSString *_pageURLString;
    NSDate *_datePolicyWasCreatedForSiteRequiringPlugInBeforePlugInWasAvailable;
}

+ (id)managedPlugInHostPolicyFromLegacyDictionaryRepresentation:(id)arg1;
+ (int)policyFromLegacyString:(id)arg1;
+ (int)policyFromString:(id)arg1;
+ (id)stringFromPolicy:(int)arg1;
+ (id)managedPlugInHostPolicyFromDictionaryRepresentation:(id)arg1;
@property(nonatomic) BOOL isUsedForSingleVisit; // @synthesize isUsedForSingleVisit=_isUsedForSingleVisit;
@property(nonatomic, getter=wasExplicitlyCreatedByAdmin) BOOL explicitlyCreatedByAdmin; // @synthesize explicitlyCreatedByAdmin=_explicitlyCreatedByAdmin;
@property(nonatomic, getter=isManagedByAdmin) BOOL managedByAdmin; // @synthesize managedByAdmin=_managedByAdmin;
@property(nonatomic) BOOL policyIsManuallySetByUser; // @synthesize policyIsManuallySetByUser=_policyIsManuallySetByUser;
@property(nonatomic) BOOL webPageIsOpen; // @synthesize webPageIsOpen=_webPageIsOpen;
@property(nonatomic) BOOL runUnsandboxed; // @synthesize runUnsandboxed=_runUnsandboxed;
@property(retain, nonatomic) NSDate *datePolicyWasCreatedForSiteRequiringPlugInBeforePlugInWasAvailable; // @synthesize datePolicyWasCreatedForSiteRequiringPlugInBeforePlugInWasAvailable=_datePolicyWasCreatedForSiteRequiringPlugInBeforePlugInWasAvailable;
@property(nonatomic, getter=isKnownToUsePlugIn) BOOL knownToUsePlugIn; // @synthesize knownToUsePlugIn=_knownToUsePlugIn;
@property(copy, nonatomic) NSDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property(copy, nonatomic) NSString *pageURLString; // @synthesize pageURLString=_pageURLString;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) __weak ManagedPlugIn *plugIn; // @synthesize plugIn=_plugIn;
- (void).cxx_destruct;
@property(nonatomic) int policy;
- (id)dictionaryRepresentation;
- (id)hostnameForDisplay;
- (BOOL)isLocalFilePolicy;
- (id)initWithPlugIn:(id)arg1 hostname:(id)arg2 pageURLString:(id)arg3 policy:(int)arg4 runUnsandboxed:(BOOL)arg5 managedByAdmin:(BOOL)arg6 knownToUsePlugIn:(BOOL)arg7;

@end
