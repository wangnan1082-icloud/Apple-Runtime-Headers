//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

__attribute__((visibility("hidden")))
@interface SAMLEvidence : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) SAMLAssertion *assertion;
@property(readonly, nonatomic) NSString *assertionURIRef;
@property(readonly, nonatomic) NSString *assertionIdRef;

@end
