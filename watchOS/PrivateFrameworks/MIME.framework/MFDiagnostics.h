//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDiagnosticsGenerator-Protocol.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator>
{
    MFWeakSet *_diagnosticsGenerators;
    NSLock *_diagnosticLock;
}

+ (id)sharedController;
- (id)copyDiagnosticInformation;
- (void)removeDiagnosticsGenerator:(id)arg1;
- (void)addDiagnosticsGenerator:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

