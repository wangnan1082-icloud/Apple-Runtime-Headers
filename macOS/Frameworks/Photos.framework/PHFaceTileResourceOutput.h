//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHResourceOutput.h>

@class PHFace;

@interface PHFaceTileResourceOutput : PHResourceOutput
{
    PHFace *_face;
}

- (void).cxx_destruct;
- (void)writeResourceToDisk;
- (id)resourceURL;
- (id)initWithSourceAsset:(id)arg1 face:(id)arg2;

@end

