//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage, NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject
{
    CDStruct_dcfba391 _description;
    // Error parsing type: , name: _size
    unsigned int _arrayLength;
    CIImage *_ciImage;
    id _texture;
    NSString *_name;
    int _referenceCount;
    int _timeStamp;
}

@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
- (id)ciImage;
- (_Bool)matchesDescription:(CDStruct_dcfba391 *)arg1 size:(unsigned int)arg2 arrayLength: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) unsigned char renderBufferFormat;
@property(readonly, nonatomic) _Bool viewportDependant;
- (id)description;
- (void)dealloc;
- (id)initWithDescription:(CDStruct_dcfba391 *)arg1 size:(unsigned int)arg2 arrayLength: /* Error: Ran out of types for this method. */;

@end
