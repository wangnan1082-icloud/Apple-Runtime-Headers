//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString, SFCard;

@interface SFCardViewAppearFeedback : SFFeedback
{
    SFCard *_card;
    unsigned int _level;
    NSString *_fbr;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

