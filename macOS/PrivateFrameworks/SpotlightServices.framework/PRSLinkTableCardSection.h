//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightServices/PRSCardSection.h>

@class NSArray;

@interface PRSLinkTableCardSection : PRSCardSection
{
    NSArray *_links;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithTitle:(id)arg1 links:(id)arg2;

@end

