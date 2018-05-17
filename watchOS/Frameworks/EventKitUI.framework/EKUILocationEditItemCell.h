//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface EKUILocationEditItemCell : UITableViewCell
{
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    UIButton *_clearButton;
    CDUnknownBlockType _clearButtonTapped;
}

@property(copy, nonatomic) CDUnknownBlockType clearButtonTapped; // @synthesize clearButtonTapped=_clearButtonTapped;
- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(_Bool)arg2 availabilityRequestInProgress:(_Bool)arg3 availabilityType:(int)arg4;
- (id)description;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
