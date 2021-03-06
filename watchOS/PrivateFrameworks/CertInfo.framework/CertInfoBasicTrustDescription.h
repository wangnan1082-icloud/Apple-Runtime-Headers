//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CertInfo/CertInfoTrustDescription-Protocol.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust *_trust;
    int _action;
}

- (id)_expirationDate;
- (id)certificatePropertiesAtIndex:(unsigned int)arg1;
- (id)certificateExpirationDateAtIndex:(unsigned int)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned int)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned int)arg1;
- (unsigned int)certificateCount;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

