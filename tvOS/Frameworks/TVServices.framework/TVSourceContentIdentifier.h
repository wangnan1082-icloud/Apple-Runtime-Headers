//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVServices/TVContentIdentifier.h>

@class NSString, Protocol;

@interface TVSourceContentIdentifier : TVContentIdentifier
{
    Protocol *_sourcePublicProtocol;
}

@property(readonly, nonatomic) Protocol *sourcePublicProtocol; // @synthesize sourcePublicProtocol=_sourcePublicProtocol;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 container:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2;
@property(readonly, copy, nonatomic) NSString *sourceBundleIdentifier;

@end
