//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface ISImage : NSObject
{
    struct CGImage *_CGImage;
    NSUUID *_uuid;
    struct CGSize _size;
    double _scale;
    BOOL _placeholder;
}

+ (struct CGColorSpace *)defaultCGColorSpace;
+ (id)imageDestinationPropertiesForScale:(unsigned int)arg1;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 toURL:(id)arg2;
+ (struct CGImage *)newCGImageWithDataSource:(id)arg1;
+ (struct CGImage *)newCGImageWithCacheFileURL:(id)arg1;
+ (struct CGImage *)newCGImageWithContentsOfURL:(id)arg1;
@property(readonly) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(readonly) double scale; // @synthesize scale=_scale;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 uuid:(id)arg2;

@end

