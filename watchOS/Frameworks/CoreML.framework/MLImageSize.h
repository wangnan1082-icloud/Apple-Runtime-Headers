//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLImageSize : NSObject
{
    int _pixelsWide;
    int _pixelsHigh;
}

@property(readonly) int pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
@property(readonly) int pixelsWide; // @synthesize pixelsWide=_pixelsWide;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImageSize:(id)arg1;
- (unsigned int)hash;
- (id)initWithPixelsWide:(int)arg1 pixelsHigh:(int)arg2;

@end

