//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage
{
    NSDictionary *_info;
}

+ (id)feedbackType;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithInfo:(id)arg1;

@end
