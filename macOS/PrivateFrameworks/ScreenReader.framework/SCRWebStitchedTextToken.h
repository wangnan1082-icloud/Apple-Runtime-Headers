//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface SCRWebStitchedTextToken : NSObject
{
    NSAttributedString *_attributedString;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)description;

@end
