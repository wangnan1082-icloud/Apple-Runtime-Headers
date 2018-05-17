//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSString;

@interface NPTunnelNSURLSessionDelegate : NSObject <NSURLSessionDelegate>
{
    BOOL _enableExtendedValidation;
    BOOL _ignoreInvalidCerts;
    BOOL _revocationFailClosed;
    NSString *_validationHostname;
    NSString *_leafOID;
}

@property BOOL revocationFailClosed; // @synthesize revocationFailClosed=_revocationFailClosed;
@property(retain) NSString *leafOID; // @synthesize leafOID=_leafOID;
@property BOOL ignoreInvalidCerts; // @synthesize ignoreInvalidCerts=_ignoreInvalidCerts;
@property BOOL enableExtendedValidation; // @synthesize enableExtendedValidation=_enableExtendedValidation;
@property(retain) NSString *validationHostname; // @synthesize validationHostname=_validationHostname;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
