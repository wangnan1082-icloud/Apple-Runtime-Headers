//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGTintOperation : DGOperation
{
    NSNumber *_inputAngle;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle=_inputAngle;
- (BOOL)isQuickBrush;
- (BOOL)isMaskable;
- (id)processImage:(id)arg1 options:(id)arg2;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filter;

@end

