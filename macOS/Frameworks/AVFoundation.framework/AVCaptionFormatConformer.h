//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVCaptionFormatConformer : NSObject
{
    void *_conformerInternal;
}

+ (id)captionFormatConformerWithConversionSettings:(id)arg1;
- (id)conformedCaptionForCaption:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL conformsCaptionTimeRange;
- (void)dealloc;
- (id)initWithConversionSettings:(id)arg1;
- (BOOL)_isConversionToClosedCaptions:(id)arg1;

@end
